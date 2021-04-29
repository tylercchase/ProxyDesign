#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <vector>
#include <string>
class Database {
    private:
        std::vector<std::string> data;
    public:
        std::vector<std::string> getData();
        Database();
};
#endif