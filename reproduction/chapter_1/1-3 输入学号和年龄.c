/*the program dislays your roll number and age*/
#include <stdio.h>

int main()
{
	int i,j;
	printf("please input your roll number:");
	scanf("%d",&i);
	printf("please input your age:");
	scanf("%d",&j);
	printf("My roll number is NO.%d", i);
	printf("\n");
	printf("I am % d years old.\n",j);
	return 0;
}