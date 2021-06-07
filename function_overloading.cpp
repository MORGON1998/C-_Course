#include<iostream>

using namespace std;

int add(int a , int b){
return a+b;
}

int add(int a , int b , int c ){
    return a + b + c;                      
}

int main(int argc, char const *argv[])
{
    cout<<"the sum of two numbers is : "<<add(6,9)<<endl;

    cout<<"the sum of three numbers is : "<<add(6,9,4)<<endl;

    return 0;
}
