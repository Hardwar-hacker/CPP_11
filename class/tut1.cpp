#include<iostream>

using namespace std;

/*class A {
	int a;
	public:
		void set(int a){
			this->a=a;//this is a keyword which is a pointer which points to the object which is invokes the mem functio 
			//we can return class variable or any object from member function 
		}
		void get(){
		cout<<"VALUE of a is :"<<a<<endl;
		}

};*/


class A {
	int a;
	public :
	int b;
	A &set(int a){     //by this set fun makes now object of class A
		this->a=a;
		return *this;
	}
	  void get(){
                cout<<"VALUE of a is :"<<a<<endl;
                }
};

int A::b=5;
int main(){
A a;
//a.set(4);
//a.get();
a.set(4).get();
cout<<A::b<<endl;
return 0;
}
