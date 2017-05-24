#include <iostream>

using namespace std;

class stack{
	int buf[10];
protected:
	int idx;
public:
	stack(void){
		idx = 0;
	}
	int pop(void){
		return buf[--idx];
	}
	void push(int v){
		buf[idx++] = v;
	}
};

class nstack : public stack{
public:
	int isEmpty(void){
		if(idx == 0)
			return 1;
		return 0;
	}
	void push(int v){
		if(v > 0)
			stack::push(v);
	}
};

int main(void){
	nstack a;
	int n, v;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v;
		a.push(v);
	}
	while(!a.isEmpty()){
		cout << a.pop() << endl;
	}
	return 0;
}
