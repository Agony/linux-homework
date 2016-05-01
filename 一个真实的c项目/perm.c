#include "include/calculator.h"
extern int n;
extern int p[10];

int perm(int m)
{
	void qesort(int l[],int low,int high);
	int i,j,c;
if(m==n)
{for(i=1;i<n;i++)
printf("%d ",p[i]);
printf("%d\n",p[n]);


}
else 
for(j=m;j<=n;j++)
{
  qesort(p,m,n);
  c=p[j];
  p[j]=p[m];
  p[m]=c;
  perm(m+1);

   c=p[j];
  p[j]=p[m];
  p[m]=c;


}

return 0;
}
