#include <iostream>
#include <cassert>

#include <Object.hpp>

void core::Object::foo() {
    std::cout << "Object::foo()" << std::endl;
}

int core::Object::add_two_numbers(int a, int b) {
    return a + b;
    assert(1 + 1 == 2);
}
