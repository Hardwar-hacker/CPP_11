
#include<iostream>
#include<string>
using namespace std;

/*-------------without this-------------------------
 *
 * class Teacher{
	//properties 
	public:
		string name;
	string dept;
	string subject;
	double salary;

public:
	Teacher(){
		cout<<"I am default\n";
	}
	Teacher(string n,string d,string s ,double sal){
		name=n;
		dept=d;
		subject =s;
		salary=sal;
		cout<<"hi ,constructor here!!\n";
	}
		void changeDept(string newDept){
			dept=newDept;
		}
		void getinfo(){
			       cout<<name<<endl<<dept<<endl<<subject<<endl<<salary<<endl;
		}

};
*/

/*-----------------This pointer-----------------*/

class Teacher{
        //properties
        public:
                string name;
        string dept;
        string subject;
        double salary;

public:
        Teacher(){
                cout<<"I am default\n";
        }
        Teacher(string name,string dept,string subject ,double salary){
               this->name=name;    //lest is object property na d right is constructor parameter
               this->dept=dept;
                this->subject =subject;
                this->salary=salary;
                cout<<"hi ,constructor here!!\n";
        }
	//copy constructor  with shallow copy which give problems during dynamic allocation 
/*	Teacher(Teacher &orgobj){
		cout<<"i am custom copy constructor \n";
		this->name = orgobj.name;
		this->dept=orgobj.dept;
		this->subject=orgobj.subject;
		this->salary=orgobj.salary;
	}*/    

	void changeDept(string newDept){
                        dept=newDept;
                }
                void getinfo(){
                               cout<<name<<endl<<dept<<endl<<subject<<endl<<salary<<endl;
                }

};


/*----------EnCapsulation---------------------*/

class account{
	//data hiding
	double balance;
	string password;
	public:
	       string accountId;
	       string username;

};

int main(){
	Teacher t1("Akshata","Electrical","M-III",50000);
        Teacher t2;
	Teacher t3(t1);  //default copy constructor

	// Introduction of OOPS, Class & Object ,Access Specifier ,Encapsulation ,Constructor , Inheritance, Mode of Inheritance, Types of Inheritance, Polymorphism, Function Overloading ,Function Overriding ,Virtual Function  ,Abstraction ,Abstract Classt1.chandDept();

//	cin>>t1.name;
	t3.getinfo();
//	t1.getinfo();
	return 0;
}
