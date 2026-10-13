#demonstrate bank operations using tuple and list
# tuple=name,panno,accountno,DOB
#list=emailid,phoneno,address,balance,
accountdetails=[] #list
emailid=input("enter the emailid:")
phoneno=int(input("enter the phone:"))
address=input("enter the address:")
balance=int(input("enter the balance:"))
accountdetails.append(["emailid","phoneno","address","balance"])

mydetails=() #tuple
name=input("enter the name:")
panno=int(input("enter the panno:"))
accno=int(input("enter the accno:"))
dob=int(input("enter the dob:"))
mydetails=(name,panno,accno,dob)
accountdetails.append(mydetails)

print("accountdeatils:\n",accountdetails)
print("mydetails:\n",accountdetails)
