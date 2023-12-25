#include<iostream>
using namespace std;
class Time             // 定义Time类
{private:              // 数据成员为私有的
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


