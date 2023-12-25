#include <iostream>
using namespace std;

class chang {
public:
	void input();
	void qiutiji(char a);
private:
	int length,width,height,V;
};

void chang::input() {
	cin >> length;
	cin >> width;
	cin >> height;	   
}
void chang::qiutiji(char a) {
	V = length * width * height;
	cout << "求得" << a << "的体积为" << V << endl;
}
int main() {
	chang A;
	chang B;
	chang C;
	A.input();
	B.input();
	C.input();
	A.qiutiji('A');
	B.qiutiji('B');
	C.qiutiji('C');
}




