#include<stdio.h>
#include <stdlib.h>
#include "include/calculator.h"
 int n;
 int p[10];
int main()
{
	int perm(int m);
	int j;
printf("请输入一个10以内正整数，程序将输入他的全排列\n");
  scanf("%d",&n);

   for(j=1;j<=n;j++)
   p[j]=j;
   perm(1);
   return 0;

}
