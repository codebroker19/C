#include<stdio.h>
#include<stdlib.h>
typedef struct 
#define SIZE 5
{
    int item[SIZE];
    int rear,front;
}queue;
void initqueue(queue*);
void enqueue(queue*,int);
int dequeue(queue*);
void initqueue(queue*qp)
{
    qp->rear=SIZE-1;
    qp->front=SIZE-1;
}
void enqueue(queue*qp,int v)
{
    if((qp->rear+1)%SIZE==qp->front)
    {
        printf("Queue is overflow");
        exit(1);
    }
    qp->rear=(qp->rear+1)%SIZE;
    qp->item[qp->rear]=v;
}
int dequeue(queue*qp)
{
    if(qp->front==qp->rear){
    printf("Queue is underflow\n");
    return 9999;}
    qp->front=(qp->front+1)%SIZE;
    int v=qp->item[qp->front];
    return v;
}
    
void menu(){
  printf("----------FIFO Queue Operations----------\n");
  printf("-----------------------------------------\n");
  printf("1. Enqueue\n");
  printf("2. Dequeue\n");
  printf("3. Quit\n");
  printf("-----------------------------------------\n\n");
}
int main()
{
    queue q;
    initqueue(&q);
    int value;
    int quit=0;
    while(!quit){
        int choice;
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter the value to be entered\n");
        scanf("%d",&value);
        enqueue(&q,value);
            break;
            case 2:
            value=dequeue(&q);
            if(value==9999)
            printf("Queue is underflow\n");
            else
            {
                printf("Deleted value is %d\n",value);
            }
            break;
            case 3:
            quit=1;
            break;
           default:
           printf("Invalid move\n");
            break;
        }
    }
    return 0;

}