#include <stdio.h>
#include <time.h>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
void heapify(int arr[], int n, int i) {
int largest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;
if (left < n && arr[left] < arr[largest])
largest = left;
if (right < n && arr[right] < arr[largest])
largest = right;
if (largest != i) {
swap(&arr[i], &arr[largest]);
heapify(arr, n, largest);
}
}
void heapSort(int arr[], int n) {
 int i,j;
for (i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
for (i = n - 1; i >= 0; i--) {
swap(&arr[0], &arr[i]);
for(j=0;j<10000000;j++);
heapify(arr, i, 0);
}
}
void printArray(int arr[], int n)
{
 int i;
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}
int main()
{
clock_t start,end;
int arr[1000];
int j,n;
printf("Enter the number of values to be inserted : \n");
scanf("%d",&n);
for(j=0;j<1000;j++)
 arr[j] = rand()%1000;
printf("Before Heap Sort : \n");
for(j=0;j<n;j++)
 printf("%d ",arr[j]);
start = clock();
heapSort(arr, n);
end = clock();
printf("\nSorted array is given in the following way \n");
printArray(arr, n);
printf("Time taken : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}
