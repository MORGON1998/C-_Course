#include<iostream>

using namespace std;


int factorial(int n){

if(n<=1){
    return 1;
}

return n * factorial(n-1);


}


int main(int argc, char const *argv[])
{   
    int n;


    cout<<"Enter the Number : "<<endl;
    cin>>n;

    cout<<"the factorial of "<<n<<"is : "<<factorial(n)<<endl;
    return 0;
}
