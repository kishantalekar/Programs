def caesar_encrypt(text, shift):

    encrypted = ""

    for char in text:

        if char.isalpha():
            shifted = ord(char)+shift
            if char.islower():
                encrypted += chr((shifted - 97) % 26 + 97)
            else:
                encrypted += chr((shifted-65) % 26+65)

        else:
            encrypted += char
    return encrypted


def caesar_decrypt(text, shift):
    return caesar_encrypt(text, -shift)


def main():
    message = input("enter the message")
    shift = int(input("enter the shift value"))

    encrypted_message = caesar_encrypt(message, shift)

    print("encrypted message : ", encrypted_message)

    decrypted_message = caesar_decrypt(encrypted_message, shift)

    print("decrypted message : ", decrypted_message)


main()
