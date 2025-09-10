class OverdraftError(Exception):
    def __init__(self, bal,amt):
        super().__init__(f"Cannot Withdraw {amt};"
                         f" balance is only {bal}")
        self.bal = bal
        self.amt = amt


def withdraw(bal,amt):
    if amt>bal:
        raise OverdraftError(bal ,amt)
    return bal-amt

try:
    new_bal=withdraw(100,150)
except OverdraftError as e:
    print("Withdrawl Error:",e)    