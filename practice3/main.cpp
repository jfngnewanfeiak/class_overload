#include <iostream>
#include "Employee.h"
using namespace std;
int main(void) {
	/*aaa<int, int, char, char> obj;
	aaa<char,int,int,char> obj1;*/
	/* printf("obj.bbb=%d\n", sizeof(obj.bbb));
	printf("obj.ccc=%d\n", sizeof(obj.ccc));
	printf("obj.ddd=%d\n", sizeof(obj.ddd));
	printf("obj.eee=%d\n", sizeof(obj.eee));*/
	//printf("obj=%d\n", sizeof(obj));
	/*printf("obj1.bbb=%d\n", sizeof(obj1.bbb));
	printf("obj1.ccc=%d\n", sizeof(obj1.ccc));
	printf("obj1.ddd=%d\n", sizeof(obj1.ddd));
	printf("obj1.eee=%d\n", sizeof(obj1.eee));*/
	//printf("obj1=%d\n", sizeof(obj1));
	//代入演算子
	
	Employee tanaka(3, 1000, "田中");
	Employee someone(1,2000,"あいうえお");
	tanaka.showData();
	someone.showData();
	printf("&tanaka.number=%p\n", &tanaka.number);
	printf("&someone.number=%p\n", &someone.number);

	/*
	if (someone >= tanaka) {
		cout << someone.getName() << "の方が給料が高い" << endl;
	}
	else {
		cout << tanaka.getName() << "の方が給料が高い" << endl;
	}*/

	if (someone > tanaka) {
		cout << someone.getName() << "の方がnumberが高い" << endl;
	}
	else {
		cout << tanaka.getName() << "の方がnumberが高い" << endl;
	}
	

	return 0;
}