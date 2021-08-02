#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//指针的运算 
// 1.指针 +- 整数  
// 2.指针 - 指针
// 3. 指针的关系运算

// 指针 + 指针 （没意义）

//指针运算
//int main()
//{
//	//随着数组下标增长 地址由小到大  	
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	*vp++ = 0;
//	//}
//	//*vp++;//这里的 ++ 优先级大于 *  所以先使用 ++ 然后再 * 因为是后置++  所以还是对第一个元素解引用
//	//因为是指针++ 所以指向下一个元素  当放到循环里面的话 就是两个指针比较  这里就是两个指针比较
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr[9];//p指向 0 
//	printf("%p\n", &p);
//	printf("%p\n", &p - 1);
//
//	return 0;
//}


//指针 - 指针   得到的数字的绝对值 是指针和指针之间元素的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);// 9 是因为算的是元素的个数  但是要在同一个数组里面
//	return 0;
//}


//求字符串长度
//int my_strlen(char* s)//因为arr 是首元素地址 所以用指针来接收
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		*s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = strlen(arr);// strlen 原理就是找\0 只有找到\0 才结束
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//指针 - 指针 得到的是中间的元素个数  所以拿\0的地址 - 首元素地址 就好了
//int my_strlen(char* s)
//{
//	int count = 0;
//	char* start = s;
//	while (*s != '\0')
//	{
//		*s++;
//	}
//	return s - start;//指针 -指针的形式
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = strlen(arr);// strlen 原理就是找\0 只有找到\0 才结束
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//指针的关系运算
//int main()
//{
//	//for (vp = &&values[N_VALUES - 1]; vp < values[0];)
//	//{
//	//	*--vp = 0;   //这样是从后往前置为 0 
//	//}
//
//	//指针一定不要越界 尤其是不要向前越界  指针比较的时候  尽量从前往后 不要从后往前
//
//	//两个地址比较大小  通过转化为10进制 就很方便比较 
//
//	return 0;
//}


//指针数组   数组是一块连续的空间 放的是相同类型的元素 大小由数组大小和元素类型 个数有关
//指针 是一个变量 放地址 变量大小是 4或8个字节   


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr);//这里算的是整个数组的大小
//	int* p = &arr[5];//取出某个元素的地址   
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);//数组名表示首元素的地址
//	printf("%d\n", sz);
//
//	//数组名确实是首元素地址  但是有两个例外
//	//1.sizeof（数组名） 这里的数组名不是首元素的地址 是表示整个数组的 计算的是整个数组的大小
//	//2.&数组名  这里的数组名不是首元素的地址  是表示整个数组的 拿到的是整个数组的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//地址大小是 4个字节

//二级指针
//int main()
//{
//	int a = 10;//对 a 取地址 拿到的是第一个空间(字节)的地址
//	int* p = &a;//32位平台是 4个字节
//	int** pp = &p;//因为p也是个地址 所以依然可以取地址  pp就是二级指针 因为指向的p 也是一个指针
//	//因为存放的是一级指针的地址 所以是二级指针 是**   
//	//可以无限套娃
//
//	//p前面的* 表示p是个指针 int 说明p指向的类型是int
//	//pp前面的* 表示pp是个指针 int* 说明 pp 指向的对象是个指针
//
//	//*pp//对 pp 解引用找到 p  **pp 解引用就是找到a  二级指针要两层解引用 找到原来的地址
//	**pp = 20;
//	printf("%d\n", a);
//
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr[10];//整型数组 因为存放的都是数组 
//	char ch[5];//字符数组 存放的是字符
//	//指针数组 存放的是指针
//	int* parr[5];//5个元素 是整型指针数组
//	char* pc[6];//字符指针的数组
//
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	//所以就可以写出数组
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));//通过解引用找到这个内容 然后打印出来
	}
	return 0;
}