#include <iostream>
#include <climits>

int main() {
    int N;
    std::cin >> N;

    int min_value = INT_MAX;
    int max_value = INT_MIN;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;

        if (num < min_value) {
            min_value = num;
        }

        if (num > max_value) {
            max_value = num;
        }
    }

    std::cout << min_value << " " << max_value << std::endl;

    return 0;
}