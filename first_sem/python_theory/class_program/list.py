marks=['sachin',50,25,80,90,51] #list contains marks of 'sachin'//static initialisation befor execution
my_marks=[] #dynamic initialisation---initialisating the during execution
for i in range(5):
    new_mark=int(input("enter the marks"))
    my_marks.append(new_mark)
print("list elements are:")
for i in range(len(my_marks)):
    print("my_marks",my_marks[i])