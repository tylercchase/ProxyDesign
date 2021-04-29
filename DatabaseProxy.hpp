#ifndef DATABASE_PROXY_HPP
#define DATABASE_PROXY_HPP
#include "Database.hpp"
#include <memory>
class DatabaseProxy {
    private:
        bool isAuthenticated();
        std::shared_ptr<Database> _database;
        std::string _username;
        std::string _password;
    public:
        DatabaseProxy(std::shared_ptr<Database> db);
        void authenticate(const std::string & username, const std::string & password);
        std::vector<std::string> getData();
};
#endif