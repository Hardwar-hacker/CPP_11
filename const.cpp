#include<iostream>
using namespace std;

void print(const int *  x){
	*x=100;
}

int main(){
const int CHUNK_SIZE=512;

const int * const ptr=&CHUNK_SIZE;
int x=10;
print(&x);
//ptr=&x;
}
