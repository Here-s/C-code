#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//��Ŀ������һ���ǿ��������飬����Ԫ�ؾ��������Σ��ҳ��Ǹ�ֻ������һ�ε�Ԫ��
//������int a[]={1,2,3,4,5,1,2,3,4},��������ֻ��5����һ�Σ��������ֶ��ǳɶԳ��ֵģ�Ҫ�ҳ�5
int main()//�Ż����������Կ������0^a=a ,3^3^5=5, 3^5^3=5
//����1 1 2 2 3 3 4 4 5 ���֮��Ϊ5����1^1^2^2^3^3^4^4^5=5
{
	int arr[] = { 1,2,3,4,5,1,2,3,4, };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("����:%d\n", ret);
	return 0;
}
//int main()//�����Ǳ������
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,};//
//	//�ҳ����ģ���ÿ��Ԫ�س��ּ���ͳ�Ƴ���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼��Σ�count++
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("���ģ�%d\n", arr[i]); 
//			break;//break-����ѭ��,break���ڵ�ѭ�����治���У��� ��Ȼ����ζ��ѭ��������
//		}
//	}
//
//	return 0;
//}
