#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//回调函数 通过函数指针调用的函数 





int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
int cmp_float(const void* e1, const void* e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] = { 9.0,8.0,7.0, 6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);//%f 打印浮点型
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//强制转化成结构体指针 找到age
}
int cmp_stu_by_name(const void* e1, const void* e2)//通过名字比较
{//比较名字就是比较字符串   字符串比较不能直接用><= 比较 应该用strcmp比较(字符串比较函数)
	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);

}
void test3()
{
	struct Stu s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	int t = 0;
	for (t = 0; t < sz; t++)
	{
		printf("%c ", s[t]);//%f 打印浮点型
	}

}


int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//会报警告
//	//char ch = 'w';
//	void* p = &a;//可以接收任意类型元素的地址   void* 无类型指针
//	//*p = 0;//这样是不行的 因为void* 不知道访问几个字节 所以不能解引用
//	//p++;//也不行 因为不知道几个字节 所以也不知道走几个字节
//	//void* 类型的指针 不能进行+-整数的操作
//	//p = &ch;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
////qsort-库函数-排序  quick sort 四个参数 第四个是指针
//int cmp_int(const void*e1,const void*e2)//写成void接收任意类型的指针
//{//用来比较两个整型值
//	return *(int*)e1- *(int*)e2;//因为是void 所以不能比较  所以强制转换成int*
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"张三",20},{"李四",20},{"王五",10} };
//	float f[] = { 9.0,8.0,6.0,5.0,4.0};
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//使用qsort函数要引头文件 #include<stdlib.h>
//	//qsort 先传目标数组的起始位置 然后是数组的大小，单位是元素 再下来是元素大小 最后是比较函数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for(j=0;j<sz-1-i;j++)
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()//冒泡排序
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"张三",20},{"李四",20},{"王五",10} };//按照年龄来排序，不能冒泡排序排了
//	float f[] = { 9.0,8.0,6.0,5.0 };//按照浮点型来排序，也不能冒泡排序排了
//	bubble_sort(arr, sz);//这里写的只能排整型  不能通用
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int*(*pa)[10]=&arr;
//	//函数指针
//	//int (*pAdd)(int x,int y) = Add;//pAdd是函数指针 调用Add函数 
//	//int sum=(*pAdd)(1, 2);//调用Add函数的结果是1 2相加
//	//printf("sum=%d", sum);
//	//函数指针的数组
//	int (*pArr[5])(int, int);//pArr是一个数组 元素类型是指针
//	//指向数组指针的指针
//	int (*(*pArr)[5])(int, int)=&pArr;
//	return 0;
//}
