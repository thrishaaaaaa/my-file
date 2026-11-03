/*
 * Clinic Patient Queue - Lab Exercise
 * ------------------------------------
 * Implement a queue (FIFO) to manage patients waiting to see a doctor.
 *
 * Rules:
 *   - Maximum 5 patients can wait at a time (MAX).
 *   - Token numbers start at 101 and increase by 1 for every new patient.
 *   - The patient who registers first is called first.
 *
 * TODO: Complete every function marked "TODO". Do NOT change main().
 */

#include <stdio.h>
#include <string.h>

#define MAX 5

struct Patient {
    int token;
    char name[30];
};

/* Global queue variables */
struct Patient queue[MAX];
int front = -1;
int rear = -1;
int nextToken = 101;   /* Token number to be issued to the next patient */

/* Function prototypes */
int  isFull();
int  isEmpty();
void enqueue(char name[]);
void dequeue();
void peek();
void display();
int  count();

/* ------------------------------------------------------------------ */

/*
 * Return 1 if the waiting room (queue) is full, otherwise 0.
 */
int isFull()
{
    /* TODO */
    if(rear==MAX-1){
        printf("queue is full..\n");
        return 1;
    }
    
    return 0;
}

/*
 * Return 1 if no patient is waiting, otherwise 0.
 */
int isEmpty()
{
    /* TODO */
    if(front==-1 && rear==-1){
        return 1;
    }
    return 0;
}

/*
 * Register a new patient:
 *   - If the queue is full, print "Waiting room full! Please come later."
 *   - Otherwise, assign nextToken to the patient, copy the name,
 *     add the patient at the rear, and print:
 *       "Token <token> issued to <name>."
 */
void enqueue(char name[])
{
    /* TODO */
    if(isFull()){
        printf("waiting room full! please came later.");
        return;
    }
    if(front ==-1){
        front=0;
    }
    rear++;
    queue[rear].token=nextToken;
    strcpy(queue[rear].name,name);
   
    nextToken++;
    printf("token %d token is issued to %s",queue[rear].token,name);
    
}

/*
 * Call the next patient:
 *   - If the queue is empty, print "No patients waiting."
 *   - Otherwise, remove the patient at the front and print:
 *       "Calling Token <token> - <name>, please go to the doctor."
 *   - Hint: reset front and rear to -1 when the last patient leaves.
 */
void dequeue()
{
    /* TODO */
    if (isEmpty()){
        printf(" no patients waiting..\n");
    }
    front++;
    printf("calling token %d-%s,please go to doctor.\n",queue[front].token,queue[front].token);   
}

/*
 * Show the next patient WITHOUT removing them:
 *   - If empty, print "No patients waiting."
 *   - Otherwise print: "Next patient: Token <token> - <name>"
 */
void peek()
{
    /* TODO */
    if (isEmpty()){
        printf("no patients waiting..\n");
    }else{
        printf("next patient:token %d - %s\n",queue[front].token,queue[front].name);
    }
}

/*
 * Display all waiting patients from front to rear, e.g.:
 *   Waiting: [102 - Meena] [103 - Arjun]
 *   - If empty, print "No patients waiting."
 */
void display()
{
    /* TODO */
    int i;
    if(front ==-1){
        printf("no patients waiting.\n");
    }else{
        printf("waiting patients.\n");
        for(i=front;i<=rear;i++){
            printf("[%d-%s]\n",queue[i].token,queue[i].name);
        }
    }
}

/*
 * Return the number of patients currently waiting.
 */
int count()
{
    /* TODO */
    if(front==-1)
    return 0;
    else 
    return rear - front+1;
}

/* ------------------------------------------------------------------ */

int main()
{
    int choice;
    char name[30];

    while (1) {
        printf("\n===== Clinic Token System =====\n");
        printf("1. Register patient\n");
        printf("2. Call next patient\n");
        printf("3. Show next patient\n");
        printf("4. Display waiting patients\n");
        printf("5. Count waiting patients\n");
        printf("6. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');   /* clear bad input */
            continue;
        }

        switch (choice) {
        case 1:
            printf("Enter patient name: ");
            scanf(" %29[^\n]", name);    /* reads names with spaces */
            enqueue(name);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Patients waiting: %d\n", count());
            break;
        case 6:
            printf("Clinic closed. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
