#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//拷贝重叠的内存
	//1 2 3 4 5 6 7 8 9 10   把 1 2 3 4 拷贝到 3 4 5 6 的位置  结果就是 1 2 1 2 3 4 7 8 9 10
	//拷贝的时候 内存就重叠了 因为拷贝3 4 的时候 已经被拷贝了 1 2 
	//所以应该用 memmove   原空间是 1 2 3 4  目标空间是 3 4 5 6  如果把 1 挪到3 的位置上
	//那么 3 就被覆盖了 所以从后往前拷  但是如果是把 3 4 5 6 拷到 1 2 3 4 那么就有得从前往后拷贝
	//所以就可以判断一下

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	//什么时候从前向后拷贝  什么时候从后向前拷贝  dest 在 src左边从前往后拷贝
//	//反之从后往前拷贝  如果不重叠或者完全重叠 就无所谓了  前后与 count 有关
//	//所以区分两种情况 dest 小于 src 的话 从前往后拷贝 否则从后往前
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前往后拷贝
//		//找到src 的位置 然后转化为 char* 然后往前转换 每次之后 src向后走一个字节
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//解引用拿到目标空间
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memcmp  内存比较  返回值也是 >0  0  <0  一个字节一个字节的比较

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,6,6 };
//	int ret = memcmp(arr1, arr2, 12);//值是 0 因为前12个字节是相同的
//	printf("%d\n", ret);
//	return 0;
//}


//memset  内存设置
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	memset(arr, 1, 24);//将内存设置为 1 
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//strerror  返回错误码，所对应的错误信息

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//}


//打开文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	//errno
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("测试\n");
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//}


//C语言内置类型 char short int long float double 还能自定义类型：结构体 枚举 联合体
//复杂对象
//人：名字 年龄 身高 体重 身份证号码 电话
//书：书名 作者 出版社 定价 书号
//复杂对象
//结构体来描述复杂对象
//struct Book
//{
//	char name[20];
//	char author[20];
//	int price;
//}b1,b2;
//struct Book b3;//这种就是结构体声明
//int main()
//{
//	struct Book b4;
//	return 0;
//}


//struct
//{
//	int a;
//	char b;
//	double d;
//}s1,s2;//匿名结构体 只能这样创建
//struct
//{
//	int a;
//	char b;
//	double d;
//}*pa;//匿名结构体 只能这样创建
//int main()
//{
//	pa = &s1;//编译器认为这两种匿名结构体是两种不同 的类型
//	return 0;
//}


//数据结构：描述了数据在内存中存储的结构    有顺序表和链表

//typedef struct Node
//{
//	//可以设置为 一个节点里面 存数据和存地址
//	//数据域
//	int data;
//	//指针域  就是放地址
//	struct Node* next;//存放下一个节点的地址
//}Node;

//struct Point
//{
//	int x;
//	int y;
//}p3, p4;
//struct Point p2 = { 1,2 };
//struct S
//{
//	double a;
//	struct Point p;
//	char name[20];
//};
//int main()
//{
//	struct Point p1 = { 3,4 };
//	struct S s = { 3.14,{3,4},"张三" };
//	printf("%lf\n", s.a);
//	printf("%d %d\n", s.p.x, s.p.y);
//	printf("%s\n", s.name);
//	return 0;
//}


//结构体内存对齐（内存对齐）
//存在对其 是因为 
//1 平台原因
	//不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特
	//定类型的数据，否则抛出硬件异常
//2 性能原因：
	//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
	//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。

//总的来说
	//结构体的内存对齐是拿空间来换取时间的做法

struct S1//在内存当中开辟空间 第一个字节 相对于起始位置的偏移量是0 第二个字节就是1 
	//占1个字节的话 就是从开始占一个
{
	char c1;
	int a;
	char c2;
}; 
struct S2
{
	char c1;
	char c2;
	int a;
};
struct S3
{
	double c1;
	char c2;
	int a;
};
struct S4
{
	char c1;
	struct S3 s3;
	double a;
};
int main()
{
	struct S1 s = { 'x',100,'y' };
	printf("%d\n", sizeof(struct S1));//12 因为是内存对齐
	//结构体内存对齐的规则
	//1 结构体的成员 永远放在结构体起始位置偏移量为0的位置  类型不占内存空间 变量占内存空间
	//2 结构体成员从第二个成员开始 总是放在偏移量为一个对齐数（编译器默认的对齐数和变量自身大小的较小值）的整数倍处 
	//vs下 对齐数默认是8 也就是说 a 要放在偏移量是 4 的倍数 就是从 c1 后面往后挪 直到 4
	//3 结构体的总大小必须是各个成员对齐数中最大呢个对齐数的整数倍  所以放进去之后就占到8了可用的偏移量从
	//从9开始 所以就是 12 
	//4 嵌套了结构体  结构体要对齐到自己里面的最大对齐数的的整数倍的位置，
	printf("%d\n", sizeof(struct S2));//8 按照上面的算法就能算出来了
	printf("%d\n", sizeof(struct S3));//16
	printf("%d\n", sizeof(struct S4));//32 按照对齐规则去计算
	return 0;
}