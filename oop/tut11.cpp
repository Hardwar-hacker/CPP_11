#include<iostream>
#include<string>
using namespace std;

/*-----------student -----------------*/
class student {
	//age name rooll no
	public :
	string name;
	int age;
	int roll_no;

//in parameterized construtor we need to impilicit call in student derived class
	/*student(string name,int age,int roll_no){
		this->roll_no=roll_no;
		cout<<"student class constructor\n";
	}*/
	void getinfo(){
			//code reusability
		cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll_no :"<<roll_no<<endl;
	}
	~student(){
		cout<<"child class des \n";
	}

};

/*-----------Teacher -----------------*/
class Teacher{
public:
 string subject;
double salary;

};
class TA :public student,public Teacher{

};

int main(){
	TA T1;
	T1.name="akshat";
	T1.age=22;
	T1.roll_no=12;
	T1.getinfo();

return 0;
}
