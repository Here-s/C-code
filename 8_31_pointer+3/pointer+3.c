#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc ����һ���ַ�ָ��
//	const char* ps = "abcdef";//abcdef ��һ�������ַ��� ps �ŵ���a�ĵ�ַ ����const ��ֹ���ݱ��޸�
//	return 0;
//}


//ָ������ ������
//int main()
//{
//	char arr[5];//�ַ����� ÿ��Ԫ�����ַ�����
//
//	//ָ������ - ���ָ�������
//	int* arr[5];//�������ָ�������
//	return 0;
//}


//����ָ��
//int main()
//{
//	int arr[10];//arr��������������Ԫ�صĵ�ַ  &arr �õ���������ĵ�ַ
//	int* p = arr;//����Ԫ�صĵ�ַ�ŵ� p ����
//	int(*p2)[10] = &arr;//��Ϊ p2 ��ָ�� �����Ⱥ�*��� Ȼ������������ ���Ժ�[]��� ��������
//	//�����ܵľ�������ָ�� ָ�������� int
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//����ָ��  ��ָ������ָ�� �������� &������ ���Ǻ����ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;//pf����һ������ָ��    Add �� &Add ���� Add �ĵ�ַ
//
//	//int sum = (*pf)(2, 3);//Ҳ����дpf  ��д*  д* ��Ϊ�˺����
//	int sum = pf(2, 3);//ͨ������ָ��������
//	printf("%d", sum);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//	int (*ps)(int, int) = Sub;
//	//���԰�Add Sub �ŵ�һ����������ȥ
//	int(*pArr[5])(int, int) = { Add, Sub };//pArr����һ������ָ������� ȥ��pArr[5] ˵��Ԫ�������� int*
//	//pArr�Ⱥ�[]���˵��������
//
//	//ָ����ָ�������ָ��
//	int(*(*p)[5]) = &pArr;//ȡ������ĵ�ַ Ҫ��һ������ָ�������� ������һ��ָ��   p ��һ��ָ��
//	//��ָ��ָ����һ������  ���� p ��һ������ָ��  �����ÿһ��Ԫ���Ǻ���ָ��
//	//p��һ��ָ����ָ�������ָ��
//	return 0;
//}


//�ص�����   ͨ������ָ��ȥ�����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int ret = pf(3, 5);//pf����ǵ��õ��Ǹ������ĵ�ַ ����˵���õ���Add ��ôpf �ŵľ���Add �����ĵ�ַ
//	//Ȼ��͵�����Ӧ�ĺ���
//	printf("%d", ret);
//}
//int main()
//{
//	//Calc��ģ��һ��������
//	Calc(Add);
//	Calc(Sub);//������Sub ���Ժ�������� pf ����Sub�ĵ�ַ
//	return 0;
//}


//qort ���� ������������ �����Ÿ��ָ���������  ��4������  ��һ���� void* base  �ڶ����� size_t num  
//�������� size_twidth ���ĸ��� ����ָ��

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//�ų�����  ÿ����Ԫ�ض�Ҫ�Ƚ� һ�˿�����һ��Ԫ�� 10��Ԫ�� ����9��������
//	bubble_sort(arr, sz);
//
//	//��ӡ
//	print_arr(arr, sz);
//	return 0;
//}


//���źö������� ����Ϊ base 
//void qsort(void* base, size_t num, size_t width, int(* cmp)(const void* e1, const void* e2))
//��4������  ��һ���� void* base �����ַ  
//			�ڶ����� size_t num ָ���Ǵ������Ԫ�ظ���
//			�������� size_twidth ָ����һ��Ԫ�صĴ�С ��λ���ֽ�   
//			���ĸ��� ����ָ�� e1 �� e1 ��Ҫ�Ƚϵ�������Ԫ�صĵ�ַ �����ʱ��Ƚ� �������� �����������Ƚ�
//
//���Ҫ�ŵĲ������� ���ǽṹ�� 

