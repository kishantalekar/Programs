import requests
import hashlib
import getpass

headers = {
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}


def check_password_leak(password):
    sha_256 = hashlib.sha1(password.encode('utf-8')).hexdigest().upper()

    prefix, suffix = sha_256[:5], sha_256[5:]

    url = f"https://api.pwnedpasswords.com/range/{prefix}"
    reponse = requests.get(url, headers=headers)

    if reponse.status_code == 200:
        hashes = (line.split(':') for line in reponse.text.splitlines())

        return any(suffix in line for line in hashes)
    else:
        raise Exception(f'error checking password {reponse.status_code}')


def main():
    file_path = input("enter the file path")

    try:

        with open(file_path, 'r') as file:

            for line in file:
                username, password = map(str.strip, line.split(','))

                print(f"checking password for ${username}")

                if check_password_leak(password):
                    print(f"password for ${username} has been leaked")
                else:
                    print(f"password for ${username} is secure")
    except FileNotFoundError:
        print('file not found')
    except Exception as e:
        print(f'an error occured ${e}')


main()
