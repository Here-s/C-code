#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//��̬�ڴ����  ��̬��ά���ռ��С  �Դﵽ����
//д�� malloc ֮�� ҲҪд free

//int main()
//{
//	int n = 10;//�̶� 4 ���ֽ�
//	//int arr[10];//40 ���ֽ�   ���ǹ̶�����
//	
//	//ջ�����žֲ�����  �����β�  ��ʱ����
//	//��������̬�ڴ����   malloc  calloc  realloc  free  
//	//��̬������̬������static��  ȫ�ֱ���
//
//	//malloc ������ռ�   ���� size ���ռ�
//	int* arr = (int*)malloc(40);//����40���ֽڵĿռ�  �ռ������� int  ����Ŀռ���������
//	//�������ʧ�ܵĻ� ���ǿ�ָ��
//	if (*arr == NULL)
//	{
//		return -1;
//	}
//	//���ٳɹ�
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i;
//	}
//
//	//free �ͷſռ�  �� free ��һ���� ��̬�ռ����ʼ��ַ
//	free(arr);//�� malloc ����Ŀռ� ȫ������ȥ Ҳ����ȫ���ͷ�
//
//	//arr ��Ϊ NULL���� arr �Ҳ����ոյĿռ�  �Ӷ�����Ұָ��
//	arr = NULL;
//	return 0;
//}


//calloc Ҳ��������̬�ڴ�����   Ҳ������������  ����һ������ ���ڴ浱�� ��ʼ��ÿ��Ԫ��
//Ҳ���ڶ���������ռ� ���ҳ�ʼ��Ϊ 0 ���ҷ�����ʼ��ַ

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("�ռ俪��ʧ��\n");
//		printf("%s\n",strerror(errno));
//		return -1;
//	}
//	//����ɹ�
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ,", *(p + i));//��ӡ�������� 0 ��Ϊ�� calloc
//	}
//	free(p);
//	return 0;
//}


//realloc  �����ڴ� ���ڴ������ø������   �Զ�̬�ڴ�ռ��С�ĵ���
//����������  һ����ָ�� ֮ǰ���ٵ��ڴ��    ����һ�����޷����� Ҳ�����µĴ�С ��λ���ֽ�
//���ص��ǵ���֮�����ʼԪ�صĵ�ַ    ����Ҳ�� realloc 

//int main()
//{
//	//����10�� int �Ŀռ�
//	int* p = (int*)calloc(10, sizeof(int));
//	//����ɹ�
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ,", *(p + i));
//	}
//	//�ռ䲻�� ���ӵ� 20�� int
//
//	//realloc�����ռ��ʱ��  �������ռ����Ŀռ䲻���� �Ǿ�ȥ�ҵ�һ����������С�Ŀռ�
//		//Ȼ�����°�֮ǰ�����ݿ������� Ȼ���ͷŵ�ԭ���Ŀռ�  Ȼ����¿��ٵĿռ�ĵ�ַ����ȥ
//	//����ռ��㹻�Ļ� ֱ���ں���׷�ӿռ�
//
//	//realloc �᷵�ص�ַ  ��ַ�����Ǿɵĵ�ַ Ҳ�������µĵ�ַ ����Ҫ���շ���ֵ
//	//���ܷ��� p ���� ��Ϊ�������ʧ�� ��ôԭ����ָ��Ҳ��� NULL ��
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("�ռ�����ʧ��\n");
//		p = ptr;
//	}
//	else
//	{
//		//ptr�ǿ�ָ�� ����-1
//		return -1
//	}
//	//���ݳɹ�
//	for (int i = 10; i < 20; i++)
//	{
//		*(ptr + i) = i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	return 0;
//}


//�����Ĺ��ڶ�̬�ڴ�Ĵ���

//1 �Կ�ָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(20);
//	//һ��Ҫ�ж��Ƿ�Ϊ ��ָ��
//	if (p == NULL)
//	{
//		return -1;
//	}
//	*p = 0;//�з��� ��Ϊ�������ʧ�ܵĻ� ���ǶԿ�ָ������õĲ���  ����һ��Ҫ�ж��Ƿ��ǿ�ָ��
//	return 0;
//}

//2 �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(200);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//��Ϊ�� 200 ���ֽ� �� 50 ������ ���������Խ�������  ����ͻ����
//	for (int i = 0; i < 80; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3 �ԷǶ�̬�ڴ�� free Ҳ�ᵼ�³������
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p == NULL;
//	return 0;
//}

//4 ʹ�� free �ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//ʹ��
//	for (int i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//����� p �Ѿ�����  �Ѿ�û��ָ��p��ʼ��λ���� ָ������ο��ٵ��ڴ�ĺ�һ����
//	//ֻҪ p ����ָ����ʼ��ַ ����ͻ����
//	free(p);
//	p = NULL;
//	return 0;
//}

//5 ��ͬһ��ռ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//ʹ��...
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	free(p);
//	//���������ͷžͻ������  �ͻᵼ�³���ҵ�  �� p ָ�� NULL ��ʱ�� �����Լ����ͷ�
//	//����ÿ���ͷ�֮�� ��Ҫ�� ָ���ָ�� ��Ϊ NULL
//	return 0;
//}


//6 ��̬�ڴ������ͷ�   �����ڴ�й¶  ���Ǳ���ʹ�ò���
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return -1;
	}
	//�����ͷ���  �ڶ���������Ŀռ�  �����ֻ��յķ�ʽ  1 ��ͨ�� free ������    
	//2 �������˳���ʱ��  ����ϵͳ�Զ�����
	free(p);
	//�ͷ�֮����Ϊ NULL p ����һ��Ұָ��
	p = NULL;
	//���� p ����һ����ָ�� ����Ұָ��
	return 0;
}