#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;

    cout<<"Please Enter your age :  "<<endl;
    cin>>age;


    switch(age)
    {
        case 1: age > 18;
            cout<<"your age is more than 18 "<<endl;
            break;
        
        case 2: age < 18;
        cout<<"your age is below than 18"<<endl;
        break;

        default :
        cout<<"No more cases";
        
        }
    
    return 0;
    
}

