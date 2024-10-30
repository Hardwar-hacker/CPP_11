#include<iostream>
#include"header.h"
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	
	int res=Add(&a,&b);
	cout<<"result is "<<res;

return  0;
}
