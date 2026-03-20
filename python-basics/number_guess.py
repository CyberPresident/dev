from random import randint

number = randint(1,100)

while True:
    guess = int(input('your number: '))

    if guess > number:
        print(f'{guess} is to high, try again')
    elif guess < number:
        print(f'{guess} is to low, try again')
    else:
        print(f'{guess} is correct')
        break
