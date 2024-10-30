#include<iostream>
#include<string>
using namespace std;

/*----abstract class------*/
class Shape{
	virtual void draw()=0;  //pure virtual class i.i. class makes abstract class
};

class Circle:public Shape{
	public :
	void draw(){
		cout<<"drawing a circle \n";
	}

};

int main(){
	Circle c1;
	c1.draw();

	return 0;
}                                                                                                                                   