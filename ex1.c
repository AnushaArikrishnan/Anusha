#include<stdio.h>
void main()
{
int array[10],n,i,j,swap;
printf("enter number of element\n");
scanf("%d",&n);
printf("enter %d integer\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(array[j]>array[j+1])
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
}
printf("sorted list in ascending order:\n");
for(i=0;i<n;i++)
printf("%d\n",array[i]);
}

