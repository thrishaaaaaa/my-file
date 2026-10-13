

#include<stdio.h>
int rollno,firstnumber,secondnumber,thirdnumber,fourthnumber,fifthnumber;
float total;float avg;float cgpa;
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
int gettotal(){
    total=firstnumber+secondnumber+thirdnumber+fourthnumber+fifthnumber;
    return total;
}
float getavg(){
    avg=total/5;
    return avg;
}
float getcgpa(){
    cgpa=avg/9.5;
    return cgpa;
}

int main(){
    getstudentdata();
    float total=gettotal();
    float avg=getavg();
    float cgpa=getcgpa();
    printf("total is :%f\n",total);
    printf("avg is :%f\n",avg);
    printf("cgap is:%.f\n",cgpa);
}