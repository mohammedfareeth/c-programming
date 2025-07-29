#include<stdio.h>
int main()
{
	int i,N,a[] = {10,20,30,40,50};
	short int *p = (short int *)a;

	N = sizeof a/sizeof a[0];

	for(i=0;i<N;i++)
	printf("%d ",p[i]);  
	printf("\n");	
}

