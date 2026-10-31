#include <stdio.h>
#include <stdlib.h> 
#define size 5
//include is directive---stidio.h header file


// Global variables 

int myqueue[size];
int front= -1,rear=-1; 
int isfull(){
    if(rear==size-1){
        printf("queue is full.cannot add element:\n");
        return 1;
    }
    return 0;
}
int isempty(){
    if(front==-1 && rear==-1){
        printf("queue is empty..\n");
        return 1;
    }
    return 0;
}

// Case 1: insert data using enqueue
void enqueue(int newdata) {
    if(isfull()) {
        printf("queue is full\n");
}else{
        rear++;
        myqueue[rear]=newdata;
        printf("%d is enqueue to  rear of  queue\n", newdata);
}
}

// Case 2: retrive  data using  dequeue

void dequeue(int newdata){
    if (isempty()) {
        printf("queue underflow! No elements to  remove\n");

    } 
    else {
        front++;
        int retrive_data=myqueue[front];
        printf("%d is dequeue to front of queue\n",retrive_data);
        
    }
}

// Case 3: Method definition for display
void display() {
    if (front == -1) {
        printf("queue is empty.\n");
    } 
    else {
        printf("Current stack elements (top to bottom):\n");
        for (int i = rear; i >= 0; i--) {
            printf("| %d |", myqueue[i]);
        }
        
    }
}
int main() {
    int option;
    int mydata;
    do {
        printf("1.enqueue data\n");
        printf("2.dequeue data\n");
        printf("3.display data\n");
        printf("4.exit\n");
        printf("enter your choice: ");
        scanf("%d", &option);
        printf("\n"); 

        switch (option) {
            case 1:
                printf("enter the queue data: ");
                scanf("%d", &mydata);
                enqueue(mydata);
                break;
                
            case 2:
                dequeue(mydata);
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0); 
                
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (option != 4);

    return 0;
}