#include<iostream>

using namespace std;

class complex{

int a , b;

void setnumbers(int n1 , int n2){
    n1 = a;
    n2 = b;
}
void getnumbers(){
    cout<<"The Numbers are : "<<a<<" and "<<b<<endl;
}

};

class calculator {

int  sumofnumbers(complex o1 , complex o2){
        return (o1.a + o2.a)
}


};

int main(int argc, char const *argv[])
{
    complex o1 , o2;
    o1.setnumbers(1 , 4);
    o2.setnumbers(5 , 3);
    calculator calc;
    int res = calc.sumofnumbers(o1 , o2);
    cout<<"The sum of o1 and o2 is : "<<res<<endl;
    int res = calc.sumofnumbers(o1 , o2);
    cout<<"The sum of o1 and o2 is : "<<res<<endl;

    return 0;
}
