#include<iostream>
using namespace std;


class number{
	int a;
	public:
	number(int num)
	{
		a=num;
	}
	  number(number &num)
        {
		cout<<"copy constructor call \n";
                a=num.a;
        }

	void display(){
		cout<<"the num of obj is "<<a<<endl;
	}
};
int main(){
	number num(10);
	num.display();
	number z1(num);
	z1.display();
	return 0;
}
