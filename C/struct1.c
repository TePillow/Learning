#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;

};
int main()
{
//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "c�����������", 55 };
	printf("����:%s\n", b1.name);
	printf("�۸�:%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	return 0;

}

/*
printf("%s\n",pb->name);
printf("%s\n",pb->price);
      the same
printf("%s\n",(*pb).name);
printf("%s\n",(*pb).price):
*/