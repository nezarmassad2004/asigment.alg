#include <iostream>
#include <ctime>
using namespace std;
long long Fact2(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    clock_t start = clock();
    long long result = Fact2(n);
    clock_t endd = clock();
    double time_ms = double(endd - start) * 1000 / CLOCKS_PER_SEC;
    cout << "IterativeFact=" <<  result << endl;
    cout << "Time taken: " << time_ms << " ms" << endl;

return 0;
}