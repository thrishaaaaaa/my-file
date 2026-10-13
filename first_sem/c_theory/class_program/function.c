#include<stdio.h>
int rollno,firstnumber,secondnumber,thirdnumber,fourthnumber,fifthnumber;
int total,avg,cgpa;
void getstudentdata(){
    printf("enter rollnumber:");
    scanf("%d",&rollno);
    printf("enter firstmark:");
    scanf("%d",&firstnumber);
    printf("enter secondmark:");
    scanf("%d",&secondnumber);
    printf("enter thirdmark:");
    scanf("%d",&thirdnumber);
    printf("enter fourthmark:");
    scanf("%d",&fourthnumber);
    printf("enter fifthmark:");
    scanf("%d",fifthnumber);
}
void gettotal(){
    total=firstnumber+secondnumber+thirdnumber+fourthnumber+fifthnumber;
}
void getavg(){
    avg=total/5;
}
void getcgpa(){
    cgpa=avg/9.5;
}
void getstudentdetails(){
    printf("total is :%d",total);
    printf("avg is :%d",avg);
    printf("cgpa is :%d",cgpa);
}
int main(){
    getstudentdata();
    gettotal();
    getavg();
    getcgpa();
    
}