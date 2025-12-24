#include <iostream>
#include <climits> //For the  int Min and Max values
#include <cfloat> // For the Decimal Min and Max Values
using namespace std;

int main(){
    int age {0};
    cout<<sizeof(char)<<endl;
    cout<<sizeof(age)<<endl;

    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    cout<<LONG_MAX<<endl;
    cout<<LLONG_MIN<<endl;
    cout<<BOOL_MAX<<endl;   

    return 0;
}