#include<iostream>
using namespace std;

class complex{
	int real,imag;
	public:
	void input(){
		cout<<"enter img part :";
		cin>>imag;
		cout<<"enter real part :";
		cin>>real;
	}
	complex operator +(complex obj){
	
		complex temp;
		temp.real=real+obj.real;

		temp.imag=imag+obj.imag;
		return temp;
	}

	void output(){
		cout<<"output is "<<real<<"+"<<imag<<"i";
	
	}
};
int main(){
	complex com1,com2,res;
	cout<<"enter first complex num \n";
	com1.input();
	cout<<"enter 2nd complex num\n";
	com2.input();

	res=com1+com2;
	res.output();
return 0;
}
