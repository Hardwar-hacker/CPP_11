#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	       	string name;
		Student(){
			cout<<"non-parametrized constructor\n";
		}
		Student(string name){
			this->name=name;
			cout<<"parametrized constructor\n";
		}
};
int main(){
	Student s1;
	Student s2("akshata");
	cout<<"name : "<<s2.name<<endl;
return 0;
}
