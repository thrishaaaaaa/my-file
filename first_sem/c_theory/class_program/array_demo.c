//store and display 5 subject marks
#include<stdio.h>
int main(){
    int  my_marks[5];//int array for size 5 
    int sub_marks[5]; //declare an array 'sub_marks'
    // with size 5 of 'int' type
    //storing data/array initilization-array_name[index]=data/value;
sub_marks[0]=80;//stores '80' in aarray position whose index is 0
sub_marks[1]=78;
sub_marks[2]=68;
sub_marks[3]=58;
sub_marks[4]=88;  // size-1,static array initialization
printf("first sub marks:%d\n",sub_marks[0]);//fectch array element from sub_marks
printf("second sub marks:%d\n",sub_marks[1]);//fectch array element from sub_marks
printf("third sub marks:%d\n",sub_marks[2]);//fectch array element from sub_marks
printf("fourth sub marks:%d\n",sub_marks[3]);//fectch array element from sub_marks
printf("fifth sub marks:%d\n",sub_marks[4]);//fectch array element from sub_marks

//dynamic initialisation of my_marks
for(int i=0;i<5;i++){
    printf("enter the %d sub marks[int data]:",i+1);
    scanf("%d",&my_marks[i]);
}
// printf("enter the firstsub mark[int data]:");
//scanf("%d",& my_marks);



printf("sub1 mark:%d\n",my_marks[0]);
printf("sub2 mark:%d\n",my_marks[1]);
printf("sub3 mark:%d\n",my_marks[2]);
printf("sub4 mark:%d\n",my_marks[3]);
printf("sub5 mark:%d\n",my_marks[4]);
}