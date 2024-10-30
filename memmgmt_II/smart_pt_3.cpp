#include<iostream>
using namespace std;


class myint{
	int *data;
	public:
		explicit myint(int *p=nullptr){data=p;}
		~myint(){delete data;}
		int& operator *(){return *data;}
};

int main(){

	int *p=new int(10);
	myint myi = myint(p);
	cout<<*myi<<endl;
	return 0;
}