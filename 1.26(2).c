#define _CRT_SECURE_NO_WARNINGS 1
//#define����ı�ʶ������ �����ֳ���
#include<stdio.h>
//4.ö�ٳ���  ö��=һһ�о� �Ա�   ö�ٹؼ���enum Sex�Ա� ������
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;
	return 0;
}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}



//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//{
	//const int n=10;//n�Ǳ����������г����ԣ�����n�ǳ����� const �ڶ��ֳ���
	//int arr[n]={0};
	//n=20;
//	const int num = 4;//const�ǳ����ԣ�����const�Ļ�����Ͳ��ܱ���
//	printf("%d\n", num);
	//num = 8;
//	printf("%d\n", num);//����������Ϊint�Ǳ���
//	3;//���泣��-ֱ��д������  ��һ�ֳ���
//	return 0;
//}
//�����Ǽӷ�����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf����������ص���Ϣ&ȡ��ַ�������������������Ū��������Ū����������ַ��
//	sum = num1 + num2; scanf
//	printf("sum=%d\n", sum);
//	return 0;
//}