#include "Employee.h"

using namespace std;
//������Z�q�I�[�o�[���[�h
Employee &Employee::operator=(Employee &obj) {
	this ->number = obj.number;
	this->salary = obj.salary;
	this->name = obj.name;
	return *this;
}

//��r���Z�q�̃I�[�o�[���[�h
bool Employee::operator>=(Employee obj) {
	if (this->salary > obj.salary) {
		return true;
	}
	else {	
		return false;
	}
}

bool Employee::operator>(Employee obj) {
	cout << "���Z�q�̃I�[�o�[���[�h�ł�" << endl;
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
	cout << "�ł��g���N�^�ł�" << endl;
}

const char* Employee::getName() {
	return name;
}
//�R���X�g���N�^
Employee::Employee(int number,int salary,const char* name) {
	this->number = number;
	this->salary = salary;
	this->name = name;
}

Employee::Employee() {
	cout << "�����X�g���N�^" << endl;
}

void Employee::showData() {
	cout << this->number << endl;
	cout << this->salary << endl;
	cout << this->name << endl;
}