#include<stdio.h>
void fun(char *);
int main()
{
	char a[20] = "Vector India";
	fun(a);
}
void fun(char *p)
{
	int i;
	printf("p = %s\n",p);
	for(i=0;p[i];i++)
	printf("%c ",p[i]);
	printf("\n");
}
