#include<iostream>
using namespace std;
//class templates with multiple parameters

template<class T1=int,class T2=float>  //default datatype.....
class Akshata{
   public:
        T1 a;
        T2 b;
        Akshata (T1 x,T2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"a "<<a<<" "<<"b "<<b<<endl;
        }
    
};
int main(){
    Akshata<>obj(1,1.6); //it take default
    
    Akshata<float,char>obj2(3.2,'t');//we own datatype
    obj.display();
    obj2.display();
  return 0;  
}