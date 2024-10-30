#include<iostream>
#include <fstream>
using namespace std;


int main(){
   char arr[100];
   cout<<"Enter your name and age :";
   
   cin.getline(arr,100);     //entire line as a input
   
   ofstream myfile ("xyz.txt");  //create file and open and write 
   
   
  // if(myfile.is_open())     //to check file is open
  
       // myfile.open("xyz.txt") ;    //we can explicitly open this file   //no need
        
        myfile<<arr; //<< insertion operator
        
        myfile.close();
        cout<<"file write operation perform succesfully!!\n";
   
	return 0;
}