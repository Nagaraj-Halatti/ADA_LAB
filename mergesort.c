#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
int main()
{
clock_t start,end;
int a[30000],n=500,i;
while(n<=5000){
for(i=0;i<n;i++)
{
a[i] = rand()%1000;
}
start = clock();
mergesort(a,0,n-1);
end = clock();
printf("\n To Sort array of %d numbers ",n);
printf("required time is %lf secs",(double)(end-start)/CLOCKS_PER_SEC);
printf(“\n”);
n+=500;
}
}
void mergesort(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid);
mergesort(a,mid+1,j);
merge(a,i,mid,mid+1,j);
}
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[30000];
int i,j,k;
i=i1;
j=i2;
k=0;
while(i<=j1 && j<=j2)
{
 for(int j=0;j<100000;j++);
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=j1)
temp[k++]=a[i++];
while(j<=j2)
temp[k++]=a[j++];
for(i=i1,j=0;i<=j2;i++,j++){
a[i]=temp[j];
}
}
