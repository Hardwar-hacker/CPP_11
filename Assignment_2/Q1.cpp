#include<iostream>
#include"../Assignment_1/header.h"

void Add(int a,int b,int &result){
	result=a+b;
}

int main(){
	int a,b,result;
	cin>>a>>b;
	Add(a,b,result);
	cout<<"result is "<<result<<endl;  
return 0;
}
