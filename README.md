# 111_8.14共用体开发案例

### 结构体下申明联合体（共用体）时为避免累赘，union后不用定义变量名
```cpp
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
```
### 两个注意点
```cpp
scanf_s("%d", &(p[i].mes.classes)); //scanf函数里面，%d, %c是要加取地址（& ）的
scanf_s("%s", p[i].name,32);//scanf函数里面，%s,%lf是不加取地址（&）的			
```
