import random
import string


def generate_random_password(length=8):
    characters = string.ascii_letters+string.punctuation+string.digits

    password = "".join((random.choice(characters)
                        for _ in range(length)))

    return password


res = input("do you want to generate custom length password ? yes or no")

if res == 'no':
    default_password = generate_random_password()
    print("default password : ", default_password)
else:
    length = int(input("enter the length of the password"))
    custom_length_password = generate_random_password(length)
    print("custom length password : ", custom_length_password)
