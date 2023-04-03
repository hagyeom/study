#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
	string s;
public:
	Date(int year, int month, int day);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int year, int month, int day) {
	this->year = year; this->month = month; this->day = day;
}

Date::Date(string s) {
	int slash;
	this->year = stoi(s);
	slash = s.find('/'); // find()는 문자열에서 특정 문자나 문자열을 발견하면 첫 번째 인덱스를 리턴
	this->month = stoi(s.substr(slash + 1)); 
	slash = s.find('/', slash + 1);
	this->day = stoi(s.substr(slash + 1));
}

void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
