/*
Tools��������Ҫ���������ù���λ���Լ�������ֵ���ɫ��
ֻ��Ҫ��סÿ���������ô���
�ײ�ԭ���漰Windows API,���������ùܡ�
*/

#include "tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines)//���ô��ڴ�С
{
    system("title GreedSnake");//���ô��ڱ���
    char cmd[30];// ���������ַ���������
    sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ�Ρ�ռ�����ַ����ʿ�ȳ���2
    system(cmd);//������system(mode con cols=88 lines=88)�����ô��ڿ�Ⱥ͸߶�
}

void SetCursorPosition(const int x, const int y)//���ù��λ��
{
    // ����һ�� COORD �ṹ����������ڴ洢����λ����Ϣ
    COORD position;

    position.X = x * 2;// �� x ������� 2����Ϊÿ���ַ��Ŀ���� 2 ��λ��
    position.Y = y;

    // ʹ�� Windows API ���� SetConsoleCursorPosition ���ù��λ��
    // GetStdHandle(STD_OUTPUT_HANDLE) ��ȡ��׼����豸�ľ��
    // position ��һ�� COORD �ṹ�壬������Ҫ���õ��µĹ��λ��
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void SetColor(int colorID)//�����ı���ɫ
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void SetBackColor()//�����ı�����ɫ
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_BLUE |
        BACKGROUND_BLUE |
        BACKGROUND_GREEN |
        BACKGROUND_RED);
}
