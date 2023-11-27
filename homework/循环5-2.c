#include <stdio.h>
int main()
{
	char c;
	int letter, blank, digit, other;
	letter = blank = digit = other = 0;
	while ((c = getchar()) != 35)
	{
		if (c == 32)
			blank++;
		else if (c >= 48 && c <= 57)
			digit++;
		else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			letter++;
		else
			other++;
	}
	printf("letter=%d,blank=%d,digit=%d,other=%d", letter, blank, digit, other);
	return 0;
}
