#include<iostream>
#include <limits>
using namespace std;


int main(){
   
   int numerator ,denominator;
   cout<<"enter numerator and denominator :"<<endl;
  
   
   try{
        while(1){
               cin>> numerator>>denominator;
               
                if(denominator ==0){
               throw denominator;
           }
     
        cout<<"Division is : "<<numerator/denominator<<endl;
       }
   }
   catch (int &ex ){
            cout<<"Division by zero is not allowed"<<endl;
   }
 
	return 0;
}