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

class MedicalCheck3 : public MedicalCheck2{
private:
	int age;
public:
	void setAge(int a){
		age = a;
	}
	int getAge(void){
		return age;
	}
	double StandardBodyWeight(void){
	if(age < 15)
		MedicalCheck2::StandardBodyWeight();
	else
		MedicalCheck::StandardBodyWeight();
	}
};

int main(void){
	int id, a;
	double h, w;
	cin >> id >> h >> w >> a;
	MedicalCheck3 mc;
	mc.setID(id);
	mc.setHeight(h);
	mc.setWeight(w);
	mc.setAge(a);	
	cout << mc.BMI() << endl;
	cout << mc.rohrer() << endl;
	cout << mc.StandardBodyWeight() << endl;
	return 0;
}
