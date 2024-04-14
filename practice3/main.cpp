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
	//‘ã“ü‰‰ŽZŽq
	
	Employee tanaka(3, 1000, "“c’†");
	Employee someone(1,2000,"‚ ‚¢‚¤‚¦‚¨");
	tanaka.showData();
	someone.showData();
	printf("&tanaka.number=%p\n", &tanaka.number);
	printf("&someone.number=%p\n", &someone.number);

	/*
	if (someone >= tanaka) {
		cout << someone.getName() << "‚Ì•û‚ª‹‹—¿‚ª‚‚¢" << endl;
	}
	else {
		cout << tanaka.getName() << "‚Ì•û‚ª‹‹—¿‚ª‚‚¢" << endl;
	}*/

	if (someone > tanaka) {
		cout << someone.getName() << "‚Ì•û‚ªnumber‚ª‚‚¢" << endl;
	}
	else {
		cout << tanaka.getName() << "‚Ì•û‚ªnumber‚ª‚‚¢" << endl;
	}
	

	return 0;
}