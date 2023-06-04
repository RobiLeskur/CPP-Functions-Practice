#include <iostream>
#include <vector>
#include <string>

using namespace std;

void input(int &);
int sumOfFirstTwo(int );

void input(int &num){
    cin>>num;
}

int sumOfFirstTwo(int num){

    int f = num/1000;
    int s = num/100%10;
    return f+s;
}

int sumOfLastTwo(int num){

    int f = num/10%10;
    int s = num%10;

    return f+s;
}


int main(void){
int x;
input(x);

cout<<sumOfFirstTwo(x)<<endl<<sumOfLastTwo(x);



return 0;
}
