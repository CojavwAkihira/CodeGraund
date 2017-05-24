#include <iostream>

using namespace std;

class que{
private:
	int buf[10];
protected:
	int idx;
public:
	que(void){
		int idx = 0;
	}
	void enq(int v){
		buf[idx++] = v;
	}
	int deq(void){
		int ret = buf[0];
		for(int i = 0;i < idx; i++)
			buf[i] = buf[i + 1];
		idx--;
		return ret;
	}
	int bufInfo(int i){
		return buf[i];
	}
};

class pque : public que {
private:
	int diff[10];
public:
	pque(void){
		for(int i = 0; i < 10; i++)
			diff[i] = 0;
	}
	void diffCheck(void){
		for(int j = 0; j < 10; j++){
			for(int i = 0; i < idx; i++){
				if(bufInfo(j) > bufInfo(i))
					diff[j]++;
			}
		}
	}
	int deq(void){
		diffCheck();
		for(int j = 0; j < 10; j++){
			for(int i = 0; i < 10; i++){
				if(diff[i] == j){
					return bufInfo(diff[i]);
				}
			}
		}
	}
};

int main(void){
	que q1;
	pque q2;
	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		q1.enq(v);
		q2.enq(v);
	}

	for(int i = 0; i < n; i++){
		cout << q1.deq() << " ";
	}
	cout << endl;

	for(int i = 0; i < n;i++){
		cout << q2.deq() << "  ";
	}
	cout << endl;
	return 0;
}
