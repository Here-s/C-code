#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>



void move(int arr[],int sz)//ʵ�ַ������Բο� ��ǰ������ż�� �Ӻ���ǰ������ �ҵ��󽻻�һ�� ���Ծ�ʵ���� һ��һ�Ե�ʵ��
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while ((left<right)&&arr[left] % 2 == 1)//������ҵ�ż��  �������<�ұ��Ƿ�ֹ���涼������
		{
			left++;//���ȫ��������ʱ��left��Խ����� ���� left<right
		}
		while ((left<right)&&arr[right] % 2 == 0)//���ұ�������   �������<�ұ��Ƿ�ֹ���涼��ż��
		{
			right--;
		}
		if (left < right)//
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()//��������ʹ����ȫ��λ��ż��ǰ��
// ��Ŀ ����һ���������� ʵ��һ������ �����������������ֵ�˳��ʹ�����������е�������������ǰ�벿�� ż��λ�ں�벿��
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);//��ӡarr Ҳ��֪��������� ����ҲҪ��sz
	return 0;
}

//int my_strlen(const char* str)//arr����Ԫ�ص�ַ ������char*������  ���ַ�������  ��ϣ�����ı� ����  + const
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤����Ч��
//	while (*str != '\0')
//	{
//		count++;//ѭ��һ�μ�һ����
//		str++;
//	}
//	return count;
//}
//int main()//ģ��ʵ��strlen
//{
//	char arr[] = "byte";
//	int len=my_strlen(arr);//strlen �����ַ������ȵ�
//	printf("%d\n", len);
//	return 0;
//}

//F5 �ǿ�ʼ���� ��ִ��
//int main()//���ʹ��� 
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("byte dance");// ��Ϊ�ȶ����i=0 ���ڴ��� ����i=12 ��λ�� ���Ե�i=12��ʱ��պ��ֳ�ʼ��Ϊ0 ���Ծͱ����ѭ����
//	}
//	return 0;
//}