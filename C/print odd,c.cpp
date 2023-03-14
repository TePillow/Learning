#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	while (i <= 100)
	{
		i++;
		if (i % 2 == 1)
			printf("%d\n", i);
	}
	return 0;
}