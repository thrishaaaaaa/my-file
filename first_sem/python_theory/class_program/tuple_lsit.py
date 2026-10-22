#list
accdetails=[]
email_id=input("enter the email id:")
contact_no=int(input("enter the contact no:"))
address=input("enter the address:")
balance= int(input("enter the balance:"))

#tuple
accno=int(input("enter the acc no:"))
holder_name=input("enter the name:")
dob= int(input("enter the dob:"))
mylist=[email_id,contact_no,address,balance] 
mytuple=(accno,holder_name,dob,mylist)
print(mytuple)
accdetails.append(mytuple)
print("accdetails",mytuple)
print(mytuple[0],"\t\t",mytuple[1],"\t",mytuple[2],"\t",mytuple[3][0])

print("contact:",mytuple[3][1])
print("address:",mytuple[3][2])
print("balance:",mytuple[3][3])

mytuple[1]=="anu"
print("\ntuple elements cannot be modified")
mytuple[3][3]=int(input("enter updated balance\n"))
print("updated balance:",mytuple)

