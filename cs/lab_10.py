import rsa


def generate_keys():
    return rsa.newkeys(512)


def encrypt_message(message, public_key):
    return rsa.encrypt(message.encode('utf-8'), public_key)


def decrypt_message(encrypted_message, private_key):
    return rsa.decrypt(encrypted_message, private_key).decode('utf-8')


if __name__ == '__main__':
    public_key, private_key = generate_keys()

    message = input("enter the message to be encrypted : ")

    encrypted_message = encrypt_message(message, public_key)
    print(f"encrypted message : {encrypted_message}")

    decrypted_message = decrypt_message(encrypted_message, private_key)
    print(f"decrypted message : {decrypted_message}")
