import re


def isValidPassword(password):

    if len(password) < 8:
        return False

    if not any(c.isupper() for c in password):
        return False

    if not any(c.islower() for c in password):
        return False

    if not any(c.isdigit() for c in password):
        return False

    if not re.search(r'[!@#$$%^]', password):
        return False

    return True


password = input("enter a password")

if isValidPassword(password):
    print("valid password")
else:
    print('not valid password')
