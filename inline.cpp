#include<iostream>
using namespace std;


	inline int sq(int x){
	return x*x;
	}

//#define sq(x) x*x  it give 11 output

int main(){
	int x =5;
	int res = sq(x+1);
	cout<<res;

return 0;
}
