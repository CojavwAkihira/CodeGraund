#include <iostream>

using namespace std;

class Insurance{
private:
	int age;
	int color;
public:
	void setAge(int a){
		age = a;
	}
	int getAge(void){
		return age;
	}
	void setColor(int c){
		color = c;
	}
	int getColor(void){
		return color;
	}
	int fee(void){
		if(color == 0)
			return 6000;
		else if(color == 1)
			return 7000;
		else
			return 5000;
	}
};

class Insurance2 : public Insurance{
public:
	int fee(void){
		if(getColor() != 2){
			if(getAge() < 30)
				return 8000;
			else if(getAge() < 50)
				return 6500;
			else
				return 8500;
		}else{
			if(getAge() < 30)
				return 5000;
			else if(getAge() < 50)
				return 3500;
			else
				return 4500;
		}
	}
};

int main(void){
	int a, c;

	cin >> a >> c;
	Insurance i1;
	i1.setAge(a);
	i1.setColor(c);
	cout << i1.fee() << endl;

	Insurance2 i2;
	i2.setAge(a);
	i2.setColor(c);
	cout << i2.fee() << endl;

	return 0;
}
