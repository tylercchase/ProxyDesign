#include "Database.hpp"
std::vector<std::string> Database::getData() {
    return data;
}
Database::Database(){
    this->data = {"hello world", "Testing", "Eyyy"};
}