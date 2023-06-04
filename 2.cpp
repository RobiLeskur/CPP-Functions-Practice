#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

void racunanjeK(int, int, int, int, double & );
void racunanjeL(int, int, int, int, double & );

void racunanjeK(int x1, int y1, int x2, int y2, double &k){

    k = (y2-y1)/(double)(x2-x1);

}

void racunanjeL(int x1, int y1, int x2, int y2, double &l){

    l = -((y2-y1)/(double)(x2-x1)) * x1 + y1;

}


int main(void){

int x1,y1,x2,y2;
cin >> x1 >> y1 >> x2 >>y2;
double k,l;

racunanjeK(x1,y1,x2,y2, k);
racunanjeL(x1,y1,x2,y2, l);

printf("y = %0.2lfx+%0.2lf", k, l);



return 0;
}



