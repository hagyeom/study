/* ��ǰ C++ ���α׷��� 3�� �ǽ����� 2�� */
#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int y, int m, int d);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
// <string> ��� ������ stoi() �Լ��� �̿��ϸ� string�� ���ڿ��� ���ڷ� ��ȯ�� �� �ִ�.
// string substr (size_t pos = 0, size_t len = npos) const; : ���ڿ��� �Ϻθ� ������.
Date::Date(string date) {
	year = stoi(date);
	month = stoi(date.substr(5, 6));
	day = stoi(date.substr(7, 9));
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
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}