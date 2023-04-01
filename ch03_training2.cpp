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
	slash = s.find('/'); // find()�� ���ڿ����� Ư�� ���ڳ� ���ڿ��� �߰��ϸ� ù ��° �ε����� ����
	this->month = stoi(s.substr(slash + 1)); 
	slash = s.find('/', slash + 1);
	this->day = stoi(s.substr(slash + 1));
}

void Date::show() {
	cout << year << "��" << month << "��" << day << "��" << endl;
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