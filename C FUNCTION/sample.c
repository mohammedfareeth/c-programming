#include<stdio.h>
void abc();  //function declaration
int main()
{
	printf("In main(), before abc()...\n");
	abc();  //function call
	printf("In main(), after abc()...\n");
	printf("main function exit\n");
}
void abc() //function definition
{
	printf("In abc function...\n");
	printf("Hello...\n");
	printf("Hai...\n");
	printf("abc function exit\n");
}
