#include<stdio.h>
int Max(int x, int y)//������ʵ��
{
	if (x > y)
		return x;
	else//else�����
		return y;
}
#define MAX(X,Y) (X>Y?X:Y)//��Ķ���
int main()//define���Զ����-������

{
	int a = 10;
	int b = 20;
	//������ʽ
	int max = Max(a, b);
	printf("max=%d\n",max);
	//��ķ�ʽ
	max = MAX(a, b);
	//max=(a>b?a:b)
	printf("max=%d\n", max);
	return 0;
}
//#define MAX 100//define�����ʶ������
//int main()
//
//{
//	int a = MAX;
//	return 0;
//}