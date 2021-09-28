#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()//此代码的运行结果是
{
	int a, b, c;
	a = 5;
	c = ++a;//c=6 a=6
	b = ++c, c++, ++a, a++;//c=8 b=7  因为是后置++ 所以a=8  这里先算b=++c 再算c++ 再算++a 最后是a++
	b += a++ + c;//+ 的优先权大于 +=   后置++   a=8 c=8  b+= 意思是b+后面的=输出 所以是7+16=23  所以算完之后a=9
	printf("a=%d b=%d c=%d\n", a, b, c);//结果是 9 23 8
	return 0;
}

//int i;//全局变量  不初始化  默认是0 
//int main()
//{
//	i--;
//	if (i > sizeof(i))// 这里sizeof(i)是4   计算变量/类型所占内存的大小 >=0  也就是无符号数  所以计算的时候 先把i转化为无符号数 -1的二进制最高位为1 
//		//所以无符号数的话1就是最大位 肯定大于4  所以这里是大于
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()//此代码的运行结果是
//{
//	int a = 0x11223344;// 整型0x11223344 在内存块儿中是 44 33 22 11 这样倒着放的 各占一个字节 因为a一共4个字节
//	char* pc = (char*)&a;//pc 类型是 char* 所以*pc只能操作1个字节
//	*pc = 0;//所以这里是把 44 操作成00 所以在打印出来就是11 22 33 00
//	printf("%x\n", a);
//	return 0;
//}

//int main()//此代码运行的结果是
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//将地址强制转化成 short* 所以p+1一次访问两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//i=0 所以p就没加 所以解引用要访问四个字节 1是整型 是4个字节 所以把1的前两个字节为0 i+1 到了1的后两个字节 所以
//		//循环结束的时候把2的四个字节也变成了0 前两个整型变成了0  所以答案是0 0 3 4 5
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//结果是0 0 3 4 5
//	}
//	return 0;
//}

//int main()//交换数组  将数组a的内容和数组b的内容进行交换 数组一样大
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;//要找到两组数组的下标对应数
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i]; 
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//	}

	//int tmp[] = { 0 };//不能用它 太麻烦 直接弄一个临时变量一个一个交换就行了 

	//tmp = arr1;//这样不行 因为这里有0个元素 而上面有5个元素  tmp括号里面改成5也不行  因为数组名是首元素的地址
	//arr1 = arr2;  所以这样是 极其错误的
	//arr2 = tmp;
//	return 0;
//}

//void Init(int arr[], int sz)//只需要初始化 不需要返回什么值的时候 就用void
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//将数组内容全部赋值0
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;//因为一直要2这样循环 所以while
//	}
//
//}
//int main()//3，实现reverse（）函数完成数组元素的逆置  逆置 就是把数组内容倒过来
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//打印
//	reverse(arr,sz);//将左右变一下就可以了
//	print(arr, sz);
//	return 0;
//}

//int main()//创建整型数组 完成对数组的操作 1，实现函数int()初始化数组全为0
////2，实现printf（）打印数组的每个元素     3，实现reverse（）函数完成数组元素的逆置  逆置 就是把数组内容倒过来
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//把数组初始化为0  也要吧数组个数传过去
//	print(arr, sz);//打印
//	return 0;
//}

//ruturn 只能返回一个数
//int main()//下面代码的结果是
//{
//	char str[] = "hello byte";//数组里面放的元素是 hello byte\0 所以大小是11个  strlen 是求字符串长度的 数到\0就不数了所以是10个  
//	printf("%d %d \n", sizeof(str), strlen(str));//答案是11 10
//	return 0;
//}
