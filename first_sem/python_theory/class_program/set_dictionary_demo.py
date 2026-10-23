# collect employeename,number,companyname,salary,

employeename=input("enter the employeename:")
number=int(input("enter the number:"))
companyname=input("enter the companayname:")
salary=int(input("enter the salary:"))
address=input("enter the address:")

employee={employeename,number,companyname,salary}
employee.add(address)

dict_employee={"name":employeename,
                "number":number,
                "companyname":companyname,
                "salary":salary}
dict_employee["address"]=address


print("employee details using set...\n")
print(employee)
print(f"employeename","number","companyname","salary","address")
for i in employee:
    print(i,end=" ") 
print()       

print("employee details using dictionary....\n")
print(dict_employee)


