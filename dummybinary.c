#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   struct node *left;
   struct node *right;
    int key;
}node;
void menu();
void inorder(node*);
void preorder(node*);
void postorder(node*);
void insert(node**,int);
node*binsearch(node*,int);

void insert(node**rtp,int key)
{
 if(*rtp==NULL){
 *rtp=(node*)malloc(sizeof(node));
if(*rtp==NULL)
printf("Unable to allocate memory\n");
exit(0);
    *rtp->key=key;
    *rtp->left=*rtp->right=NULL;
 }
else if(key>*rtp->key)
{
insert(&(*rtp->left),key);
}
else if(key<*rtp->key)
{insert(&(*rtp->right),key);}
}
void inorder(node*rt)
{
    if(rt!=NULL)
    inorder(rt->left);
    printf("%4d",rt->key);
    inorder(rt->right);
}
void preorder(node*rt)
{
  if(rt!=NULL)
  printf("%4d",rt->key);
  preorder(rt->left);
  preorder(rt->right);

}
void postorder(node*rt)
{
  if(rt!=NULL)
  postorder(rt->left);
  postorder(rt->right);
  printf("%4d",rt->key);

}
node*binsearch(node*rt,int target)
{
   if(rt==NULL)
   return NULL;
  else if(rt->key==target)
   return target;
else if(rt->key<target)
return binsearch(rt->right,target);
else if(rt->key<target)
return binsearch(rt->left,target);
}