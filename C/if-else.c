#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("nonage");
	else if (age >= 18 && age < 28)
		printf("young");
	else if (age >= 28 && age < 50)
		printf("adult");
	else if (age >= 50 && age < 90)
		printf("old");
	else
		printf("?");
}