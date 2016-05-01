#include "include/calculator.h"
extern int n;
extern int p[10];


void qesort(int l[],int low,int high)
{
	int prvotloc;
	if(low<high)
	{
		prvotloc=partions(l,low,high);    
		qesort(l,low,prvotloc-1); 
		qesort(l,prvotloc+1,high); 
		
	}
}
