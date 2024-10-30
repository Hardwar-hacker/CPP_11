#include<iostream>
#include"Integer.h"
#include"Integer.cpp"
using namespace std;

void display(Integer *p){
	if(!p){

		return;
	}
	std::cout<<p->GetValue()<<std::endl;
}

Integer *Getpointer(int value){           //factory fun create instance of class
	Integer *p=new Integer{value};
	return p;
}
void operate(int value){  
	Integer *p=Getpointer(4);
	if(p==nullptr){
		p = new Integer{4};
	}
	p->SetValue(100);
	display(p);
	delete p;
	//p=nullptr;
	p=new Integer{};
	*p=__LINE__ ;  //store current line number in object
	display(p);
	delete p;
	p=nullptr;
}
int main(){
	operate(5);
//	return 0;
}

//output of this code 
/*Integer(int)
100
~Integer()
Integer()
Integer(int)
~Integer()
0
~Integer()
free(): double free detected in tcache 2*/