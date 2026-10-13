#include<stdio.h>
int rollno[5],submarks[5][5],total[5],fail[5];float percent[5],avg[5];
char name[5][50]; 

void input(){
    int i,j;
    for( i=0;i<5;i++){
        printf("enter name\n");
        scanf("%s",& name[i]);
        printf("enter rollnumber\n");
        scanf("%d",&rollno[i]);
        for (j=0;j<5;j++){
        printf("enter submarks%d:\n",j+1);
        scanf("%d",&submarks[i][j]);
    }
    printf("--------------------------\n");

}
}
void calculate(){ 
     int i,j;
    for(i=0;i<5;i++){
        total[i]=0;
        fail[i]=0;
        for(j=0;j<5;j++){
        total[i]+= submarks[i][j];
        
        if (submarks[i][j]<35){
            fail[i]=1;
        }
    }avg[i]=total[i]/5.0;
    percent[i]=(total[i]/500.0)*100;
    
    }
}
void display(){
    int i;
    for(i=0;i<5;i++){
        printf("student:%d\n",i+1);
        printf("name:%s\n",name[i]);
        printf("rollno:%d\n",rollno[i]);
        printf("total:%d\n",total[i]);
        printf("avg:%.2f\n",avg[i]);
        printf("percentage:%.2f\n",percent[i]);
        if (fail[i]==1){
            printf("fail\n");
        }else{
            printf("pass\n");
        }
        printf("----------------------------\n");
    }
}

int main(){
    input();
    calculate();
    display();
}

