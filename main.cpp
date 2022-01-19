#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

bool prime_Or_Not_Prime(int);
void print_Prime_Or_Not_Prime(bool);

int main() {
    int number_Of_Test_Cases; std::cin >> number_Of_Test_Cases;
    std::vector<int> vec;
    for (int i = 0; i < number_Of_Test_Cases; i++) {
        int temp; std::cin >> temp; vec.push_back(temp);
    }
    for (int i = 0; i < number_Of_Test_Cases; i++) {
        bool p = prime_Or_Not_Prime(vec[i]);
        print_Prime_Or_Not_Prime(p);
    }
    return 0;
}

bool prime_Or_Not_Prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { return false; }
    }
    return true;
};

void print_Prime_Or_Not_Prime(bool p) {
    if (p) std::cout << "Prime";
    else std::cout << "Not prime";
};