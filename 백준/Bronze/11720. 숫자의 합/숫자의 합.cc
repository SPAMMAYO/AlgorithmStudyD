#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string numbers;
    std::cin >> numbers;

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += numbers[i] - '0';
    }

    std::cout << sum << std::endl;

    return 0;
}