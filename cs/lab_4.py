"""
4. write a python program that reads a file containing a list of passwords, 
One per line. it checks each password to see if its meets certain 
requirements(eg. at least 8 characters, contains both uppercase and lowercase 
letters ) and at least one number and one special character . passwords that 
satisfy the requirements Should be printed by the program.
"""

import re


def is_valid_password(password):

    if len(password) < 8:
        return False

    if not re.search(r'[a-z]', password) or not re.search(r'[A-Z]', password):
        return False

    if not re.search(r'\d', password):
        return False

    if not re.search(r'[!@#$%^&*())_]', password):
        return False

    return True


def main():

    file_path = input("enter the file path ")
    try:

        with open(file_path, 'r') as file:
            passwords = file.read().splitlines()

            for password in passwords:
                if is_valid_password(password):
                    print('valid password')
                else:
                    print('not a valid password')

    except FileNotFoundError:
        print('file not found ')


if __name__ == "__main__":
    main()
