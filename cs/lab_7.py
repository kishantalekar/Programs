def brute_force(target_pin):

    for guess in range(10000):

        guess_str = f"{guess:04d}"

        if guess_str == target_pin:
            return guess_str
    return None


if __name__ == '__main__':
    target_pin = input("enter the pin ")

    cracked_pin = brute_force(target_pin)

    if cracked_pin == target_pin:
        print(f'cracked pin {cracked_pin}')
    else:
        print('failed to crack pin')
