#include <iostream>
#include <cmath>

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
		return (double) (weight / pow(height, 2.0));
	}
	double StandardBodyWeight(void){
		return (double) (pow(height, 2.0)* 22);
	}
};

class MedicalCheck2 : public MedicalCheck{
public:
	double rohrer(void){
		return (double) (weight / pow(height * 100, 3.0) * pow(10, 7.0));
	}
	double StandardBodyWeight(void){
		return (double) (130 * pow(height * 100, 3.0) / pow(10, 7.0));
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

	MedicalCheck2 mc2;
	mc2.setID(id);
	mc2.setHeight(h);
	mc2.setWeight(w);
	cout << mc2.rohrer() << endl;
	cout << mc2.StandardBodyWeight() << endl;
	return 0;
}
