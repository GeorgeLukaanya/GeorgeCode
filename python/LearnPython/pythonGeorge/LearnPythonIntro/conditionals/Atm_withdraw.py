#Use if-else statment to check to check account balance before allowing withdrawal

account_balance = 1000  # Example starting balance

withdraw_amount = float(input("Enter amount to withdraw: "))

if withdraw_amount <= account_balance:
    account_balance -= withdraw_amount
    print(f"Withdrawal successful! New balance: {account_balance}")
else:
    print("Insufficient funds. Withdrawal denied.")