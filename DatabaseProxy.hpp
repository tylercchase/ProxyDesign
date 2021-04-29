#ifndef DATABASE_PROXY_HPP
#define DATABASE_PROXY_HPP
#include "Database.hpp"
#include <memory>
class DatabaseProxy {
    private:
        bool isAuthenticated();
        std::shared_ptr<Database> _database;
    public:
        DatabaseProxy(std::shared_ptr<Database> db);
        void authenticate(std::string username, std::string password);
        std::vector<std::string> getData();
};
#endif