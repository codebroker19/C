#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* struct definition for a node
*/
typedef struct Node{
  int data;
  struct Node *next;  // for storing the address of immediate next node.
  struct Node *prev;  // for storing the address of immediate previous node.
}Node;

typedef struct {
  struct Node *head;  // address of first node. NULL initially.
  struct Node *tail;  // addres of last node. NULL initially.
  int nodeCount;      // count of total number of nodes. 0 initially.
}DblList;

// function prototypes
/**
* initializes the doubly linked list object that is passed.
*/
void initList(DblList *lstPtr);
/**
* add a new node with the data content data (passed as parameter)
* as the first node
*/
void addFirst(DblList *lstPtr, int data);
/**
* add a new node with the data content data (passed as parameter)
* as the last node
*/
void addLast(DblList *lstPtr, int data);
/**
* creates the doubly linkedlist reading data from file supplied as parameter
* The linked list is created by adding the nodes at the end of the list.
*/
int loadFromFile(DblList *lstPtr, char *fileName);
/**
*  creates a doubly linkedlist by generating n random numbers, nodes are
*  added at the end.
*/

void createListFromRandomNumbers(DblList *lstPtr, int n);

/**
* Prints the detail of the doubly linkedlist includind data and the pointers in
* each of the node from the first to the last node.
*/
void printListDetail(DblList *list);
/**
* prints content of each node from the first to the last node
*/
void printForward(DblList *lstPtr);
/**
* prints content of each node starting from last upto first
*/
void printReverse(DblList *lstPtr);
/**
* searches into the linked list for the content target, if found returns the
* pointer to the node that contains the target, NULL otherwise.
*/
Node* find(DblList *lstPtr, int target);
/**
* Inserts a newnode after the target node with data supplied as parameter.
* Returns 1 if the insertion is successfully done, 0 otherwise.
*/
int insertAfter(DblList *lstPtr, int target, int data);
/**
* Inserts a newnode before the target node with data supplied as parameter.
* Returns 1 if the insertion is successfully done, 0 otherwise.
*/
int insertBefore(DblList *lstPtr, int target, int data);
/**
* deletes the first node of the doubly linked list, returns 1 id deletion is successfull,
* 0 otherwise.
*/
int deleteFirst(DblList *lstPtr);
/**
* deletes the last node of the list, returns 1 if deletion is successfull,
* 0 otherwise.
*/
int deleteLast(DblList *lstPtr);
/**
* deletes the node with the target. Returns true of deletion is successfull,
* 0 otherwise.
*/
int deleteTarget(DblList *lstPtr, int target);
/**
* Menu for user interface.
*/
void menu();



// to initialize the linkedlist object
// Input parameter: listp is the pointer to linkedlist object
// Precondition: LinkedList object pointed by listptr must be existing.
// Return Value: Nothing
void initList(DblList *lstPtr){
  lstPtr->head = NULL;
  lstPtr->tail = NULL;
  lstPtr->nodeCount = 0;
}





int loadFromFile(DblList *lstPtr, char *fileName){
  FILE *inputFile = fopen(fileName, "r");
  if (inputFile == NULL){
    return 0;
  }
  int data;
  fscanf(inputFile, "%d", &data);
  while(!feof(inputFile)){
    addLast(lstPtr, data);
    fscanf(inputFile, "%d", &data);
  }
  fclose(inputFile);
  return 1;

}

void createListFromRandomNumbers(DblList *lstPtr, int n){
  int i;
  srand(time(NULL));

  for(i = 1; i<=n; ++i){
      int k = rand() % 1000;
      addLast(lstPtr, k);
  }
}


