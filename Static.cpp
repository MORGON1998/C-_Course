#include<iostream>

using namespace std;

int product(int a , int b){
    static int c=0; // do not use inline function with static variable......
    c = c+1;
    return a*b + c;
}

int main(int argc, char const *argv[])
{   
    int a , b;

    cout<<"the value of a and b  : "<<endl;
    cin>>a>>b;

    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

    return 0;
}
