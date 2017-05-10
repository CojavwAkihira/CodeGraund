#include <iostream>

using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day){
		if(set(year, month, day) == 1){
			year = 0;
			month = 0;
			day = 0;
		}
	}

	int set(int year, int month, int day){
		this->year = year;
		if(0 < month && month < 13){
			this->month = month;
			if(month == 4 || month == 6 || month == 9 || month == 11){
				if(0 < day && day < 31){
					this->day = day;
					return 0;
				}else if(month == 2){
					if(0 < day && day < 29){
						this->day = day;
						return 0;
					}
				}else if(0 < day && day < 32){
					this->day = day;
					return 0;
				}
			}
		}
		return 1;
	}

	void get(int* year, int* month, int* day){
		*year = this->year;
		*month = this->month;
		*day = this->day;
	}

	void next(void){
		if(month == 12 && day == 31){
			year++;
			month = 1;
			day = 1;
			return;
		}
		if(month == 4 || month == 6 || month == 9 || month == 11){
			if(day == 30){
				month++;
				day = 1;
				return;
			}
		}else if(month == 2){
			if(day == 28){
				month++;
				day = 1;
				return;
			}
		}else if(day == 31){
			month++;
			day = 1;
			return;
		}
		day++;
	}
};

int main(void) {
	int yy, mm, dd, y, m, d;
	cin >> yy >> mm >> dd;
	Date d1(yy, mm, dd);
	d1.get(y, m, d);
	if (y != 0 && m != 0 && d != 0) {
		cout << yy << "�N" << mm << "��" << dd << "�����ݒ肳��܂���" << endl;
		d1.next();
		d1.get(yy, mm, dd);
		cout << "���̓���" << yy << "�N" << mm << "��" << dd << "���ł�" << endl;
	}else{
		cout << "�������ݒ肳��Ă��܂���" << endl;
	}
	return 0;
}