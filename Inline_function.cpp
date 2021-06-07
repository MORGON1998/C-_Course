#include<iostream>

using namespace std;

inline int product(int a , int b){ //inline function reduce the cost of compilation and running of the program.......

    int c = a*b;
    return c;
}

int main(int argc, char const *argv[])
{
    int x= 15 ,  y = 10;

    cout<<"the product of a and b is : "<<product(x,y)<<endl;

    return 0;
}
