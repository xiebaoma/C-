//��δ����� C++ �е�Ԥ������ָ�ͨ�����ڷ�ֹͷ�ļ����ظ��������Լ��ڱ���ʱ���ƴ������Ϊ��
#ifndef TOOLS_H
#define TOOLS_H
/*
#ifndef ��ζ�� "if not defined"�������һ����ʶ���Ƿ��Ѿ��ڵ�ǰ�ļ��ж��������������ʶ����δ���壬��ô #ifndef ����Ĵ���ͻᱻִ�С�
#define ���ڶ���һ����ʶ����ͨ�����ڶ�������Ψһ��ʶ����
#endif ��ʾ��������Ľ�����

��Щ���������д�淶���������
*/

void SetWindowSize(int cols, int lines);//���ô��ڴ�С
void SetCursorPosition(const int x, const int y);
void SetColor(int colorID);
void SetBackColor();


#endif // TOOLS_H
