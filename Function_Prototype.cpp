#include<iostream>

using namespace std;

int sum( int a , int b ){
    int c = a + b;
    return c ;
}

int main(int argc, char const *argv[])
{   
    int num1 , num2;
    cout<<"Enter your first Number : "<<endl;
    cin>>num1;
    
    cout<<"Enter your first Numer : "<<endl;
    cin>>num2;

    cout<<"The sum is : "<<sum(num1 , num2)<<endl;



    return 0; 
}