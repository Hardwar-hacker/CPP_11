#include<iostream>
using namespace std;

template<class T>
class Akshata{
	public :
	T data;
	Akshata(T a){
		data=a;
	}
	void display();
};

//function out of class by scope resolution operator
template<class T>
void Akshata<T>::display(){
		cout<<data<<endl;
}

void func(int a){
    cout<<"I am 1st"<<endl;
}

template<class T>
void func(T a){
    cout<<"I am 2nd"<<endl;
}


int main(){
// 	Akshata<float> a(6.7);
// 	a.display();
	
	func(9);   //in both func exact match have highest priority

	return 0;
}