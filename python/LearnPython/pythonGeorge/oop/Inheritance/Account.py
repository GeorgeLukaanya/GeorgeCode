class Account:
    def show_balance(self):
        print("Balance not available")

class SavingsAccount(Account):
    def show_balance(self):
        super().show_balance()
        print("Your balance is $1000")


a = Account()
a.show_balance()

s = SavingsAccount()
s.show_balance()