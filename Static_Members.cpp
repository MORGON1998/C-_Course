#include <iostream>

#include <string>

using namespace std;

class Employee
{

    int ID;
    static int count;

public:
    void setvalue()
    {
        cout << "Enter the ID of Employee :  " << endl;
        cin >> ID;
        count++;
    }

    void getvalue()
    {
        cout << "The Employee ID is :" << ID << " and the employee number is :" << count << endl;
    }
    static void getcount(void)
    {

        cout << "The value of count is :" << count << endl;
    }
};

int Employee ::count;

int main(int argc, char const *argv[])
{
    Employee MORGON, VIVA, PROFESSOR;

    MORGON.setvalue();
    MORGON.getvalue();
    Employee ::getcount();

    
    VIVA.setvalue();
    VIVA.getvalue();
    Employee ::getcount();

    
    PROFESSOR.setvalue();
    PROFESSOR.getvalue();
    Employee ::getcount();

    return 0;
}
