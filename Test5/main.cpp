#include <iostream>
#include "script/program.hpp"

int main() {
    Program p;
    std::cout << p.v.getSize() << std::endl;
    return 0;
}
