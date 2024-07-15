import base64


def main():

    while True:

        print("\n base64 encoding and decoding")

        print("enter 1 for encoding \n")
        print("enter 2 for decoding \n")
        print("enter 3 to exit \n")

        choice = input("enter the choice : ")

        if choice == '1':
            data = input("enter the string to encode : ")
            encoded_data = base64.b64encode(data.encode()).decode()
            print(f'encoded data : {encoded_data}')
        elif choice == '2':
            encoded_data = input("enter the encoded string to decode  ")
            decoded_data = base64.b64decode(encoded_data).decode()
            print(f'decoded data : ', decoded_data)

        elif choice == '3':
            break
        else:
            print("invalid choice ")


main()
