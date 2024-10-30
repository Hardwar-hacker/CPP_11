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
	person(){
		cout<<"parent class \n";
	}
	~person(){
		cout<<"parent class dis \n";
	}

};
/*-----------inherit studetn class by person class-----------------*/
class student:public person {
	//age name rooll no
	public :
	int roll_no =17;
	student(){
		cout<<"child class \n";
	}
	void getinfo(){
			//code reusability
		cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll_no :"<<roll_no<<endl;
	}
	~student(){
		cout<<"child class des \n";
	}

};

int main(){
	student s1;
	s1.getinfo();

return 0;
}
