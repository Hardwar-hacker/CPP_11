/*#include"Integer.h"
#include"Integer.cpp"
#include <memory>
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
void store(unique_ptr<Integer>p){
	cout<<"storing data into a file :"<<p->GetValue()<<endl;

}
void operate(int value){  

	/*-- unique ptr is a class template i.e.type required in that bracket,,it is explicit constructor so assingment not need assignment we directly init it.*/
/*	unique_ptr<Integer> p{Getpointer(4)};

	if(p==nullptr){
		//p = new Integer{4};
		p.reset(new Intyeger{value});
	}
	p->SetValue(100);
	display(p.get());
	//delete p;   because p is not ptr it is object
	//p=nullptr;      //delete and null
	

	//p=new Integer{};
	p.reset(new Intyeger{value}); //it does above 3 lines
	*p =__LINE__ ;  //store current line number in object
	display(p.get());
	store(move(p));
	*p=200;
	//delete p;
	//p=nullptr;
}


int main(){
	operate(5);
	return 0;
}*/
#include "Integer.h"  // Ensure Integer.h exists and is correct
#include "Integer.cpp"  // This should only include implementation details
#include <iostream>
#include <memory>  // Include <memory> to use std::unique_ptr

using namespace std;

void display(Integer *p) {
    if (!p) {
        return;
    }
    std::cout << p->GetValue() << std::endl;
}

Integer* Getpointer(int value) {  // Factory function to create an instance of Integer
    Integer* p = new Integer{value};
    return p;
}

void store(unique_ptr<Integer> p) {
    cout << "Storing data into a file: " << p->GetValue() << endl;
}

void operate(int value) {
    // Create a unique_ptr to manage the Integer object
    unique_ptr<Integer> p(Getpointer(4));

    // Check if the pointer is null (should not happen here)
    if (p == nullptr) {
        p.reset(new Integer{value});  // Use reset with a new object
    }

    // Modify the value and display it
    p->SetValue(100);
    display(p.get());  // Use get() to pass the raw pointer

    // Reset unique_ptr to manage a new Integer object
    p.reset(new Integer{value});
    *p = __LINE__;  // Store the current line number in the object
    display(p.get());

    // Transfer ownership of the unique_ptr to the store function
    store(move(p));  // After this, p becomes nullptr

    // Do not attempt to access p after it's moved
    // *p = 200;  // This line is removed because p is now nullptr
}

int main() {
    operate(5);
    return 0;
}

