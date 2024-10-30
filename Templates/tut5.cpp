#include<iostream>
using namespace std;

template<class T>
class Akshata{
	public :
	T data;
	Akshata(T a){
		data=a;
	}
	void display(){
		cout<<data;
	}

};
int main(){
	Akshata<float> a(6.7);
	a.display();

	return 0;
}