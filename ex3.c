#include<stdio.h>
void main()
{
int m,n,i,j,r,c,first[10][10],second[10][10],sum[10][10];
printf("enter the number of rows and columns of lst matrix\n");
scanf("%d%d",&m,&n);
printf("enter the element of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&first[i][j]);
}
}
printf("enter the number of rows and column of 2nd matrix\n");
scanf("%d%d",&r,&c);
printf("enter the element of second matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&second[i][j]);
}
}
if(m==r && n==c)
{
printf("sum of entered matrices:-\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum[i][j]=first[i][j]+second[i][j];
printf("%d\t",sum[i][j]);
}
printf("\n");
}
}
else
printf("cannot add the matrix");
}

