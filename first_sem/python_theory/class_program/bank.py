balance=0.0
while True:
    print("----welcome to my bank----\n")
    print("1.deposite\n")
    print("2.withdraw\n")
    print("3.account details\n")
    print("4.exit\n")
    choice=int(input("enter the choice:"))
    if choice==1:
        amount=float(input("enter the  deposite amount"))
        if amount<0:
            print("negative amount is not allowed")
        else:
            balance+=amount
            print("deposite successfull")
            print("current balance",balance)
    elif choice==2:
        if amount<0:
            print("nagative amount is not allowed")
        elif amount>balance:
            print("insufficient balance")
        else:
            print("withdraw successfull")
            print("current balance",balance)
    elif choice==3:
        print("acc details\n")
        print("amount blance",balance)
    elif choice==4:
        print("thank you for banking")
        break
    else:
        print("invalid choice")            

