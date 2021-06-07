#include <iostream>

#include <string>

using namespace std;

class shop
{

    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{

    cout << "Enter the ID of Item : " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of the Item : " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of an item with ID is : " << itemprice[i] << " and  " << itemid[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    shop dukaan;
    dukaan.initCounter();
    int j = 0;
    while (j <= 5)
    {
        dukaan.setprice();
        j++;
    }

    dukaan.displayprice();

    return 0;
}
