#pragma once
#define ROW 3//�� ���ﶨ����Ϊ���޸�
#define COL 3//��
#include<stdio.h>;
#include<stdlib.h>
#include<time.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);//��ά����

//��ʾ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ   
//Ҫ�������ֲ�ͬ��״̬  
//���Ӯ = '*��
//����Ӯ = '#'
//ƽ�� = 'Q'
//���� = 'C'
char IsWin(char board[ROW][COL], int row, int col);//Ҫ�з���ֵ