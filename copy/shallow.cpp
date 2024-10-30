#include<include.h>
#include<iostream>
using namespace std;

int main(){
	int *p=new int(0);

	// shallow copy :where only address are copy
	int *p1=p;

	//deep copy :we caopy direct value at address rather than address
	int *p2=new int(*P);
	Integer i(5);
	Integer i2(i); 
return 0;
}
