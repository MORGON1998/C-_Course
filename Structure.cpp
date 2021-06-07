#include<iostream>

using namespace std;

  typedef struct employ
    {
        int eid ;
        char favchar;
        float salory;

    } ep ;

int main(int argc, char const *argv[])
{
  
  struct employ Morgon;
  
  Morgon.eid = 07;
  Morgon.favchar = 'I';
  Morgon.salory = 99999;

    cout<<Morgon.eid<<endl;
    cout<<Morgon.favchar<<endl;
    cout<<Morgon.salory<<endl;

  ep Manish;
  Manish.eid = 0007;
  Manish.favchar = 'R';
  Manish.salory = 909090;

  cout<<Manish.eid<<endl;
  cout<<Manish.favchar<<endl;
  cout<<Manish.salory<<endl;

  


    return 0;
}