//int main()
//{
//	int a = -10;
//	float f = 5.5f;
//	//char* p = &a;//���﷢��������ת�� ��Ϊ��ȷ����ָ������ ���Իᾯ��
//	//char* p2 = &f;
//	void* p3 = &a;//void* ���Խ����κ����͵�ַ��ָ��  ��һ���޾������͵�ָ�� ���ǲ��ܽ�������
//	//p3++;//���� ��Ϊû�о������� ��֪�����߼����ֽ� Ҳ���ܽ����� ��֪���ý⼸���ֽ�
//
//	//int* p1 = &a;
//	//p1++;
//	//p1 = p1 + 1;
//
//	void* p4 = &f;
//	return 0;
//}


//�ȽϺ���  ����һ�����ڵڶ��� �ͷ��ش���0 ���� С�� �ͷ��ظ��� ���� �ͷ���0
//qsort ����ͷ�ļ� stdlib.h
//int cmp_int(const void* e1, const void* e2)
//{
//	//ԭ���Ƚ���������
//	//e1 e2 �����������͵ĵ�ַ  ����Ӧ����ǿ��ת��
//	return *(int*)e1 - *(int*)e2;//�� e1 e2 λ�û�һ�� �ͽ�����
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_by_name(const void* e1, const void* e2)
//{
//	//e1  e2 �ǽṹ������ ����ǿ��ת��
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu s[3] = { {"����", 15},{"����", 30},{"����", 10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//������������
//	//qsort(s, sz, sizeof(s[0]), cmp_by_name);
//
//	//��������������
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////ʹ�ûص����� ʵ��һ��ͨ�õ�ð��������
//void Bubblesort(void* base, int num, size_t width, int(*cmp)(const void*, const void*))
//{
//	size_t i = 0;
//	//����
//	for (i = 0; i < num - 1; i++)
//	{
//		//�ȽϵĶ���
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)//��Ϊchar* ��һ���ֽ� 
//				//���� char* �˿�Ⱦ���֮ǰ��Ԫ�صĴ�С 
//			{
//				//��һ�����ڵڶ��� �ͽ��� ʵ������
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
////�����Զ���� Bubblesort 
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	//������������
//	//test1();
//
//	//����ṹ������
//	//test2();
//
//	//�����Զ����Bubblesort
//	test3();
//	return 0;
//}


//������
int main()
{
	//sizeof(������)  ��������ʾ�������� ���������������Ĵ�С 
	//&������ ��������ʾ�������� ȡ��������������ĵ�ַ
	//����֮�� ���е������� ������Ԫ�صĵ�ַ
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//�� 16 �������������Ĵ�С ��λ���ֽ�   
								//��������������sizeof �ڲ� ��������ʾ�������飬���������������Ĵ�С
	printf("%d\n", sizeof(a + 0));//��������ʾ1 �ĵ�ַ +0 ����1�ĵ�ַ ������ָ�� ��4���ֽ�  a��ʾ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*a));//�� a ������ �������������� ��ʾ��Ԫ�� ���� a[0] ��������ʹ�С ��4
	printf("%d\n", sizeof(a + 1));//4 ��Ϊ a ����Ԫ�ص�ַ +1 ��ʾ�ڶ���Ԫ�صĵ�ַ ����4����8
	printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�� ��С��4���ֽ�
	printf("%d\n", sizeof(&a));//4����8 ��Ϊ���ǵ�ַ ����ָ�� ���Ի���4����8
	printf("%d\n", sizeof(*&a));//16 ��Ϊ�Ƕ� a �ĵ�ַ������ �Ƕ������ַ������ �õ��������� ���Դ�С�� 16
								//�ȼ��� sizeof(a)  ��Ϊ* ��& ������
	printf("%d\n", sizeof(&a + 1));//4����8 ��Ϊ������һ������ ������һ����ַ ���Ի���4����8
	printf("%d\n", sizeof(&a[0]));//4��8 Ҳ�ǵ�ַ �ǵ�һ��Ԫ�صĵ�ַ ����Ҳ��
	printf("%d\n", sizeof(&a[0] + 1));//4 �� 8  ��Ϊ�ǵڶ���Ԫ�صĵ�ַ ���ǵ�ַ ������4 �� 8

	return 0;
}