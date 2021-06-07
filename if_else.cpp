#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age ;

    cout<<"Enter Your age buddy : "<<endl;
    cin>>age;

    if (age >= 18)
    {
        cout<<" Welcome , Enjoy the party";
    }
    else{
        cout<<"Sorry , buddy you are bellow then 18 \n";
    }

    if(age >= 18)
    return 0;
}
