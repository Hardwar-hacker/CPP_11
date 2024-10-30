#include<iostream>
#include"header.h"

using namespace std;

int main(){
	int a,result=1;
	cin>>a;
	Factorial(&a,&result);
	cout<<"factorial of "<<a<<"is "<<result;

return 0;
}
