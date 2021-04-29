#include <iostream>
#include <memory>
#include "DatabaseProxy.hpp"
int main() {
    std::cout << "Hello world" << std::endl;
    auto db = std::make_shared<Database>();
    DatabaseProxy proxy(db);
    // Should throw because of not authenticating
    try {
        proxy.getData();
    } catch (const char* error) {
        std::cout << error << std::endl;
    }

    // Should return data
    try {
        proxy.authenticate("username", "password");
        auto data = proxy.getData();
        for(const auto & x: data) {
            std::cout << x << std::endl;
        }
    } catch(const char* error) {
        std::cout << error << std::endl;
    }
    return 0;
}