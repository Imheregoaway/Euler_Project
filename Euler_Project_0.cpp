#include <iostream>
using namespace std;

int main() {
    long long N = 631000;   // first 631000 square numbers
    int sum = 0;       // large type to prevent overflow

    for (long long i = 1; i <= N; i++) {
        long long square = i * i;
        if (square % 2 != 0)
            sum += square;
    }

  
    string s;
    int temp = sum;
    while (temp > 0) {
        s.push_back(char('0' + (temp % 10)));
        temp /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
