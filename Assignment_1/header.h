#include<iostream>
using namespace std;

int Add(int *a,int *b){
	return *(a)+*(b);
}

void AddVal(int *a,int *b,int *result){
	*result=*a+*b;	
}
void Swap(int *a,int *b){
	int temp =*(a);
	*(a)=*(b);
	*(b)=temp;
}

void Factorial(int *a,int *result){
	if(*a==0||*a==1)
		*result=1;
	int temp =*(a);
	while(temp>1)
	*result *=temp--;
}
