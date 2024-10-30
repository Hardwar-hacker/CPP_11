#include<iostream>
#include<string>
using namespace std;
class person{
public :
	string name ;
	int age ;

/*--------parameterized constructor----------*/

	person(string name,int age){
			cout<<"paraent class constructor\n";
		this->name=name;
		this->age=age;
	}
	~person(){
		cout<<"person class des \n";       
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
		cout<<"student class constructor\n";
	}
	void getinfo(){
			//code reusability
		cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll_no :"<<roll_no<<endl;
	}
	~student(){
		cout<<"child class des \n";
	}

};

class gradstudent :public student{
public:
	string research_area;
	gradstudent(string name,int age,int roll_no,string research_area):student( name, age,roll_no){
		this->research_area=research_area;
		cout<<"gradstudent class constructor\n";
	}
	void getgraninfo(){
		getinfo();
			//code reusability
		cout<<"research_area : "<<research_area<<endl;
	}
	~gradstudent(){
		cout<<"gradstudent class des \n";
	}

};

int main(){
	gradstudent g1("akshat",22 ,7,"quantum");
	//parent p1("akshat",22);
//	student s1("akshat",22 ,7);
	/*g1.name="tony stark";
	g1.research_area ="quantum";*/
	g1.getgraninfo();

return 0;
}
