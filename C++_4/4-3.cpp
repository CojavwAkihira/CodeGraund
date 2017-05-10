#include <iostream>

using namespace std;

class MovingObject{
private:
	int x;
	int y;
	int compass; //1:North, 2:East, 3:South, 4:West
public:
	MovingObject(){
		x = 0;
		y = 0;
		compass = 1;
	}
	void step(void){
		switch(compass){
			case 1:
				y += 80;
				break;
			case 2:
				x += 80;
				break;
			case 3:
				y -= 80;
				break;
			case 4:
				x -= 80;
				break;
		}
	}
	void turnRight(void){
		compass = 4 < compass ? 1 : compass++;
	}
	void turnLeft(void){
		compass = compass < 1 ? 4 : compass--;
	}
	void get(int* x, int* y){
		*x = this->x;
		*y = this->y;
	}
};

int main(void){
	MovingObject a;
	
	int v;
	while(1){
		cin >> v;
		if(v == 0)	break;
		switch(v){
			case 1:	a.turnLeft();	break;
			case 2:	a.step();	break;
			case 3:	a.turnRight();	break;
		}
	}
	int x, y;
	a.get(&x, &y);
	cout << "(" << x << "," << y << ")" << endl;
	return 0;
}
	
	return 0;
}