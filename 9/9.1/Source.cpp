#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;
    std::cout << "Перед обменом: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    std::string s1 = "привет", s2 = "мир";
    std::cout << "Перед обменом: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "После обмена: s1 = " << s1 << ", s2 = " << s2 << std::endl;

    return 0;
}
