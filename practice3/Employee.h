#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Employee {
public:
	int number;
	const char* name;
	int salary;
	//������Z�q�̃I�[�o�[���[�h
	Employee &operator=(Employee &obj);
	//��r���Z�q�̃I�[�o�[���[�h
	bool operator>=(Employee obj);
	bool operator>(Employee obj);
	//�R���X�g���N�^
	Employee();
	Employee(int number, int salary,const char* name);
	//�f�X�g���N�^
	~Employee();
	void showData();
	const char* getName();
};

template <class T,class M,class I,class E> class aaa {
public:
	T bbb = 0;
	M ccc = 0;
	I ddd = 0;
	E eee = 0;
};


