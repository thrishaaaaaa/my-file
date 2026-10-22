#marks=['sachin',50,25,80,90,51] #list contains marks of 'sachin'//static initialisation befor execution
#my_marks=[] #dynamic initialisation---initialisating the during execution
#for i in range(5):
  #  new_mark=int(input("enter the marks"))
 #   my_marks.append(new_mark)
#print("list elements are:")
#for i in range(len(my_marks)):
#    print("my_marks",my_marks[i])

student_marks=[]
for i in range(5):
    name=input("enter the name:\n")
    student=[name]
    for j in range(5):
        marks=int(input("enter the marks:\n"))
        student.append(marks)

    total=sum(student[1:6])
    student.append(total)
    student_marks.append(student)
print(f"{'name':<12}{'s1':<8}{'s2':<8}{'s3':<8}{'s4':<8}{'s5':<8}{'total':<8}")
for i in range(len(student_marks)):
    print(f"{student_marks[i][0]:<12}",end="")
    for j in range(1,7):
        print(f"{student_marks[i][j]:<8}",end="")
    print()    