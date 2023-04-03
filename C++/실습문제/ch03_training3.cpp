#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance; // 잔액
public:
	Account(string name, int id, int balance); // 생성자
	string getOwner();
	int deposit(int money); // 저금
	int withdraw(int money); // 출금
	int inquiry(); // 조회
};

Account::Account(string name, int id, int balance) {
	this->name = name; this->id = id; this->balance = balance;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int money) {
	balance += money;
	return balance;
}

int Account::withdraw(int money) {
	balance -= money;
	return balance;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
