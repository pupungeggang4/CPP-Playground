#include "thing.hpp"

void Thing::b() {
    a();
    std::cout << 2 << std::endl;
}