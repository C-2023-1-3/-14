#include<iostream>
using namespace std;
class point {
public:
void setPoint(int i, int j) {
		x += i;
		y += j;
	}
void display() {
	cout << "¸Ã×ø±êÎª£¨" << x << "," << y << ")" << endl;
}
private:
	double x=60;
	double y=80;
};

int main() {
	point pointA;
	int a, b;
	cout << "please input a  &  b" << endl;
	cin >> a >> b ;
	pointA.setPoint(a, b);
	pointA.display();
}