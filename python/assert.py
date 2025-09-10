def withdraw(bal,amt):
    assert amt > 0, "Withdrawal must be positive"
    new_bal = bal - amt
    assert new_bal >= 0, "Insuffecient funds"
    return new_bal


print(withdraw(100,50))
print(withdraw(100,150))