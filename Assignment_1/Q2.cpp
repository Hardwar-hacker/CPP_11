#include<iostream>
#include"header.h"
using namespace std;

int main(){
	int a,b,result;
	cin>>a>>b;
	AddVal(&a,&b,&result);
	cout<<a<<"+"<<b<<"="<<result;

return 0;
}
