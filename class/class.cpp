
#include<iostream>
#include "car.h"
#include "car.cpp"
using namespace std;
int main(){
	car car;
	car.fillfuel(6);
	car.Accelerete();
	car.Accelerete();
	car.Accelerete();
	car.Accelerete();
	car.Accelerete();
	car.Addpassen(6);
	car.Dashboard();
return 0;
}
