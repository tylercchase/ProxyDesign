#include <iostream>
#include <memory>
#include "DatabaseProxy.hpp"
int main() {
    std::cout << "Hello world" << std::endl;
    auto db = std::make_shared<Database>();
    DatabaseProxy proxy(db);
    // std::cout << proxy.value << std::endl;
    return 0;
}