void menu(){
  printf("    Doubly Linked List Operations\n");
  printf("----------------------------------------\n");
  printf("1. Load from file\n");          // load integer data from file and will create the list
                                          // by using insert_at_tail operation (menu option 3)
  printf("2. Create list with random numbers\n");
  printf("3. Add First\n");          // inserting a new node as the first node
  printf("4. Add Last\n");          // inserting a new node as the last node
  printf("5. Print List (detail)\n");     // printing the linked list in details,
                                          // including the data and pointer in each node
  printf("6. Print List first to last (data only)\n");  // prints the integer data in each node from the first node to last
  printf("7. Print List last to first (data only)\n");  // prints data fro last to the first node
  printf("8. Find\n");                    // finds if an integer exisits in a node from
                                          // the start in the list
  printf("9. Insert After\n");
  printf("10. Insert Before\n");
  printf("11. Delete first\n");            // deletes the first node
  printf("12. Delete last\n");             // deletes the last node
  printf("13. Delete a target node\n");    // deletes a particular node, if that exists

  printf("14. Quit\n");                   // to terminate each node
}

int main(){
  DblList list;
  initList(&list);
  int choice;
  menu();
  int quit = 0;
  int data, n, target;
  int success;
  Node *current = NULL, *prev = NULL;
  while(!quit){
    printf("Please input your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1: success = loadFromFile(&list, "data.txt");
            if (success == 1)
              printf("File has been loaded successfully\n");
            else
              printf("There was some error while loading and creating the list\n");
            break;
      case 2:
            printf("Enter number of integers to be generated and added into the list: ");
            scanf("%d", &n);
            createListFromRandomNumbers(&list, n);
            break;
      case 3:
            // ask to input
            printf("Input data to insert at head (as first node): ");
            scanf("%d", &data);
            addFirst(&list, data);

            break;
      case 4:
            printf("Input data to insert at tail (as last node): ");
            scanf("%d", &data);
            addLast(&list, data);
            break;
      /*case 5:printListDetail(&list);
            break;
      */
      case 6:
            printForward(&list);
            break;
      case 7:
            printReverse(&list);
            break;
      case 8:
            //call find
            printf("Enter target: ");
            scanf("%d", &target);
            current = find(&list, target);
            if(current == NULL)
              printf("LinkedList doen not contain the target specified\n");
            else
              printf("Target exists in the linkedlist\n");
            break;
      case 9:
            printf("Enter target: ");
            scanf("%d", &target);
            printf("Input data: ");
            scanf("%d", &data);
            if (insertAfter(&list, target, data) == 1){
              printf("Insert after was successful\n");
            }
            else{
              printf("Insert after failed\n");
            }

            break;
      case 10:
            // call insertBefore.
            printf("Enter target: ");
            scanf("%d", &target);
            printf("Input data: ");
            scanf("%d", &data);
            if (insertBefore(&list, target, data) == 1){
              printf("Insert before was successful\n");
            }
            else{
              printf("Insert before failed\n");
            }
            break;
      case 11:
            if (deleteFirst(&list))
              printf("First node deleted successfully\n");
            else
              printf("Unable to delete first node\n");
            break;
      case 12:
            if (deleteLast(&list))
              printf("Last node deleted successfully\n");
            else
              printf("Unable to delete last node\n");
            break;
      case 13:
            printf("Enter target: ");
            scanf("%d", &target);
            if (deleteTarget(&list, target))
              printf("Target node deleted successfully\n");
            else
              printf("Unable to delete the target node, target may not be available\n");
            break;
      case 14:
            quit = 1;
            break;

      default:
            printf("Invalid option chosen, valid option is from 1 - 14\n");
    }
  }

  return 0;
}


void addFirst(DblList *lstPtr, int data){
  /*
    1. CREATE the new node dynamically using malloc,
    2. Assign the node content with data
    3. Initialize the prev and next pointer with NULL.
    4. IF THE nodeCount = 0 then
        head = tail = assign the address of the new node
       else
          P->NEXT = HEAD;
          HEAD->PREV = P
          HEAD = P;
       END IF

  */
  Node *p = (Node *)malloc(sizeof(Node));
  if(p == NULL){
    printf("Unable to create node for the double linked list\n");
    return;
  }
  p->data = data;
  p->next = p->prev = NULL;
  if (lstPtr->nodeCount == 0){
    lstPtr->head = lstPtr->tail = p;
  }
  else{
    p->next = lstPtr->head;
    lstPtr->head->prev = p;
    lstPtr->head = p;
  }
  lstPtr->nodeCount++;
}

