#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//ʹ�ÿ⺯�� Ҫ����ͷ�ļ� stdio.h ��ͷ�ļ�������


//int				����
//short[int]		������ 
//long[int]			������
//longlong[int]		��������
//char				�ַ���������(����)
//float				�����ȸ�����(С��)
//double			˫���ȸ�����

//int main()//һ���ļ�ֻ����һ��main����  ��������  ��main������һ��ִ��
//{
//	printf("Harry\n");//printf��һ���⺯�� C�����ṩ�Ŀ⺯��
//	return 0;
//}

//int main()
//{	
//	//printf("%d\n", sizeof(char));//һ���ֽ�   8������λ=1���ֽ�
//	//printf("%d\n", sizeof(short));//2���ֽ�
//	//printf("%d\n", sizeof(int));//4���ֽ�     sizeof��˭�Ĵ�С
//	//printf("%d\n", sizeof(long));//4���ֽ�    C���Թ涨 sizeof(long)>=sizeof(int)
//	//printf("%d\n", sizeof(long long));//8���ֽ�  ����������
//	//printf("%d\n", sizeof(float));//4���ֽ�
//	//printf("%d\n", sizeof(double));//8���ֽ�
//	int age = 20;//age���ڴ��Ϸ���4���ֽڵĿռ�
//	char ch = 'w';//ch���ڴ��Ϸ���1���ֽڵĿռ�
//	int salary = 10000;//int������ salary �Ǳ�����
//	//�����ֵ �ó�������ʾ    ���ֵ �ñ�������ʾ
//	return 0;
//}

//������Ϊȫ�ֱ����;ֲ�����  
//int a = 100;//�ڴ������ⲿ����ı���  ����ȫ�ֱ���
//int main()
//{
//	int a = 10;//�ڴ�������(�����)  ���Ǿֲ�����
//	float weight = 55.8;
//	printf("%d\n", a);//�����10  �ֲ�������ȫ�ֱ�������һ����ʱ�� �ֲ���������
//	return 0;
//}

int main()
{
	int num1 = 100;
	int num2 = 200;
	int sum = 0;
	scanf("%d %d", &num1,&num2);//���������� һ������num1 һ������num2 
	sum = num1 + num2;
	printf("%d\n",sum);
	return 0;
}