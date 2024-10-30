#include<iostream>
#include<string>
using namespace std;

class Print{
public:
	//function oevrloding 
	void show(int x){
		cout<<"int :"<<x<<endl;
	}
	void show(char x){
		cout<<"char :"<<x<<endl;
	}
	//oprator overloading
	
};
int main(){
	Print p1;
	p1.show(32);

	return 0;
}