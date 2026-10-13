roll=0
sub1=0
sub2=0
sub3=0
total=0
avg=0
def studentdetails():
    global sub1mark,sub2mark,sub3mark
    Name=input("enter the name:")
    roll=int(input("enter the rollnumber:"))
    sub1mark=int(input("enter the sub1mark:"))
    sub2mark=int(input("enter the sub2mark:"))
    sub3mark=int(input("enter the sub3mark:"))
    return Name,roll,sub1mark,sub2mark,sub3mark
def total():
    global total
    total=sub1mark+sub2mark+sub3mark
    print("total is :\n",total)
    return total
def avg():
    global avg
    avg=sub1mark+sub2mark+sub3mark/3
    print("avg is :\n",avg)
    return avg
        
def percent():
    percent=(total/300)*100
    print("percent\n")
    return percent
def grade():    
    global percent
    if percent<35:
        print("fail\n")
    elif percent>35 and percent<60:
        print("firstclass")
    elif percent>60 and percent<85:
        print("secondclass")
    else:
        print("distinction")
    print("grade\n")
    return grade
for i in range(1,4):
    print(f"student:{i}")
    studentdetails()
    total()
    avg()
    percent()
    grade()






                       
