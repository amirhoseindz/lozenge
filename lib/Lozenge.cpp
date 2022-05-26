#include "../include/Lozenge.h"
#include <iostream>
using namespace std;
Lozenge :: Lozenge (int diagonal)
{
    Diagonal = diagonal;
}
void Lozenge :: MakeTopHalfLozengeScheme() const
{
    for (int i = 0; i < Diagonal / 2; i++)
    {
        for (int j = 0; j <= Diagonal; j++)
        {
            if ((Diagonal % 2 == 0)) {
                if ((j == (Diagonal / 2) + i) || (j == (Diagonal / 2) - i))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void Lozenge :: MakeBotHalfLozengeScheme() const
{
    for (int i = Diagonal / 2 ; i >= 0  ; i--)
    {
        for(int j = 0; j <= Diagonal; j++)
        {
            if ((Diagonal % 2 == 0))
            {
                if (( j == (Diagonal / 2) + i ) || ( j == (Diagonal / 2) - i))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void Lozenge :: MakeLozengeScheme() const
{
    MakeTopHalfLozengeScheme();
    MakeBotHalfLozengeScheme();
}