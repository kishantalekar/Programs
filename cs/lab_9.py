def caesar_decrypt(ciphertext, shift):

    plaintext = ""

    for char in ciphertext:
        if char.isalpha():
            if char.isupper():
                plaintext += chr((ord(char)-shift-65) % 26+65)
            else:
                plaintext += chr((ord(char)-shift-97) % 26+97)
        else:
            plaintext += char
    return plaintext


def caesar_hack(cipehertext):

    for shift in range(26):
        decrypted_text = caesar_decrypt(cipehertext, shift)

        print(f"shift {shift} : {decrypted_text}")


if __name__ == "__main__":
    encrypted_message = input("enter the encrypted message : ")

    caesar_hack(encrypted_message)
