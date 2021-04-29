#include "DatabaseProxy.hpp"
DatabaseProxy::DatabaseProxy(std::shared_ptr<Database> db) : _database(db){

};

std::vector<std::string> DatabaseProxy::getData() {
    if(isAuthenticated()) {
        return this->_database->getData();
    } else {
        throw "Not authenticated";
    }
}
void DatabaseProxy::authenticate(const std::string & username, const std::string & password) {
    this->_username = username;
    this->_password = password;
}
bool DatabaseProxy::isAuthenticated() {
    return this->_username ==  "username" && this->_password == "password";
}