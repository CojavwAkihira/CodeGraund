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


nt main(void){
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
