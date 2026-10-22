number=int(input("enter the array number"))
accountdetails=[]

for n in range(number):
    emailid=input("enter the emailid:")
    balance=int(input("enter the balance:"))
    address=input("enter the address")



    name=input("enter the name:")
    accno=int(input("enter the accno:"))#TUPLE
    mylist=[emailid,address,balance]
    mytuple=(name,accno,mylist)
    print(mytuple)
    accountdetails.append(mytuple)
print(accountdetails)


print("-----bank operation-----")
print("1.deposite\n")
print("2.withdraw\n")
print("3.show account\n")

choice=int(input("enter the choice"))
if choice==1:
    accno=int(input("enter the accno:"))
    for mytuple in accountdetails:
        if accno==mytuple[1]:
            print("---account found---\n")
            print("show list",mytuple)
            deposite=int(input("enter the deposite:\n"))
            mytuple[2][2] = mytuple[2][2]+deposite
            print("balance updated",mytuple[2][2])
            break
    else:
        print("account  not found.....\n")
elif choice==2:
    accno=int(input("enter the accno:"))
    for mytuple in accountdetails:
        if accno==mytuple[1]:
            print("---account found---\n")
            print("show list",mytuple)
            withdraw=int(input('enter the withdraw:\n'))
            mytuple[2][2]=mytuple[2][2]-withdraw
            print("balance updated",mytuple[2][2])
            break
    else:
        print("account not found...\n")
elif choice==3:
    accno=int(input("enter the accno:"))
    for mytuple in accountdetails:
        if accno==mytuple[1]:
            print("---account found---\n")
            print("\tname",mytuple[0])
            print("\taccno",mytuple[1])
            print("\temailid",mytuple[2][0])
            print("\tbalance",mytuple[2][1])
            print("\taddress",mytuple[2][2])
            break
    else:
        print("account not found\n")    
else:
    print("invalid choice\n")
    print("exit\n")
            











        
        




    





