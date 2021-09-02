#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//元素个数是6
//	//printf("%d\n", sizeof(arr));//6 因为有6个元素 一个元素是1个字节 所以是6
//	//printf("%d\n", sizeof(arr + 0));//4或8 因为数组名是首元素地址 +0还是首元素地址 所以这里还是地址
//	//printf("%d\n", sizeof(*arr));//1 因为是解引用 得到的是第一个元素 是 char 所以是1
//	//printf("%d\n", sizeof(arr[1]));//1 因为是第二个元素 所有大小是1
//	//printf("%d\n", sizeof(&arr));//4或8 因为是取地址 所以地址是 4或8 
//	//printf("%d\n", sizeof(&arr + 1));//4或8 因为是取地址+1 是跳过这一块的地址 所以还是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4或8 取地址的是第一个元素 加 1 就是第二个元素的地址
//
//
//	printf("%d\n", strlen(arr));//随机值 因为是从首元素开始求  但是没有 \0 所以就是随机值
//	printf("%d\n", strlen(arr + 0));//也是随机值 因为是首元素地址 + 0 所以和上面一样
//	printf("%d\n", strlen(*arr));//野指针 因为 *arr 是a  是字符 a 的ACSII码值 97 是地址 从97开始往后找
//								//所以野指针 程序崩溃
//	printf("%d\n", strlen(arr[1]));//野指针 传的是 b 的地址 也是ASCII码值 98 和上面这个一样
//	printf("%d\n", strlen(&arr));//随机值  是数组的地址 还是字符串的起始位置 所以和第一个一样
//	printf("%d\n", strlen(&arr + 1));//随机值 - 6 第一个的值减去6 因为跳过了字符数组 所以减去 6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1 因为跳过了 a 所以是从 b 开始统计
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7 因为有了\0 
//	//printf("%d\n", sizeof(arr + 0));//4或8 因为是首元素地址 因为 arr 没有单独放到 sizeof 里面 所以是地址
//	//printf("%d\n", sizeof(*arr));//1 对首元素地址解引用 就是首元素 所以是 1 
//	//printf("%d\n", sizeof(arr[1]));//1 因为算的是第二个元素
//	//printf("%d\n", sizeof(&arr));//4或8 因为是取地址 还是地址 所以还是4 或8
//	//printf("%d\n", sizeof(&arr + 1));//4或8 跳过整个数组后的地址 还是地址 
//	//printf("%d\n", sizeof(&arr[0] + 1));//4或8 因为是 b 的地址
//
//
//	printf("%d\n", strlen(arr));//6 因为有 \0
//	printf("%d\n", strlen(arr + 0));//6 因为还是首元素开始的
//	printf("%d\n", strlen(*arr));//野指针  因为是传的地址所以是野指针
//	printf("%d\n", strlen(arr[1]));//野指针 因为是 a的地址 是97 所以从97开始往后找
//	printf("%d\n", strlen(&arr));//6 因为是取地址 还是首元素开始 所以是6
//	printf("%d\n", strlen(&arr + 1));//随机值  因为是跳过了整个数组 然后往后找
//	printf("%d\n", strlen(&arr[0] + 1));//5 因为跳过了a 是从b 开始的
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//加上const 就使得 常量字符串不能被修改
//	//printf("%d\n", sizeof(p));//4或8 因为p 是指针变量 指针变量放的是地址 所以是4或8
//	//printf("%d\n", sizeof(p + 1));//4或8 因为指针加1 跳过了一个字符 所以是 b的地址 所以是4或者8
//	//printf("%d\n", sizeof(*p));//1 因为是解引用 得到的是 a 
//	//printf("%d\n", sizeof(p[0]));//1 因为是数组 是第一个元素 所以是 a 也是 1
//	//printf("%d\n", sizeof(&p));//4或8 是p的地址 所以是 4或8 
//	//printf("%d\n", sizeof(&p + 1));//4或8 跳过p的地址 指向p的下一个地址 还是一个地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4或8 指向第二个元素的地址 因为[0] 就是第一个元素 a的地址
//
//
//	printf("%d\n", strlen(p));//6 因为有\0
//	printf("%d\n", strlen(p + 1));//5 因为p是第一个元素 所以+1 就是第二个元素 b
//	printf("%d\n", strlen(*p));//野指针 因为*p 是a 所以是统计的a的地址 97开始
//	printf("%d\n", strlen(p[0]));//野指针 因为是a 传的是97 
//	printf("%d\n", strlen(&p));//随机值 因为是指针变量的地址 所以是随机值
//	printf("%d\n", strlen(&p + 1));//新的随机值  因为跳过的是指针p 是4个字节 不知道这4个字节里面放的是什么东西
//									//所以又是一个新的随机值   可能这四个字节里面就有 \0
//	printf("%d\n", strlen(&p[0] + 1));//5 因为是跳过了a 从b 开始数
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };//二维数组 三行四列
//	printf("%d\n", sizeof(a));//48  因为是12个元素
//	printf("%d\n", sizeof(a[0][0]));//4  第一个元素 所以是 4
//	printf("%d\n", sizeof(a[0]));//16 是第一行的元素
//	printf("%d\n", sizeof(a[0] + 1));//4或8 因为a[0] 是第一行第一个元素的地址 因为没有单独放在sizeof内部
//	//也没有单独取地址 +1 是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 因为拿到的是第一行第二个元素 解引用的是第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4或8  因为二维数组的数组名表示首元素第一行的地址 所以 +1 就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  解引用拿到的是第二行 所以是16
//	printf("%d\n", sizeof(&a[0] + 1));//4或8  是第二行的地址 因为取地址 得到了第一行的地址 然后+1 得到了第二行的地址
//	//因为是对第一行的地址+1 所以得到的是第二行的地址了
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  因为是对第二行地址解引用 所以算的是第二行的大小
//	printf("%d\n", sizeof(*a));//16  a表示二维数组首元素第一行的地址 所以解引用 拿到的就是第一行 就是16
//	printf("%d\n", sizeof(a[3]));//16  因为越界了 相当于第四行的数组名 因为sizeof内部的表达式是不参与运算的
//	//所以算的是第四行的总大小 用a[3] 来假想 根据类型来算 如果存在的话 就是16  所以这里算的是16 
//	//a[3] 假设存在 就是第四行的数组名 sizeof（a[3]) 相当于把第四行的数组名单独放在sizeof() 当中
//	//就类似于 sizeof(int)   sizeof 根据类型计算 不会真实运算
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));//2 5 
//    return 0;
//}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;//0x1 就是1
	printf("%p\n", p + 0x1);//00100014   因为+1 跳过了一个结构体 加的是结构体的字节 加了20 所以就是这样
	printf("%p\n", (unsigned long)p + 0x1);//00100001   强制转换为整数了 所以+1 就是+1
	printf("%p\n", (unsigned int*)p + 0x1);//00100004   因为加了指针 指针的大小是4个字节 所以是加了4
	return 0;
}