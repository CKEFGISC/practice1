#include <iostream>
#include "hahaha.h"

int main() {
    std::cout << "哈哈恭喜你執行成功\n";
    std::cout << "但是，請你想辦法修改這個專案啦\n";
    std::cout << "讓他可以正確的運作\n";
    std::cout << "---------------------------------\n";
    int a, b;
    std::cout << "this is a+b problem\n";
    std::cout << "please enter a\n>";
    std::cin >> a;
    std::cout << "please enter b\n>";
    std::cin >> b;
    std::cout << "a+b = " << add(a, b) << std::endl;
    std::cout << "execution finished\n";
    std::cout << "---------------------------------\n"
}