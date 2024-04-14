#include "Employee.h"

using namespace std;
//代入演算子オーバーロード
Employee &Employee::operator=(Employee &obj) {
	this ->number = obj.number;
	this->salary = obj.salary;
	this->name = obj.name;
	return *this;
}

//比較演算子のオーバーロード
bool Employee::operator>=(Employee obj) {
	if (this->salary > obj.salary) {
		return true;
	}
	else {	
		return false;
	}
}

bool Employee::operator>(Employee obj) {
	cout << "演算子のオーバーロードです" << endl;
	printf("&tanaka.number=%p\n", &(obj.number));
	printf("&someone.number=%p\n", &this->number);

	if (this->number > obj.number) {
		return true;
	}
	else {
		return false;
	}
}

Employee::~Employee() {
	cout << "ですトラクタです" << endl;
}

const char* Employee::getName() {
	return name;
}
//コンストラクタ
Employee::Employee(int number,int salary,const char* name) {
	this->number = number;
	this->salary = salary;
	this->name = name;
}

Employee::Employee() {
	cout << "こンストラクタ" << endl;
}

void Employee::showData() {
	cout << this->number << endl;
	cout << this->salary << endl;
	cout << this->name << endl;
}