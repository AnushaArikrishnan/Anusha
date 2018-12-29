#include<stdio.h>
void main()
{
int a[10],n,i,s,low,high,mid;
printf("enter the number of element of the array");
scanf("%d",&n);
printf("enter the elements in ascending order");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n entered elements in the array");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
printf("enter the element to be searched");
scanf("%d",&s);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
if(a[mid]==s)
break;
else if(a[mid]<s)
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
if(low>high)
printf("element is not in the array");
else
printf("element is found at location",mid+1);
}
