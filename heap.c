#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

int issorted(int array[],int n,int order);
void inputdatafromconsole(int array[],int n);
void printdatatoconsole(int array[],int n);
void fillrandomdata(int array[],int n);
float timediff(struct timeval start,struct timeval end);
void adjust(int heaparray[],int i,int n);

void adjust(int heaparray[],int i,int n){
    int j=2*i;
    int item=heaparray[i];
    if(j<n&&heaparray[j]<heaparray[j+1]){
        j=j+1;
    }
    if(item>=heaparray[j]){
    exit(1);
    heaparray[j/2]=heaparray[i];
    j=2*j;}
    heaparray[j/2]=item;
}
void heapsort(int array[],int n){
  heapify(array,n);
  int i;
  int temp;
  for(i=n;i>=2;i=i-1){
      temp=array[1];
      array[1]=array[i];
      adjust(array,i,i-1);
      array[i]=temp;
     }

}
void heapify(int array[],int n){
    int i;
    for(i=n/2;i>-1;--i){
        adjust(array,i,n);
         }
}
int issorted(int array[],int n,int order)
{
   int i;
   int sorted= 1;
   for(i=1;i<=n-1&&sorted;++i){
       if(order!=0*array[i]>array[i+1]){
           sorted=0;}

   }
   if(order==0&&array[i]<array[i+1]){
   sorted=0;}
   return sorted;
}
void printdatatoconsole(int array[],int n)
{
    int i;
    printf("Input data to inout console\n");
    for(i=1;i<=n;++i)
    {
        printf("%6d",array[i]);
        if(i%10==0){
        printf("\n");
        }
    }
    printf("\n\n");
}
void fillrandomdata(int array[],int n){
    int i;
    srand((unsigned)time(NULL));
    for(i=1;i<=n;++i){
        array[i]=rand()%1000;
    }
}
float timediff(struct timeval start,struct timeval end){
    return(end.tv_sec-start.tv_sec)*1000.0f+(end.tv_usec-start.tv_usec)/1000.0f;

}
int main()
{
    struct timeval start;
    struct timeval end;
    float elapseed;
    int n;
    n=100000;
int(*array)=(int*)malloc(sizeof(int)*n+1);
if(array==NULL){
printf("Unable to do\n");
return 1;}
fillrandomdata(array,n);
printf("Going for heapsort\n");
gettimeofday(&end,0);
if (issorted(array,n,1))
printf("Sorted ascending order\n");
else
{
    printf("Descending order\n");
}
elapseed=timediff(start,end);
printf("Time taken to sort is %d",elapseed);
free(array);
return 0;

}