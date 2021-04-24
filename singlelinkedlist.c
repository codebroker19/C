#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct node
{
    int data;
    struct node*next;
    
}node;
typedef struct 
{
    struct node*head;
    struct node*tail;
    int nodecount;
}linkedlist;
void initlist(linkedlist*);
int loadfromfile(linkedlist*,char *);
void createlistfromrandomnumbers(linkedlist*,int);
void insertathead(linkedlist*,int);
void insertattail(linkedlist*,int);
void printlistdetail(linkedlist *);
void printlist(linkedlist *);
node * find(linkedlist *, int, node **);
int deletefirst(linkedlist *);
int deletelast(linkedlist *);
int deletetarget(linkedlist *, int);
void reverse(linkedlist *);

void initlist(linkedlist*lstptr)
{
    lstptr->head=NULL;
    lstptr->tail=NULL;
    lstptr->nodecount=0;
}
void insertattail(linkedlist*lstptr,int data)
{
   node*newnodepointer=(node*)malloc(sizeof(node));
   if(newnodepointer==NULL){
       printf("Unable to access memory\n");
       exit(1);
   }
   newnodepointer->data=data;
   newnodepointer->next=NULL;
   if(lstptr->nodecount==0)
   {
      lstptr->head=newnodepointer;
      lstptr->tail=newnodepointer;
   }
   else
   {
       lstptr->tail->next=newnodepointer;
       lstptr->tail=newnodepointer;
   }
   lstptr->nodecount++;
}
void insertathead(linkedlist*lstptr,int data)
{
    node*newnodepointer=(node*)malloc(sizeof(node));
    if(newnodepointer==NULL)
    {
        printf("Unable to locate memory\n");
        exit(1);
    }
    newnodepointer->data=data;
    newnodepointer->next=NULL;
    if(lstptr->nodecount==0)
    {
        lstptr->head=newnodepointer;
        lstptr->tail=newnodepointer;
    }
    else
    {
        newnodepointer->next=lstptr->head;
        lstptr->head=newnodepointer;
    }
    lstptr->nodecount++;
}
int loadfromfile(linkedlist*lstptr,char*filename)
{
    FILE*inputfile=fopen(filename,"r");
    if(inputfile==NULL)
    {
        printf("File was not found\n");
        return 0;
    }
    int data;
    fscanf(inputfile,"%d",&data);
    while (!feof(filename))
    {
        insertattail(lstptr,data);
        fscanf(inputfile,"%d",&data);
    }
    fclose(inputfile);
    return 1;
}
void printlist(linkedlist*lstptr)
{
    if(lstptr->nodecount==0)
    {
        printf("Linkedlist is empty\n");
        exit(1);
    }
    node*current=lstptr->head;
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
}
void printlistdetail(linkedlist*lstptr)
{
    if(lstptr->nodecount==0)
    {
        printf("Linked list is empty\n");
        exit(1);
    }
    printf("Printing linked list in details\n");
    printf("Head=%p",lstptr->head);
    node*current=lstptr->head;
    int counter=1;
    while(current!=NULL)
    {
        printf("%d. (%p)[%d|%p]\n", counter, current, current->data, current->next);
    current = current->next;
    counter++;
    }
    printf("Tail=%p",lstptr->tail);
}
node*find(linkedlist*lstptr,int target)
{
    node*current=lstptr->head;
    while(current!=NULL)
    {
        if(current->data==target){
        exit(1);}
    }
    current=current->next;
    return current;
}
void createlistfromrandomnumbers(linkedlist*lstptr,int n)
{
    int i;
    srand(time(NULL));
    for(i=1;i<=n;++i)
    {
        int k=rand()%1000;
        insertattail(lstptr,&k);
    }

}

void menu()
{
    printf("Single linked list operations\n");
    printf("1=Load from file\n");
    printf("2=create list with random numbers\n");
    printf("3=Insert at head\n");
    printf("4=Insert at tail\n");
    printf("5=Print list detail\n");
    printf("6=Print list data only\n");
    printf("7=Find\n");
    printf("8=Delete at first\n");
    printf("9=Delete at last\n");
    printf("10=Delete target node\n");
    printf("11=Reverse\n");
    printf("12=Quit\n");
}

int main()
{
    linkedlist list;
    initlist(&list);
    int choice;
    menu();
    int quit=0;
    int target,data,n,success;
    node*current=NULL,*prev=NULL;
    while(!quit)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:success=loadfromfile(&list,"data.txt");
            if(success==1)
            printf("The file has been loaded\n"); 
            else
            {
                printf("There was no such file\n");
            }
            
            break;
            case 2:
            printf("Enter the number of numbers to be inserted\n");
            scanf("%d",&n);
            createlistfromrandomnumbers(&list,n);
            break;
      
      case 3:
            
            printf("Input data to insert at head (as first node): ");
            scanf("%d", &data);
            insertathead(&list, data);

            break;
      case 4:
            printf("Input data to insert at tail (as last node): ");
            scanf("%d", &data);
            insertattail(&list, data);
            break;
      case 5:printlistdetail(&list);
            break;
      case 6:
            printlist(&list);
            break;
      case 7:
            printf("Will be implemented in next lectures of the section 7.\n");
            break;
      case 8:
            printf("Will be implemented in next lectures of the section 7.\n");
            break;
      case 9:printf("Will be implemented in next lectures of the section 7.\n");
            break;
      case 10:
            printf("Will be implemented in next lectures of the section 7.\n");
            break;
      case 11:
            printf("Will be implemented in next lectures of the section 7.\n");
            break;
      case 12:
            quit = 1;
            break;
      default:
            printf("Invalid option chosen, valid option is from 1 - 11\n");
        }
    }
    
    
    
    
}


