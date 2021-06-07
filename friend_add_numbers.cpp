#include<iostream>

using namespace std;

class internal{

  int a;
  int b;
  
  public:

    void setandconvert(int n , int m  ){

       a = n;
       b = m;

    }
    void printf(){
       cout<<"your numbers is "<<a<<"and"<<b<<endl;

    }



};
class internal c1 , c2;
   
int main(int argc, char const *argv[])
{   
    c1.setandconvert(1 , 4);
    c2.setandconvert(5 , 6);
    c1.printf();
    c2.printf();
    
    
    return 0;
}
