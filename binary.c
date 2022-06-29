#include<stdio.h>
#include<time.h>

void main()
{
    int a[100],n,i,key,k,min,max,mid;
    double j;
    clock_t t;
    printf("enter the number of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&key);
    printf("elements\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
    min=0;
    max=n;

    t = clock();
    for(j=0;j<100000000;j++);
    while(max>=min)
    {
        mid=(min+max)/2;
        if(a[mid]==key)
        {
            printf("ELEMENT FOUND");
             t = clock() - t;
    printf("No. of clicks %ld clicks (%f seconds).\n",
           t, ((float)t) / CLOCKS_PER_SEC);
            return;
        }
        else if(a[mid]<key)
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }
    }
    printf("element not found");
     t = clock() - t;
    printf("No. of clicks %ld clicks (%f seconds).\n",
           t, ((float)t) / CLOCKS_PER_SEC);
}

