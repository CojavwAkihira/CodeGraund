#include <iostream>

using namespace std;

struct date{
	int year;
	int month;
	int day;
};

void set1(struct date p, int year, int month, int day){
	p.year = year;
	p.month = month;
	p.day = day;
}

void set2(struct date *p, int year, int month, int day){
	p->year = year;
	p->month = month;
	p->day = day;
}

void set3(struct date &p, int year, int month, int day){
	p.year = year;
	p.month = month;
	p.day = day;
}

void print(struct date a){
	cout << a.year << "/" << a.month << "/" << a.day << endl;
}

int main(void){
	struct date a;
	set2(&a, 2012, 5, 10);
	print(a);
	set3(a, 2013, 6, 11);
	print(a);
	set1(a, 2014, 7, 12);
	print(a);
	return 0;
}
