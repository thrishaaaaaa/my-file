#include<stdio.h>
struct student{
    //structure member
    int id;//id
    char name[10];//name
    char contactno[10];//contactno----//sturcture defination
    int pin;//pin
};
int main(){
    struct student firststudent;// creating structure variable 'firststudent' of type'student'
    struct student secondstudent;
    firststudent.id=100;//memeber 'id' of firststudent
    secondstudent.id=101;///initialisation
    printf("firststudent:%d\n",firststudent.id);
    printf("secondstudent:%d",secondstudent.id);
    }//library for multiple  book infromation

    ///manage a software company identify  the variables and data structure to implement them