#include <stdio.h>
int min(int a, int b)
{
return (a<b)? a: b;
}
void floyd(int a[][100], int n)
{
int i, j, k;
for(k=0; k<n; k++){
for(i=0; i<n; i++){
for(j=0; j<n; j++)
a[i][j] = min(a[i][j], (a[i][k] + a[k][j]));
}
}
}
int main()
{
int n, a[100][100], i, j;
printf("Enter the number of vertices: ");
scanf("%d", &n);
printf("Enter the weighted matrix(enter 99999 for infinity): \n");
for(i=0; i<n; i++){
for(j=0; j<n; j++)
scanf("%d", &a[i][j]);
}
floyd(a, n);
printf("All pair shortest paths: \n");
for(i=0; i<n; i++){
for(j=0; j<n; j++)
printf("%d \t", a[i][j]);
printf("\n");
}
return 0;
}
