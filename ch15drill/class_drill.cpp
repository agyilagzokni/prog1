#include "std_lib_facilities.h"

struct Person {
public:
	string const name() {return name;}
	int const age() {return age;}
private:
	string name;
	int age;
};

int main()
{
	//2.
	Person p;
	p.name = "Goofy";
	p.age = 63;
	cout << "ember neve: " << p.name << "\nemberünk ennyi idos: " << p.age << "\n";
	//3.
	
	return 0;
}