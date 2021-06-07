#include<iostream>

using namespace std;

class methods{
int a , b;

public:

friend methods sum(methods c1 , methods c2);
void first_set_method(int n1 , int n2){
    a = n1;
    b = n2;
}
void printnumber(){
    cout<<"the numbers are "<<a<<" + "<<b<<endl;
}

}; 
  methods sum(methods c1 , methods c2){
      methods c3;
      c3.first_set_method((c1.a + c2.a),(c1.b + c2.b));
      return c3;
  }

int main(int argc, char const *argv[])
{
    methods o1 , o2 , add;
    o1.first_set_method(1 , 4);
    o2.first_set_method(5 , 3);

    o1.printnumber();
    o2.printnumber();

    add = sum(o1 , o2);
    add.printnumber();
    
    
    return 0;
}
