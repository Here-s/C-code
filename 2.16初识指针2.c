#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()//指针数组 是个数组    存放指针的数组
//数组指针 是个指针    
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//如果变量多的话 就很麻烦 所以按照数组那样来存储
	int* arr[3] = { &a,&b,&c };//指针数组
	//arr[0];//是第一个指针的地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));//找到地址要打印 所以要解引用
		
	}
	return 0;
}

//int main()//二级指针
//{
//	int a = 10;
//	int* pa = &a;//pa一级指针变量  int* 一级指针类型
//	int** ppa=&pa;//ppa就是二级指针变量  int** 二级指针类型
//	//int*** pppa=&ppa;//pppa是三级指针  int***  三级指针类型
//	//printf("%d\n",**ppa);//*ppa这里找到的是pa的地址   **ppa找到的就是a的地址了   所以是10
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);//因为**ppa就是a的值 所以这里也是20
//	return 0;
//}

//int main()//数组和指针
//{
//	int arr[10] = { 0 };
//	int* p = arr;//arr可以通过指针来访问
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//将数组内容赋值成 0，1，2，3，4，5，6，7，8，9
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p+i));//指针形式打印
//
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p ===== %p\n",p+i, &arr[i]);//对应两个地址 对应的arr恰好是一样的 所以地址也是一样的
//	//}
//	return 0;
//}

//int main()//指针和数组
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//数组名就是地址 是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);//&arr是整个元素的地址 整个数组的地址又是从第一个开始的 所以和第一个一样
//	printf("%p\n", &arr + 1);//这里比上一个+了40个字节  一个数组就是40个字节
//	//例外  1 &数组名的时候 数组名不是首元素地址 表示整个数组的地址
//	//例外  2 sizeof(arr)    sizeof(数组名) 数组名表示的是整个数组  sizeof（数组名） 计算的是整个数组的大小 单位是字节
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//
//	}
//	return end - start;//之间的元素个数 也就是字符个数
//}
//int main()//模拟实现strlen   求字符串长度的另外一种方法
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1  递归的方式2
//	char arr[] = "byte";//内存中放的是 b y t e \0  str就是b的地址  所以再找到\0用end表示  减一下就知道字符串长度了
//
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()//指针 - 指针     也就是地址-地址
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p=&arr[9] - &arr[0];//两地址相减 就是指针-指针  得到的是中间的元素个数  有9个元素 所以是9  小地址-大地址的绝对值得到的是中间元素的个数
//	printf("%d\n", p);
//	//printf("%d\n",&arr[9] - &ch[0]);//千万不能这样写   整型数组-字符数组  讨论元素个数时 不知道应该按谁的讨论 所以指针-指针时 这两个指针一定是指向同一块儿空间的
//
//
//	return 0;
//}

//指针也可以比较大小
//int main()//指针-整数
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];//第10个元素的地址 
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p--;
//
//	}
//	return 0;
//}


//int main()//指针运算  指针 +- 整数
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//算元素个数
//	int* p = arr;//通过指针来访问
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p=p + 1;//向后跳一个指针  也就是第二个指针  这里也可以换成p++  也可以+2 就是p+=2；但是要注意循环次数
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//已经把a操作好了 pa指针也不打算用了
//	pa = NULL;//将pa指针置成空 这时pa就没有指向a了 不会干扰a  没有指向任何有效空间 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//指针初始化
//	int* p = NULL;//不知道该初始化什么值的时候就弄成空指针  类似于  int b=0; 这样子  NULL 就是用来初始化指针 或者是给指针赋值的 
//	return 0;
//}

//test()
//{
//	int a = 10;
//	return  &a;//将a的地址返回来
//	//a是局部变量 进括号创建 出括号销毁 所以空间就不属于当前程序了   如果是数组也是这样 返回之后空间不属于当前程序了
//}
//int main()//指针指向的空间被释放 也是野指针
//{
//	int* p=test();
//	printf("%d\n", *p);//按地址找回去 空间可能已经分给别人了 所以也是野指针
//	return 0;
//}

//int main()//越界访问 也是野指针
//{
//	int a[10] = 0;//意思是a数组有10个元素
//	int i = 0;
//	int* p = a;//把数组起始元素的地址交给变量p
//	for (i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;//当p等于9时 已经访问到第10个元素 再加的时候 就访问到别的地址了 也就是越界访问 就是野指针
//		*p++ = i;//后置++ 就是*p解引用之后再++  等于上面的两步
//	}
//	return 0;
//}

//int main()
//{
//	int* p;//局部变量未初始化 里面默认放的是一个随机值
//	*p = 20;//有问题  野指针
//	return 0;
//} 