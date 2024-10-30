//oops
//try to bug free programming 
//class: data + function , internally typedef , protect from override

//c++: c with classes by stroustroup


//in class only public function can call private data and function

				

#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	void chk_bin(void);
	public:
		void read(void);	
		void ones();
		void display();

};

void binary ::read(void){
	cout<<"enter a vbinary number "<<endl;
	cin>>s;
}

void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
    (s.at(i) != '0' && s.at(i) != '1') ? (cout << "not binary number" << endl, exit(0)) : void();
	}
}
void binary ::ones(){
	chk_bin();
	for(int i=0;i<s.length();i++){
		s.at(i)=s.at(i)=='0'?'1':'0';
	}
	cout<<s<<endl;
}
void binary ::display(){
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
	cout<<endl;
}
	
int main(){
	binary b;

	//nest of member function 
	b.read();
	//b.chk_bin();
	b.ones();
	b.display();

	return 0;
}