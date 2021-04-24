#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
   int key;
   struct node*left;
   struct node*right;
}node;

void menu();
void insert(node**,int);
node*binarysearch(node*,int);
void inorder(node*);
void preorder(node*);
void postorder(node*);

void menu(){
    printf("Operations\n");
    printf("1=Inorder traversal\n");
    printf("2=Pre order traversal\n");
    printf("3=Post order travesrsal\n");
    printf("4=Binary search\n");
    printf("5=Search\n");
    printf("6=Command\n");
    printf("7=Quit\n");
}
void insert(node**rtp,int key){
    if(*rtp==NULL){
    (*rtp)=(node*)malloc(sizeof(node));
    if(*rtp==NULL){
        printf("Error in allocating memory\n");
        exit(1);
    }
    (*rtp)->key=key;
    (*rtp)->left=(*rtp)->right=NULL;
    }
    else if(key>(*rtp)->key){
    insert(&((*rtp)->right),key);
    }
    else if(key<(*rtp)->key){
        insert(&((*rtp)->left),key);
    }
    else
    {
        printf("Duplicate key found\n");
    }
    return;
    }
    void inorder(node*rt){
        if(rt!=NULL){
        inorder(rt->left);
        printf("%4d",rt->key);
        inorder(rt->right);
        }
        else
        {
            return;
        }
        
    }
    void preorder(node*rt)
    {
        if(rt!=NULL){
            printf("%4d",rt->key);
            preorder(rt->left);
            preorder(rt->right);
        }
        else
        {
            return;
        }
        
    }
    void postorder(node*rt)
    {
        if(rt!=NULL){
        postorder(rt->left);
        postorder(rt->right);
        printf("%4d",rt->key);}
        else
        {
            return;
        }
    }
    node*binarysearch(node*rt,int target){
        if(rt==NULL)
        return NULL;
        if(rt->key==target)
        return rt;
        else if(rt->key<target)
        return binarysearch(rt->right,target);
        else {
        return binarysearch(rt->left,target);
        }
        }
        int main()
        {
            int choice;
            int quit=0,key,target;
            node*root=NULL;
            node*targetnode;
            insert(&root, 10);
            insert(&root, 5);
            insert(&root, 2);
            insert(&root, 8);
            insert(&root, 20);
            insert(&root, 15);
            insert(&root, 30);
            menu();
            while (!quit)
            {
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch (choice)
                {
                case 1:
                printf("Insert key\n");
                scanf("%d",&key);
                insert(&root,key); 
                    break;
                    case 2:
                    inorder(root);
                    printf("\n");
                    break;
                
                case 3:
                preorder(root);
                break;
                case 4:
                postorder(root);
                break;
                case 5:
                printf("Input target\n");
                scanf("%d",&target);
                targetnode=binarysearch(root,target);
                if(targetnode==NULL)
                printf("Target %d does not exist\n");
                else
                {
                    printf("Target node exists\n");
                }
                break;
                case 6:
                menu();
                break;
                case 7:
                quit=1;
                break;
                
            }
            

        }
        return 0;
        }
