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
        
         char arr1[100];
        ifstream obj("xyz.txt");
        obj.getline(arr1,100);
        cout<<"arr content : "<<arr1;
        cout<<"file "<<endl;
        obj.close();
         cout<<"file Read operation perform succesfully!!\n";
   
	return 0;
}