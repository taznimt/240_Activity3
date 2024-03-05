// program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int bilangan;
    srand(time(0));
    bilangan = rand() % 10;

    cout << "Nilai awal : " << bilangan << endl;

    if (bilangan < 5)
    {
        cout << "Bilangan kurang dari 5";
        return 0;
    }

    bilangan = 2 * bilangan;

    cout << "Nilai sekarang = " << bilangan << endl;
}
    



