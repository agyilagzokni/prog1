#include "std_lib_facilities.h"

struct Person {
public:
	string get_name() const {return fn + " " + ln;}
	int get_age() const {return a;}
	void set_name(string fname, string lname) {
		for(char c : fname+lname){
			switch(c){
				case ';':
				case ':':
				case '"':
				case '\'':
				case '[':
				case ']':
				case '*':
				case '&':
				case '^':
				case '%':
				case '$':
				case '#':
				case '@':
				case '!':
					error("nem jo a nev!44!");
					break;
			}
		fn = fname;
		ln = lname;
		}
	}
	void set_age(int age) {
		if (0 < age && age < 150){
			a = age;
		}else{
			error("buta eletkor!!");
		}
	}
	Person(){
		fn = "Quandale";
		ln = "Dingle";
		a = 20;
	}
private:
	string fn;
	string ln;
	int a;
};

int main()
{
	//2.
	Person p;
	/*
	p.n = "Goofy";
	p.a = 63;
	cout << "ember neve: " << p.n << "\nemberünk ennyi idos: " << p.a << "\n";
	*/
	//3-7.
	string fname;
	string lname;
	int age;
	/*
	cout << "spawn person: (name age):\n";
	cin >> name >> age;
	p.set_name(name);
	p.set_age(age);
	cout << "ember neve: " << p.get_name() << "\nemberünk ennyi idos: " << p.get_age() << "\n";
	*/
	//8.
	vector<Person> ps;
	cout << "Irj be annyi nevet amennyit szeretnél! (name age)\nha végeztél ird be hogy | end |\n";
	while(cin >> fname >> lname >> age){
		if (fname == "| end |"){
			return 0;
		}
		Person p;
		p.set_name(fname, lname);
		p.set_age(age);
		ps.push_back(p);
	}
	for(Person p : ps){
		cout << "ember neve: " << p.get_name() << ", iletve ennyi idős: " << p.get_age() << "\n";
	}
	return 0;
}