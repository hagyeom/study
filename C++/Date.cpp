/* 명품 C++ 프로그래밍 3장 실습문제 2번 */
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
// <string> 헤더 파일의 stoi() 함수를 이용하면 string의 문자열을 숫자로 변환할 수 있다.
// string substr (size_t pos = 0, size_t len = npos) const; : 문자열의 일부를 추출함.
Date::Date(string date) {
	year = stoi(date);
	month = stoi(date.substr(5, 6));
	day = stoi(date.substr(7, 9));
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
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
