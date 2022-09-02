#include <math.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key)
{
 for(int k=0;k<100000;k++);
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}
}
void main() {
int i, n;
 clock_t start, end;
 printf("ENTER ARRAY SIZE =");
 scanf("%d", &n);
 int arr[150000];
 for (int j = 0; j < n; j++)
 arr[j] = rand()%10000;
 for (i = 0; i < n; i++)
 printf(" %d", arr[i]);
 printf("\n");
 start = clock();
 insertionSort(arr, n);
 end = clock();
 printf("\nSorted elements = ");
 for (i = 0; i < n; i++)
 printf(" %d", arr[i]);
 printf("\n Time taken to sort %d Numbers is %f secs", n, (((double)(end -
start)) / CLOCKS_PER_SEC));
}
