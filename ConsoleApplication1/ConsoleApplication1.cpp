// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person()
    {
        _name = "";
        _surname = "";
        cout << "Constructor default Person" << endl;
    }
    Person(string name, string surname)
    {
        _name = name;
        _surname = surname;
        cout << "Constructor with params Person" << endl;
    }
    ~Person()
    {
        cout << "Destructor Person" << endl;
    }
    void Print()
    {
        cout << "name: " << _name << endl;
        cout << "surname: " << _surname << endl;
    }
    //Setters
    void setName(string name)
    {
        _name = name;
    }
    void setSurname(string surname)
    {
        _surname = surname;
    }
    //Getters
    string getName()
    {
        return _name;
    }
    string getSurame()
    {
        return _surname;
    }
private:
    string _name;
    string _surname;
};

int main()
{
    //Person alex("Alex", "Wildom");
    //alex.Print();


    Person child;
    child.setName("Bob");
    child.setSurname("Svet");

    cout << child.getName() << endl;

    //child.Print();

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
