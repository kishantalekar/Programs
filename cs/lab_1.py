import hashlib


def hash_password(password):
    sha_256 = hashlib.sha256()

    sha_256.update(password.encode('utf-8'))

    hashed_password = sha_256.hexdigest()

    return hashed_password


password = input("enter a password : ")
hashed_password = hash_password(password)

print("SHA-256 password : ", hashed_password)
