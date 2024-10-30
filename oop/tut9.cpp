#include<iostream>
#include<string>
using namespace std;
class person{
public :
	string name ;
	int age ;

/*--------parameterized constructor----------*/

	person(string name,int age){
		this->name=name;
		this->age=age;
	}
	

};
/*-----------inherit studetn class by person class-----------------*/
class student:public person {
	//age name rooll no
	public :
	int roll_no;

//in parameterized construtor we need to impilicit call in student derived class
	student(string name,int age,int roll_no):person( name, age){
		this->roll_no=roll_no;
		cout<<"child class constructor\n";
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
	//parent p1("akshat",22);
	student s1("akshat",22 ,7);
	s1.getinfo();

return 0;
}
