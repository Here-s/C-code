#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//����
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1://���ﲻ��ִ������Ϊ���switch��n=2������ִ��case 2���������պ���Ϣ��һ�����������m=5��n=3
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}


//switchҲ��һ�ַ�֧�����ڶ��ַ�֧�����
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			if (n == 1)
//				printf("hehe\n");//��case����п��Գ���if
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		  printf("������\n");
//		  break;
//		case 6:
//		case 7:
//		  printf("��Ϣ��\n");
//		  break;
//		default://�������˼��������涼���ܽ��еĻ�����ôִ������,Ҳ���Է���ǰ��
//			printf("�������");
//			break;
//
//	}

//	int day = 0;
//	scanf("%d", &day);//&��ȡ��ַ��
//	switch (day)//breakֹͣѭ��������ѭ��switch�����α��ʽ����������dayǰ��Ҫ��int
//	{
//	case 1://case����ӳ��������α��ʽ��1 2 ֮��ģ�������1.0֮��ģ�
//		printf("����һ\n");
//		break;
//	case2:
//		printf("���ڶ�\n");
//		break;
//	case3:
//		printf("������\n");
//		break;
//	case4:
//		printf("������\n");
//		break;
//	case5:
//		printf("������\n");
//		break;
//	case6:
//		printf("������\n");
//			break;
//	case7:
//		printf("������\n");
//		break;
//	}

	//if (day == 1)����̫�鷳�������������switch����
	//	printf("����һ\n");
	//else if (2 == day)
	//	printf("���ڶ�\n");
	//else if (3 == day)
	//	printf("������\n");
	//else if (4 == day)
	//	printf("������\n");
	//else if (5 == day)
	//	printf("������\n");
	//else if (6 == day)
	//	printf("������\n");
	//else
	//	printf("������\n");
//	return 0;
//}