void addLast(DblList *lstPtr, int data){
  Node *p = (Node *)malloc(sizeof(Node));
  if(p == NULL){
    printf("Unable to create node for the double linked list\n");
    return;
  }
  p->data = data;
  p->next = p->prev = NULL;
  if (lstPtr->nodeCount == 0){
    lstPtr->head = lstPtr->tail = p;
  }
  else{
    lstPtr->tail->next = p;
    p->prev = lstPtr->tail;
    lstPtr->tail = p;
  }
  lstPtr->nodeCount++;
}

void printForward(DblList *lstPtr){
  Node *p = lstPtr->head;
  if (p == NULL){
    printf("Linkedlist is empty\n");
    return;
  }
  printf("Content of the double linkedlist: \n");
  while(p!=NULL){
    printf("%4d", p->data);
    p = p->next;
  }
  printf("\n-- End --\n");

}

void printReverse(DblList *lstPtr){
  Node *p = lstPtr->tail;
  if (p == NULL){
    printf("Linkedlist is empty\n");
    return;
  }
  printf("Content of the double linkedlist in the reverse order: \n");
  while(p!=NULL){
    printf("%4d", p->data);
    p = p->prev;
  }
  printf("\n-- End --\n");
}

Node* find(DblList *lstPtr, int target){
  Node *p;
  for(p = lstPtr->head; p != NULL; p=p->next){
    if (p->data == target){
      return p;
    }
  }
  return NULL;
}

int insertAfter(DblList *lstPtr, int target, int data){
  Node *p = find(lstPtr, target);
  if (p == NULL){
    return 0;
  }
  //
  if (p == lstPtr->tail){
    addLast(lstPtr, data);
  }
  else{
    Node *q = (Node*)malloc(sizeof(Node));
    q->data = data;
    if (q == NULL){
      printf("Unable to create node\n");
      return 0;
    }
    q->next = p->next;
    q->prev = p;
    p->next = q;
    q->next->prev = q;
  }
  lstPtr->nodeCount++;
  return 1;
}

int insertBefore(DblList *lstPtr, int target, int data){
  Node *p = find(lstPtr, target);
  if (p == NULL){
    return 0;
  }
  //
  if (p == lstPtr->head){
    addFirst(lstPtr, data);
  }
  else{
    Node *q = (Node*)malloc(sizeof(Node));
    q->data = data;
    if (q == NULL){
      printf("Unable to create node\n");
      return 0;
    }
    q->prev = p->prev;
    q->next = p;
    p->prev = q;
    q->prev->next = q;
  }
  lstPtr->nodeCount++;
  return 1;
}


int deleteFirst(DblList *lstPtr){
  if (lstPtr->nodeCount == 0)
    return 0;
  Node *p = lstPtr->head;
  if (lstPtr->nodeCount == 1){
    lstPtr->head = lstPtr->tail = NULL;
  }
  else{
    lstPtr->head = lstPtr->head->next;
    lstPtr->head->prev = NULL;
  }
  free(p);
  lstPtr->nodeCount--;
  return 1;
}

int deleteLast(DblList *lstPtr){
  if (lstPtr->nodeCount == 0)
    return 0;

  Node *p = lstPtr->tail;
  if (lstPtr->nodeCount == 1){
    lstPtr->head = lstPtr->tail = NULL;
  }
  else{
    lstPtr->tail = lstPtr->tail->prev;
    lstPtr->tail->next = NULL;
  }
  free(p);
  lstPtr->nodeCount--;
  return 1;
}

int deleteTarget(DblList *lstPtr, int target){
  Node *p = find(lstPtr, target);
  if(p == NULL)
    return 0;
  if (p == lstPtr->head)
      return deleteFirst(lstPtr);
  else if (p == lstPtr->tail)
      return deleteLast(lstPtr);
  else{
    p->next->prev = p->prev;
    p->prev->next = p->next;
    free(p);
    lstPtr->nodeCount--;
    return 1;
  }

}
