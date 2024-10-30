#include<iostream>
using namespace std;
#include<string>

class student{
	public :
		string name;
		//double cgpa;  // it staticaly allocated no problem for shallow copy
		double cgpaptr; 

		student(string name,double cgpa){
			cout<<"i am parameterized constructor\n";
			this->name=name;
			// this->cgpa=cgpa;
		//	cgpaptr = new double;
			cgpaptr = cgpa; // now in heap
		}

		//shallow copy constructor which is default constructor here just pass we memory 
		student (student &orgobj){
			this->name=orgobj.name;
                        (cgpaptr)=orgobj.cgpaptr;
		
		}

		// in deep copy we need to create own copy constructor here we create copy of dynamic memory 
		


		void getinfo(){
		//	cout<<name<<endl<<cgpa<<endl;
		 cout<<name<<endl<<cgpaptr<<endl;
		}

};


int main(){
	student s1("akshata",8.5);

	student s2(s1);
	s1.getinfo();
	(s2.cgpaptr)=9.2;//it will chane both object cgpa due to shallow copy
	s2.getinfo();
	s1.getinfo();
	return 0;

}
