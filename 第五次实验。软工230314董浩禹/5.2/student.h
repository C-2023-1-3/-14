//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#pragma once;
class Student              //������
{

public:			//���ó�Ա����ԭ������
	void display();
	void set_value(int a,const char b[20],char c) {
		num = a;
		for (int i = 0;i < 20;i++) {
			name[i] = b[i];
		}
		sex = c;
	}
private:
	int num;
	char name[20];
	char sex;
};
