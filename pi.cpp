#include <iostream>
#include <math.h> 
#include <stdio.h> 

using namespace std;

int main() {
    double sum;
    for (int i = 0; i < 10000000; i++)
    {
        sum += (double)(pow(-1.0,i) / (2.0 * i + 1.0));
    }
    sum *= 4;
  
    cout.precision(15);
    cout << sum << endl;

    return 0;
}
