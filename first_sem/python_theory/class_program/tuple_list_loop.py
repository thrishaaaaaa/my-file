number=int(input("enter the array number"))
accountdetails=[]

for n in range(number):
    emailid=input("enter the emailid:")
    phoneno=int(input("enter the phone:"))#LIST
    address=input("enter the address:")
    balance=int(input("enter the balance:"))



    name=input("enter the name:")
    panno=int(input("enter the panno:"))
    accno=int(input("enter the accno:"))#TUPLE
    dob=int(input("enter the dob:"))
    mylist=[emailid,phoneno,address,balance]
    mytuple=(name,panno,accno,dob,mylist)
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
        if accno==mytuple[2]:
            print("---account found---\n")
            print("show list",mytuple)
            deposite=int(input("enter the deposite:\n"))
            mytuple[4][3] = mytuple[4][3]+deposite
            print("balance updated",mytuple[4][3])
            break
    else:
        print("account  not found.....\n")
elif choice==2:
    accno=int(input("enter the accno:"))
    for mytuple in accountdetails:
        if accno==mytuple[2]:
            print("---account found---\n")
            print("show list",mytuple)
            withdraw=int(input('enter the withdraw:\n'))
            mytuple[4][3]=mytuple[4][3]-withdraw
            print("balance updated",mytuple[4][3])
            break
    else:
        print("account not found...\n")
elif choice==3:
    accno=int(input("enter the accno:"))
    for mytuple in accountdetails:
        if accno==mytuple[2]:
            print("---account found---\n")
            print("name",mytuple[0])
            print("panno",mytuple[1])
            print("accno",mytuple[2])
            print("dob",mytuple[3])
            print("emailid",mytuple[4][0])
            print("phoneno",mytuple[4][1])
            print("address",mytuple[4][2])
            print("balance",mytuple[4][3])
            break
    else:
        print("account not found\n")    
else:
    print("invalid choice\n")
    print("exit\n")
            











        
        




    





