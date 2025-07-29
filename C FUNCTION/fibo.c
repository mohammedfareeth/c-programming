#include<stdio.h>
void fibo(int);
int main()
{
	int N;
	printf("Enter the N value\n");
	scanf("%d",&N);

	fibo(N);
}
void fibo(int N)
{
	int x,y,z;
	for(x=0,y=1;x<N;x=y,y=z)
	{
		printf("%d ",x);
		z = x+y;
	}
	printf("\n");
}
