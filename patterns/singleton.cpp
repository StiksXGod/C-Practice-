#include <iostream>
#include <string>


class DataBaseHelper{
    DataBaseHelper(){
        std::cout << "Connected" << std::endl;
    }
    static DataBaseHelper* databaseConnecton;

    std::string data;

    public:
    DataBaseHelper(const DataBaseHelper&) = delete;
    void operator = (const DataBaseHelper&) = delete;

    static DataBaseHelper* getConnection(){
        if (databaseConnecton==nullptr)
        {
            databaseConnecton = new DataBaseHelper();
        }

        return databaseConnecton;
    }

    std::string selectData() const{
        return data;
    }

    void insertData(std::string d){
        std::cout << "New data " << d << std::endl;
        data = d;
    }


};


DataBaseHelper* DataBaseHelper::databaseConnecton = nullptr;

int main(){
    DataBaseHelper::getConnection()->insertData("Xddd");
    std::cout << DataBaseHelper::getConnection()->selectData() << std::endl;


}