#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct 
{
    int item[SIZE];
    int rear,front;
}queue;
void initqueue(queue*);
void insertatfront(queue*,int);
int delatfront(queue*);
void insertatrear(queue*);
int  delatrear(queue*,int);

void initqueue(queue*)
{
    qp->front=0;
    qp->rear=-1;
}
void insertatrear(queue*,int v)
{
    if(qp->rear==SIZE-1){
        printf("Unable to insert at rear\n");
        exit(1);
    }
    qp->rear++;
    qp->item[qp->rear]=v;
}
int delfromrear(queue*qp){
if(qp->front>qp->rear){
    return -9999;
}
int v=qp->item[qp->rear];
qp->rear--;
return v;
}
void insertatfront(queue*qp,int v)
{
    if(qp->front==0)
    {
        printf("Unable to insert element at front\n");
        return;
    }
    qp->front--;
    qp->item[qp->front]=v;
}
int delfromfront(queue*qp,int v)
{
    if(qp->front>qp->rear){
        return -9999;
    }
    int v=qp->item[qp->front];
    qp->front++;
    return v;
}
void menu(){
  printf("----------FIFO Queue Operations----------\n");
  printf("-----------------------------------------\n");
  printf("1. Insert at rear\n");
  printf("2. Insert at front\n");
  printf("3. Delete from rear\n");
  printf("4. Delete from front\n");
  printf("5. Quit\n");
  printf("-----------------------------------------\n\n");
}
int main() {
  Queue q;
  initQueue(&q);
  int quit = 0;
  int value;
  menu();
  while(!quit){
    int choice;
    printf("Input your option: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
              printf("Enter the value to be inserted\n");
              scanf("%d",&choice);
              insertatrear(&q,value);
              break;
      case 2:
      printf("Enter the value to be inserted\n");
      scanf("%d",&choice);
      insertatrear(&q,value);
             
              break;
      case 3:
              value = del_from_rear(&q);
              if (value == -9999)
                printf("Queue underflow\n");
              else
                printf("Deleted from front, value: %d\n", value);
              break;
      case 4:
              value = del_from_front(&q);
                if (value == -9999)
                  printf("Queue underflow\n");
                else
                  printf("Deleted from front, value: %d\n", value);
                break;
      case 5:
               quit = 1;
               break;
      default: printf("Invalid choice, valid options are 1 - 5\n");
    }

  }



  return 0;
}
