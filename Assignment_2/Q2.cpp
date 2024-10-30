#include<iostream>
using namespace std;

void Factorial(int a, int &result){
	if(a<=1){
	result = 1;
	}
	while(a>1)
		result *= a--;

}

int main(){
	int a,res=1;
	cin>>a;
	Factorial(a,res);
	cout<<"The factorial of "<<a<<" is "<<res<<endl;
	return 0;
}
