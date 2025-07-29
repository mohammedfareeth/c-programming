#include<stdio.h>
int reverse(int n)
{
	int r = 0;
	while(n != 0)
	{
		r = r*10+(n%10);
		n /= 10;
	}
	return r;
}
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	int rev = reverse(num);
	printf("rev = %d\n",rev);
}
