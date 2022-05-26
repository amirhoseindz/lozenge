#include "../include/Lozenge.h"
#include <iostream>
using namespace std;
void Lozenge :: MakeLozengeScheme() const
{
    for (int i = 0; i < Diagonal / 2 ; i++)
    {
        for(int j = 0; j <= Diagonal; j++)
        {
            if ((Diagonal % 2 == 0))
            {
                if (( j == (Diagonal / 2) + i ) || ( j == (Diagonal / 2) - i))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = Diagonal / 2 ; i >= 0  ; i--)
    {
        for(int j = 0; j <= Diagonal; j++)
        {
            if ((Diagonal % 2 == 0))
            {
                if (( j == (Diagonal / 2) + i ) || ( j == (Diagonal / 2) - i))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}