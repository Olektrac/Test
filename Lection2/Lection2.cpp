#include <iostream>
#include <string>
using namespace std;


class Interests
{
public:
	Interests(); // Constructor default
	Interests(string thing); // Constructor with param
	~Interests(); // Destructor
	string getThing(); // Getter
	void setThing(); // Setter 
private:
	string thing;
};

class User
{
public:
	User()
	{
		cout << "Constructor default: " << typeid(this).name() << endl;
	}
private:
	int _id;
	string _name;
	Interests* _interests;
	int _size;
};


int main()
{
	



	return 0;
}

Interests::Interests()
{
	cout << "Construcor default: " << typeid(this).name() << endl;
}

Interests::Interests(string thing)
{
	this->thing = thing;
	cout << "Construcor with param: " << typeid(this).name() << endl;
}

Interests::~Interests()
{
	cout << "Destructor: " << typeid(this).name() << endl;
}

string Interests::getThing()
{
	return thing;
}

void Interests::setThing()
{
	this->thing = thing;
}
