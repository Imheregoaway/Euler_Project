#include <iostream>
using namespace std;

int main(){
    int num1 {1};
    int num2 (2);
    int num3;
    do {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3 ;
    }
    while (num3 == 400000);
        cout<<num3;

    return 0;
}