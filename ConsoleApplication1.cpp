#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "¬вед≥ть n: ";
    std::cin >> n;
    long long sum = 0;
    int k = 1;
    while (k <= n) {
        sum += pow(k, k);
        k++;
    }
    std::cout << "—ума = " << sum << std::endl;
    return 0;
}