#include<stdio.h>
void main()
{
int a[10][10],b[10][10],d[10][10];
int i,j,p,q,m,n,k;
printf("enter size of the matrix");
scanf("%d%d",&p,&q);
if(q==m)
{
printf("enter the element of matrix\n");
for(i<0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
}
printf("enter the element of matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
for(i=0;i<p;i++)
}
d[i][j]=0;
for(k=0;k<q;k++)
{
d[i][j]=d[i][j]+a[i][k]*b[k][j];
}
}
]
