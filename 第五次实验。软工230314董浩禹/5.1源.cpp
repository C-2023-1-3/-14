#include<iostream>
using namespace std;
class Time             // ����Time��
{private:              // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	void input(int h, int m, int s) {
		cin >> h;
		hour = h;
		cin >> m;
		minute = m;
		cin >> s;
		sec = s;
	}
	void display() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.input(0,0,0);
	t1.display();
	return 0;
}


