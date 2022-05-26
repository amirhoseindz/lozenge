#include <iostream>
#include "../include/Lozenge.h"
using namespace std;
int main()
{
    Lozenge lozenge;
    cout << "In order to make our lozenge we need our diagonals\n please first enter a even number as the diagonal : " << endl;
    cin >> lozenge.Diagonal;
    cout << "your lozenge  : " << endl;
    lozenge.MakeLozengeScheme();
}