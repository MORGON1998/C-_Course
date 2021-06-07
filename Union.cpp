#include<iostream>

using namespace std;

typedef union Money
{
    int dolor;
    int uro;
    int rupee;

}ep;

int main(int argc, char const *argv[])
{
    ep curncy;

    curncy.dolor = 78;
    curncy.rupee = 1;
    curncy.uro = 89;

    cout<<curncy.dolor<<endl;
    cout<<curncy.uro<<endl;
    cout<<curncy.rupee<<endl; 


    return 0;
}
