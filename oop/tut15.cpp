#include<iostream>
#include<string>
using namespace std;
class Parent{
	public :
	 void getinfo(){
	 	cout<<"parrent class\n";
	 }
	  virtual void hello(){
	 	cout<<"hello from parent\n";
	 }
};
class Child:public Parent{
	public :
	 void getinfo(){
	 	cout<<"Child class\n";
	 }
	 void hello(){
	 	cout<<"hello from child\n";
	 }
};
int main(){
	//Parent p;
	Child p1; //when you make obj of child class child class fun will override paraent class fun 
	//p.getinfo();
	p1.hello(); // it is called override which is run time polymorphism
	return 0;
} 