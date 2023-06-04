#include <iostream>
#include<cmath>
using namespace std;

void prebroji(int , int &, int &);

void prebroji(int broj, int &sumaP, int &sumaN)
{
    while(broj!=0)
    {
        int zn;
        zn = broj % 10;
        broj /= 10;
        sumaP += (!(zn & 1))*zn;
        sumaN += (zn & 1)*zn ;
    }
}

int main(void)
{
    int x;
    int sp(0), sn(0);
    //cout << "x = ";
    cin >> x;
    prebroji(x, sp, sn);
    cout << "suma parnih = " << sp << endl;
    cout << "suma neparnih = " << sn << endl;

    return 0;

}
