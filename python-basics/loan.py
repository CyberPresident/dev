owed = float(input('starting loan: '))
payment = float(input('monthly payment: '))
interest = float(input('yearly interest rate: '))

interest_monthly = (interest / 12) / 100
month = 0

while owed >=0 and month <= 300:
    print(owed)
    owed = owed - payment
    owed = owed + (owed * interest_monthly)
    month += 1

print(f'months to pay off = {month}')