#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ص����� ͨ������ָ����õĺ��� 





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
		printf("%f ", f[j]);//%f ��ӡ������
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//ǿ��ת���ɽṹ��ָ�� �ҵ�age
}
int cmp_stu_by_name(const void* e1, const void* e2)//ͨ�����ֱȽ�
{//�Ƚ����־��ǱȽ��ַ���   �ַ����Ƚϲ���ֱ����><= �Ƚ� Ӧ����strcmp�Ƚ�(�ַ����ȽϺ���)
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
		printf("%c ", s[t]);//%f ��ӡ������
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
//	//char* pc = &a;//�ᱨ����
//	//char ch = 'w';
//	void* p = &a;//���Խ�����������Ԫ�صĵ�ַ   void* ������ָ��
//	//*p = 0;//�����ǲ��е� ��Ϊvoid* ��֪�����ʼ����ֽ� ���Բ��ܽ�����
//	//p++;//Ҳ���� ��Ϊ��֪�������ֽ� ����Ҳ��֪���߼����ֽ�
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//	//p = &ch;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
////qsort-�⺯��-����  quick sort �ĸ����� ���ĸ���ָ��
//int cmp_int(const void*e1,const void*e2)//д��void�����������͵�ָ��
//{//�����Ƚ���������ֵ
//	return *(int*)e1- *(int*)e2;//��Ϊ��void ���Բ��ܱȽ�  ����ǿ��ת����int*
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"����",20},{"����",20},{"����",10} };
//	float f[] = { 9.0,8.0,6.0,5.0,4.0};
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//ʹ��qsort����Ҫ��ͷ�ļ� #include<stdlib.h>
//	//qsort �ȴ�Ŀ���������ʼλ�� Ȼ��������Ĵ�С����λ��Ԫ�� ��������Ԫ�ش�С ����ǱȽϺ���
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
//int main()//ð������
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"����",20},{"����",20},{"����",10} };//�������������򣬲���ð����������
//	float f[] = { 9.0,8.0,6.0,5.0 };//���ո�����������Ҳ����ð����������
//	bubble_sort(arr, sz);//����д��ֻ��������  ����ͨ��
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
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int*(*pa)[10]=&arr;
//	//����ָ��
//	//int (*pAdd)(int x,int y) = Add;//pAdd�Ǻ���ָ�� ����Add���� 
//	//int sum=(*pAdd)(1, 2);//����Add�����Ľ����1 2���
//	//printf("sum=%d", sum);
//	//����ָ�������
//	int (*pArr[5])(int, int);//pArr��һ������ Ԫ��������ָ��
//	//ָ������ָ���ָ��
//	int (*(*pArr)[5])(int, int)=&pArr;
//	return 0;
//}