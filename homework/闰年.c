#include <stdio.h>
int main()
{
	int year, mon;
	scanf("%d%d", &year, &mon);
	if ((mon >= 1) && (mon <= 12))
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			if (mon == 2)
				printf("29");
			else if (mon == 1 || 3 || 5 || 7 || 8 || 10 || 12)
				printf("31");
			else
				printf("30");
		else if (mon == 2)
			printf("28");
		else if (mon == 4 || 6 || 9 || 11)
			printf("30");
		else
			printf("31");
	else
		printf("ERROR");
	return 0;
}