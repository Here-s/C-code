#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ��
//����������������һ����ά�����һ���������ж��������Ƿ��и�������ʱ�临�Ӷ� O(row + col)
void judge()
{
	int k = 0;
	scanf("%d", &k);
	int arr[256][256] = { 0 };
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < k; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int a = 0;
	printf("��������ҵ���\n");
	int flag = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < k; j++)
		{
			if (arr[i][j] == a)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("���и�����\n");
	}
	else
	{
		printf("�����и�����\n");
	}
}
int main()
{
	judge();
	return 0;
}



//�����������н����ʲô
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)//ֻ�н��Ϊ0 ��ʱ��Ų���ִ�� ��Ϊ1 ��ʱ�� ��break��
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);//4 ��Ϊif���ж������еķ�0 ��ʾ��
//	return 0;
//}


//���д�������н����ʲô
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	int i, j = 0;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);//���22 ��Ϊq[3][1] �Ľ�������ֵ������һλ��
//	return 0;
//}