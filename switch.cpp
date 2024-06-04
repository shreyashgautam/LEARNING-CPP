#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    std::cout << (rand() % 6 + 1) <<std::endl;
    return 0;
}