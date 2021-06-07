#include<iostream>

using namespace std;

int sum(int,int);
void g();


int main(int argc, char const *argv[])
{   
    int num1 , num2;

    cout<<"Enter the Number : "<<endl;
    cin>>num1;

    cout<<"Enter Your Second Number : "<<endl;
    cin>>num2;

    cout<<"the sum is : "<<sum(num1 , num2)<<endl;

    g();

    return 0;
}
    void g(){
        cout<<"Hello world"<<endl;
    }

    int sum(int a, int b ){

    int c = a + b;
    return c;
}
