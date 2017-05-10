#include <iostream>

using namespace std;

class stack{
private:
	int idx;
	int buf[10];
public:
	stack(){
		idx = 0;
	}
	void push(int v){
		buf[idx++] = v;
	}
	int pop(void){
		return buf[--idx];
	}
};

int main(void){
	stack a,b;
	int n, v;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> v;	a.push(v);
		cin >> v;	b.push(v);
	}
	for(int i = 0;i < n; i++){
		cout << a.pop() << endl;
		cout << b.pop() << endl;
	}
	return 0;
}