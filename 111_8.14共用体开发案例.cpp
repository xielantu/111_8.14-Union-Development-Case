//// 111_8.14共用体开发案例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
#include <stdio.h>
#include <string.h>
struct Person
{
	char name[32];
	int age;
	char zhiye;
	char addr[32];
	union 
	{
		int classes;
		char kemu[32];
	}mes;
};



int main()
{
	struct Person p[2];
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("请输入职业：t代表老师，s代表学生\n");
		scanf_s("%c", &(p[i].zhiye),32);
		if (p[i].zhiye == 's')
		{
			printf("请输入学生班级：\n");
			scanf_s("%d", &(p[i].mes.classes)); //scanf函数里面，%d, %c是要加取地址（& ）的
			printf("请输入学生名字：\n");
			scanf_s("%s", p[i].name,32);
		}
		else 
		{
			printf("请输入老师的科目：\n");
			scanf_s("%s", p[i].mes.kemu,32);
			printf("请输入老师的名字：\n");
			scanf_s("%s", p[i].name,32);//scanf函数里面，%s,%lf是不加取地址（&）的
		}
		getchar();
		
	}

	for (i = 0; i < 2; i++)
	{
		if (p[i].zhiye == 's')
		{
			printf("学生的名字是:%s，班级是%d\n", p[i].name, p[i].mes.classes);
		}
		else
		{
			printf("老师的名字是:%s，职务是%s\n", p[i].name, p[i].mes.kemu);
		}
		
	}




	return 0;
}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
