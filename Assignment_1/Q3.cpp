#include<iostream>
#include"header.h"
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"a&b are "<<a<<b<<endl;
	Swap(&a,&b);
	cout<<"a&b are "<<a<<b<<endl;

return 0;
}
