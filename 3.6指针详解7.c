#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>






struct Stu
{
	char name[20];
	int age;
};
void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))
//ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��Ϊ��������������͡���֪��
//����ԱҲ��֪�����Ƚϵ�����Ԫ�ص�����
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i ; j++)
		{
			if (cmp((char)base+j*width,(char*)base+(j+1)*width) > 0)//��char*�������ֽڣ�ÿ����һ���ֽڣ����wid��ȣ���֪��ÿ���������ֽ��ˣ���������8����һ�ξ�������8������
				//��Ϊ��charÿ������һ���ֽڣ���������1Ϊ��λ������Ƚ�
			{//����
				Swap((char)base + j * width, (char*)base + (j + 1) * width,width);//swap���������������ĵ�ַ ҲӦ�ðɿ�ȴ���ȥ����Ȼ��֪�����������ֽ�
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô���ݣ���Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_name);
//}
int main()
{
	test4();
	return 0;
}