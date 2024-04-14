#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Employee {
public:
	int number;
	const char* name;
	int salary;
	//代入演算子のオーバーロード
	Employee &operator=(Employee &obj);
	//比較演算子のオーバーロード
	bool operator>=(Employee obj);
	bool operator>(Employee obj);
	//コンストラクタ
	Employee();
	Employee(int number, int salary,const char* name);
	//デストラクタ
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


