#include "include/calculator.h"
extern int n;
extern int p[10];


int partions(int l[],int low,int high)
{
	int a = (rand() % (high - low + 1)) + low ; 
	int temp = l[a];
	l[a]=l[low];
	l[low]=temp;
	int prvotkey=l[low];
	l[0]=l[low];
	while (low<high)
	{
		while (low<high&&l[high]>=prvotkey)
			--high;
		l[low]=l[high];
		while (low<high&&l[low]<=prvotkey) 
			++low;
		l[high]=l[low];
	}
	
	l[low]=l[0];
	return low;
}
