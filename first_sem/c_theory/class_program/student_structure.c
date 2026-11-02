#include<stdio.h>

//global structure variable "accessed anywhere in the method"
struct student{
    char name[20];
    int reg;
    int submark[3];
    int total; ///to store total maks
    float average;//to store avg marks
};
struct student students[5];
void studentdata(){/// method to inistialise student
    struct student students[5];//memory allocaton
    for(int i=0;i<5;i++){
        printf("enter %d student data:\n",i+1);
        printf("enter the student reg\n");
        scanf("%d",&students[i].reg);
        printf("enter the student name\n");
        scanf("%s",&students[i].name);
        for (int j=0;j<5;j++){
            printf("enter  the submark:\n");
            scanf("%d",&students[i].submark[j]);
        }
    }

}
int studenttotal(){//find total marks of three subject
     for(int i=0;i<5;i++){
        students[i].total=students[i].submark[0]+students[i].submark[1]+students[i].submark[2];
       
     }
  
   
}
int studentaverage(){
    for(int i=0;i<5;i++){
        students[i].average=students[i].total/3.0;
        }
}
void displaystudent(){
    for (int i=0;i<5;i++){
        printf("%s\t%d\t",students[i].name,students[i].reg);
        for(int j=0;j<5;j++){  
            printf("%d\t",students[i].submark[j]);
        }
        printf("total %2.f:",students[i].total);
        printf("average:%2.f",students[i].average);
}
}
int main(){
     //array of sturcture --///acessing the variable inside respective main is called scoope of the variable
    studentdata();
    studenttotal();
    studentaverage(); 
    displaystudent();
}
