#include<iostream>
using namespace std;
int main(){
	int a;//uninitialization
	int a1=12;//copy initialization
	int a2(5);//direct initialization

	string s1("abc");

	char c[8]={'a','b','c'};//aggregate initialization or copy init
	char c1[]={"abcd"};//copy init

	int b1{};  //initialize by zero ,called value initioalization
	int b2{5};//direct initialization
	int b3();  //it is function declaration

	char arr[8]{};//initialized by default value
	char arr1[8]{"hello"};

	int *p= new int{};  // heap initialization 
       char *p1= new char[8]{};
	char *p2=new char[8]{"hello"};       

return 0;
}
