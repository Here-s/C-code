#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10;
	int* pa = &a;//pa��ָ����� pa��������int*
	*pa = 20;//�����ò���������ͨ��pa�ĵ�ַ�ҵ������������  ���� pa ��a��ֵ��Ϊ20
	printf("%d\n", a);
	return 0;
}

//Swap(int x,int y)//�Լ����庯��  void  ��˼���������û�з���ֵ  �˷���������
//{
//	int tmp = 0;//�������ˣ���Ϊ��������������������ռ� ��ַ��һ�� �� x y �� a b û�й�ϵ  ���Խ�������
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()//дһ���������Խ����������α���������
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d,b=%d\n", a, b);
//	Swap(a,b);//��������
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()//дһ���������Խ����������α���������
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//�������м������������ֵ
//	printf("a=%d,b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int get_max(int x, int y)//��ΪҪ�ú�������Ҫ���庯��,,��Ϊ����ֵ�����Σ�����ǰ���int
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()//Ҫѧ���Զ��庯��
//{
//	//дһ�������ҳ����� ���еĽϴ�ֵ
//	int a = 10;
//	int b = 20;
//	///������ʹ��
//	int max=get_max(a,b);//�Զ����һ������
//	printf("���ֵ=%d\n ", max);
//	max=get_max(100, 300);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcome to byte dance";
//	memset(arr, '*', 7); //��welcome��Ϊ*******
//	printf("%s\n", arr);
//	return 0;
//}

//memset=memory set  ���ڴ�����

//int main()
//{
//	char arr1[] = "byte";//���Դͷ���ݱ�Ŀ������Ҫ���Ļ����ͻ����
//	char arr2[20] = "###############";//��ʵ��ӡ�Ľ�����滹��######��������Ϊ��/0���Բ���ӡ�ˣ���Ϊ/0���ַ���������־
//	//��1�����ݿ�����2����
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen ���ַ��������й�
//	//strcpy �ַ�������  ��һ���ط����ַ�������������һ���ط�   Ҫ�п������ݣ��Ϳ���������ȥ
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}