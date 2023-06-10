#include <iostream>
#include <string>
using namespace std;
class Client
{
public:
    Client()
    {
        name = "";
        age = 0;
        cout << "Constructor default [Client]: " << this << endl;
    }
    Client(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    //Setters
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    //Getters
    string getName() { return this->name; }
    int getAge() { return this->age; }
private:
    string name;
    int age;
};
class Bank
{
public:
    Bank()
    {
        this->title = "";
        size = 0;
        clients = nullptr;
        cout << "Constructor default: " << this << endl;
    }
    Bank(string title, int size)
    {
        this->title = title;
        this->size = size;
        if (this->size > 0) InitClients();
        else cout << "Bank is empty!" << endl;
    }
    ~Bank()
    {
        if (clients != nullptr)
            delete[] clients;
        cout << "Destructor worked successfully!" << endl;
    }
private:
    string title;
    int size;
    Client* clients;
    void InitClients()
    {
        clients = new Client[size];
        cout << "In bank added count clients: " << size << endl;
    }
};

int main()
{
    Bank bank("Private", 0);

    return 0;
}