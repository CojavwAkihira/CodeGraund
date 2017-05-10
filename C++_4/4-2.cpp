#include <iostream>

using namespace std;

class que{
private:
	int idx;
	int buf[10];
public:
	que(){
		idx = 0;
	}
	void enq(int v){
		buf[idx++] = v;
	}
	int deq(void){
		int ret = buf[0];
		for(int i = 0; i < idx; i++)
			buf[i] = buf[i + 1];
		idx--;
		return ret;
	}
};

int main(void){
	que a, b;
	
	int n, v;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v;	a.enq(v);
		cin >> v;	b.enq(v);
	}
	for(int i = 0; i < n; i++){
		cout << a.deq() << endl;
		cout << b.deq() << endl;
	}
	return 0;
}