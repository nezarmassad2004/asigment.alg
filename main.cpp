#include <iostream>
#include <ctime>
using namespace std;

long long Fact1(int n) {
    if(n<=1)
    return 1;
    else
    return n*Fact1(n-1);
}

int main() {
    int number;
    cin >> number;
    clock_t start = clock();
    long long result = Fact1(number);
    clock_t endd = clock();
    double time_ms = double(endd - start) * 1000 / CLOCKS_PER_SEC;
    cout << "RecursiveFact(" << number << ") = " << result << endl;
    cout << "Time taken: " << time_ms << " ms" << endl;
  return 0;
}