// Student.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        id = 0;
        name = "";
        group = "";
        money = 0;
        cout << "Constructor Student [default]:\t" << this << endl;
    }
    Student(int id, string name, string group, double money)
    {
        this->id = id;
        this->name = name;
        this->group = group;
        this->money = money;
        cout << "Constructor with params:\t" << this << endl;
    }
    ~Student()
    {
        cout << "Destructor Student:\t" << this << endl;
    }
    // Setters
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setGroup(string group) { this->group = group; }
    void setMoney(double money) { this->money = money; }
    // Getters
    int getId() { return this->id; }
    string getName() { return this->name; }
    string getgroup() { return this->group; }
    double getMoney() { return this->money; }
private:
    int id;
    string name;
    string group;
    double money;
};

int main()
{

    //Student student; // this-> 23423DF
    //Student student1; // this-> 784EEE
    //student.setid;

    //Student student(1, "Arnold", "P12", 125.30);
    //cout << "Id: " << student.getId() << endl;
    //cout << "Name: " << student.getName() << endl;
    //cout << "Group: " << student.getgroup() << endl;
   // cout << "Money: " << student.getMoney() << endl;

    const int size = 5;
    Student students[size]
    {
        * new Student(1, "Alex", "SBD121", 135.70), //students[0]
        * new Student(2, "Felix", "P12", 0.0), //students[1]
        * new Student(3, "Arnold", "P12", 85.50), //students[2]
        * new Student(4, "Tom", "SBD121", 1500) //students[3]
        //{ 1, "Alex", "SBD121", 135,7}
    };
    for (size_t i = 0; i < size; i++)
    {
        cout << "-----------------------------------" << endl;
        cout << "Id: " << students[i].getId() << endl;
        cout << "Name: " << students[i].getName() << endl;
        cout << "Group: " << students[i].getgroup() << endl;
        cout << "Money: " << students[i].getMoney() << endl;
        cout << "-----------------------------------" << endl;
    }

    //system("pause");
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
