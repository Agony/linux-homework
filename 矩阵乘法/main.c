#include<stdio.h>
int main()
{
   int n,m,p,q;
   int i,j;
   printf("请输入第一个矩阵的行数和列数:\n");
   scanf("%d %d",&n,&m);
   int a[10][10];
	printf("请分行列输入第一个矩阵:\n");
   for(i=0;i<n;i++)
        for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
  printf("请输入第二个矩阵的行数和列数:\n");
   scanf("%d %d",&p,&q);
  int b[10][10];
printf("请分行列输入第二个矩阵:\n");
  for(i=0;i<p;i++)
	  for(j=0;j<q;j++)
		scanf("%d",&b[i][j]);

int c[10][10];
int k;

for(i=0;i<n;i++)
	  for(j=0;j<q;j++)
	  {
		  c[i][j]=0;
		  for(k=0;k<m;k++)
         c[i][j]=c[i][j]+a[i][k]*b[k][j];

	  }
	  for(i=0;i<n;i++)
	  { for(j=0;j<q-1;j++)
		  printf("%d ",c[i][j]);
         printf("%d\n",c[i][q-1]);
	  }


}
