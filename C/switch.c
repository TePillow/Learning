#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			printf("Monday\n");
			break;
	case 2:
			printf("Tuesday\n");
			break;
	case 3:
			printf("Wednesday\n");
			break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	}
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("Work day\n");
		break;
	case 6:
	case 7:
		printf("Day off\n");
	}
	return 0;
}