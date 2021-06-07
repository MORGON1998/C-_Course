#include<iostream>

using namespace std;

// this will not doing swap....
// void swap (int  a , int  b){

//     int c = a;
//      a = b;
//      b = c ;

//     //return c;
// }


// this will do because this store the adresses.....using  pointer................

// void swap (int * a, int * b){
//     int c = *a;
//     * a = * b;
//     * b =   c;
// }

void swap(int &a , int &b){
    int c = a;
      a = b;
      b = c ;
      //return a;
}


int main(int argc, char const *argv[])
{   
    int x = 4 , y =7;

    //cout<<"the sum of 4 and 5 is : "<<sum(4,5)<<endl;
    cout<<" Before  The value of a is "<<x<<" and the value of b is "<<y<<""<<endl;
    swap(x,y);
    cout<<" after   The value of a is "<<x<<" and the value of b is "<<y<<""<<endl;
    
    return 0;
}
