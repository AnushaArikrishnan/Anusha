#include<stdio.h>
void main()
{
int array[10],search,i,n,yes=0;
printf("enter the number of element in array\n");
scanf("%d",&n);
printf("enter %d integer(s)\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("enter a number to search\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(array[i]==search);
{
yes=1;
printf("%d is present at location %d\n",search,i+1);
break;
}
}
if(yes==0)
printf("%d isn't present in the array\n",search);
}
