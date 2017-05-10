#include <iostream>

using namespace std;

/*
*	testcase
*	7 7 10	 	//if (a.isOverlap(b))
*	17 17 10	//if (b.isOverlap(c))
*	0 0 10		//if (a.isOverlapR(b))
*	5 5 8
*	-10 -10 20
*/

class Kukei{
protected:
	double x;
	double y;
	double w;
public:
	Kukei(){
		x = 0;
		y = 0;
		w = 10;
	}
	Kukei(double x, double y, double w){
		this->x = x;
		this->y = y;
		this->w = w;
	}
	bool isOverlapR(Kukei k){
		double diffx, diffy;
		diffx = (x + w / 2) - (k.x + k.w / 2);
		diffy = (y + w / 2) - (k.y + k.w / 2);
		if(diffx < 0) diffx *= -1;
		if(diffy < 0) diffy *= -1;

		if(w / 2 + k.w / 2 > diffx || w / 2 + k.w / 2 > diffy)
			return true;
		return false;
	}
	bool isOverlap(Kukei k){
		if(x <= k.x && x + w >= k.x && y <= k.y && y + w >= k.y )
			return true;
		if(x <= k.x + k.w && x + w >= k.x + k.w && y <= k.y && y + w >= k.y )
			return true;
		if(x <= k.x && x + w >= k.x && y <= k.y + k.w && y + w >= k.y + k.w )
			return true;
		if(x <= k.x + k.w && x + w >= k.x + k.w && y <= k.y + k.w && y + w >= k.y + k.w )
			return true;

		if(k.x <= x && k.x + k.w >= x && k.y <= y && k.y + k.w >= y )
			return true;
		if(k.x <= x + w && k.x + k.w >= x + w && k.y <= y && k.y + k.w >= y )
			return true;
		if(k.x <= x && k.x + k.w >= x && k.y <= y + w && k.y + k.w >= y + w )
			return true;
		if(k.x <= x + w && k.x + k.w >= x + w && k.y <= y + w && k.y + k.w >= y + w )
			return true;
			
		return false;
	}
};
		
	

int main(void){
	Kukei a;

	double x, y, w;

	cin >> x >> y >> w;
	Kukei b(x, y, w);

	cin >> x >> y >> w;
	Kukei c(x, y, w);

	if (a.isOverlap(b)) {
	cout << "aとbは矩形が接しています" << endl;
	}

	if (b.isOverlap(c)) {
	cout << "bとcは矩形が接しています" << endl;
	}

	if (c.isOverlap(a)) {
	cout << "cとaは矩形が接しています" << endl;
	}

	if (a.isOverlapR(b)) {
	cout << "aとbは内接円が接しています" << endl;
	}

	if (b.isOverlapR(c)) {
	cout << "bとcは内接円が接しています" << endl;
	}

	if (c.isOverlapR(a)) {
	cout << "cとaは内接円が接しています" << endl;
	}

	return 0;
}
