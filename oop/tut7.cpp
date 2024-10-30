#include<iostream>
#include<string>
using namespace std;
class person{
public :
	string name ="akshata" ;
	int age =22;
/*
	person(string name,int age){
		this->name=name;
		this->age=age;
	}*/
	person(){}

};
/*-----------inherit studetn class by person class-----------------*/
class student:public person {
	//age name rooll no
	public :
	int roll_no =17;

	void getinfo(){
			//code reusability
		cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll_no :"<<roll_no<<endl;
	}

};

int main(){
	student s1;
	s1.getinfo();

return 0;
}
