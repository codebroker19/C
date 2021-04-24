#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

int isSorted(int array[], int n, int order);
void inputDataFromConsole(int array[], int n);

void printDataToConsole(int array[], int n);

void fillRandomData(int array[], int n);

float timediff(struct timeval start, struct timeval end);

void adjust(int heapArray[], int i, int n);

void heapSort(int array[], int n);

void heapify(int array[], int n);

void adjust(int heapArray[], int i, int n){
    int j = 2 * i; // left child of i
    int item = heapArray[i]; 
    while(j <= n){
        // compare between j and its sibling if sibling exists
        if(j < n && heapArray[j] < heapArray[j+1]){
            j = j + 1;
        }
        if (item >= heapArray[j]){
            break;
        }
        heapArray[j/2] = heapArray[j];
        j = 2 * j;
    }
    heapArray[j/2] = item;
}

void heapSort(int array[], int n){
    // calling heapify for building the heap in place
    heapify(array, n);
    int i;
    int temp;
    // doing the heap sort.
    for(i = n; i >=2 ; --i){
        // getting the largest element from the root
        temp = array[1];
        // copying the last element from the heap into the root.
        array[1] = array[i];
        // adjust the root
        adjust(array, 1, i-1);
        //place the largest element that we just deleted into the index i
        array[i] = temp;
    }
}

void heapify(int array[], int n){
    int i;
    for(i = n/2; i>=1; --i){
        adjust(array, i, n);
    }
}

int isSorted(int array[], int n, int order){
    int i;
    int sorted = 1;
    for(i = 1; i <= n - 1 && sorted; ++i){
       
        if (order != 0 && array[i] > array[i+1]){
            sorted = 0;
        }
        if (order == 0 && array[i] < array[i+1]){
            sorted = 0;
        }
    }
    return sorted;
}

void inputDataFromConsole(int array[], int n){
    int i;
    printf("Please input integer numbers\n");
    printf("You will need to input %d integers in total\n\n", n);
   
    for(i = 1; i <= n; ++i){
        printf("array [%d]: ", i);
        scanf("%d", &array[i]);
    }
    
}

void printDataToConsole(int array[], int n){
    int i;
    printf("Content of the array\n");
    printf("----------------------\n");
    for(i = 1; i <= n; ++i){
        printf("%6d", array[i]);
        // give a line break after every 10 numbers
        if (i % 10 == 0){
            printf("\n");
        }
    }
    
    printf("\n\n");
}

void fillRandomData(int array[], int n){
    int i;
    srand((unsigned)time(NULL));
    for(i = 1; i <= n; ++i){
        array[i] = rand() % 10000;  // we fill the array with numbers from 0 - 9999
    }
}

float timediff(struct timeval start, struct timeval end)
{
    return (end.tv_sec - start.tv_sec) * 1000.0f + (end.tv_usec - start.tv_usec) / 1000.0f;
}

int main(){
    
    struct timeval start;
    struct timeval end;
    float elapsed;
    
    int n;
    n = 500000;
    int *array = (int *)malloc(sizeof(int) * (n+1));
    if (array == NULL){
        printf("Unable to allocate dynamic memory\n");
        return 1;
    }
    // fill the array with the elements
    fillRandomData(array, n);
    
    printf("Going to perform heap sort on %d numbers, please wait ...\n", n);
    gettimeofday(&start, 0);
    heapSort(array, n);
    gettimeofday(&end, 0);
    
    // check if the array is sorted.
    if (isSorted(array, n, 1))
        printf("Sorted in ascending order\n");
    else
        printf("Not sorted in ascending order\n");
    elapsed = timediff(start, end);
    printf("Time taken to sort %d numbers using heap sort is: %f msec\n", n, elapsed);
    free(array);
    
    return 0;
}
