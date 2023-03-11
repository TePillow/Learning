#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;

};
int main()
{
//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "c语音程序设计", 55 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);
	return 0;

}

/*
printf("%s\n",pb->name);
printf("%s\n",pb->price);
      the same
printf("%s\n",(*pb).name);
printf("%s\n",(*pb).price):
*/