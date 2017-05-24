#include <iostream>

using namespace std;

class MedicalCheck{
protected:
	int ID;
	double height;
	double weight;
public:
	void setID(int id){
		ID = id;
	}
	int getID(void){
		return ID;
	}
	void setHeight(double h){
		height = h;
	}
	double getHeight(void){
		return height;
	}
	void setWeight(double w){
		weight = w;
	}
	double getWeight(void){
		return weight;
	}
	double BMI(void){
		return (double) (weight / (height * height));
	}
	double StandardBodyWeight(void){
		return (double) (height * height * 22);
	}
};

int main(void){
	int id;
	double h,w;
	cin >> id >> h >> w;
	MedicalCheck mc;
	mc.setID(id);
	mc.setHeight(h);
	mc.setWeight(w);	
	cout << mc.BMI() << endl;
	cout << mc.StandardBodyWeight() << endl;
	return 0;
}
