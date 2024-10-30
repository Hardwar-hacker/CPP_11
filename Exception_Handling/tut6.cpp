#include<iostream>
#include <fstream>
#include <memory> //for smart pointer 
using namespace std;

class test{
   public :
      test(){
         cout<<"allocate resource\n";
      }
      ~test(){
         cout<<"deallocate resource\n";
      }

};
void process_record(int count){
   test t1;  //local object destroys stack succeful
   test *t2=new test;  //heap object : here the not delete happens and 
                        // memory is leaked ...
                        //we resolve this problem by smart pointer

   unique_ptr<test>t3(new test);  //now the hep memory bound with local object t3

   if (count<10){
      throw out_of_range("count is less than 10");
   }
   
   delete t2;
}
int main(){
   int count=3;
   try{
   process_record(count);
}
catch(exception &ex){
   cout<<ex.what()<<endl;
}
   
	return 0;
}