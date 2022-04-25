#include "../std_lib_facilities.h"
#include <fstream>

struct Item{
	string name;
	int iid;
	double value;
};

int main(){
	/*vector<Item> vi;
	ifstream in("jjjjj.txt");
	for (int i = 0;i<10;++i){
		string s;
		int j;
		double d;
		in>>s>>j>>d;
		vi.push_back({s,j,d});
	}

	sort(vi.begin(), vi.end(), [](Item a, Item b){return a.name < b.name;});
	sort(vi.begin(), vi.end(), [](Item a, Item b){return a.iid < b.iid;});
	sort(vi.begin(), vi.end(), [](Item a, Item b){return a.value > b.value;});
	for (Item i:vi){
		cout << i.value << "\n";
	}

	vi.push_back({"horse shoe", 99, 12.34});
	vi.push_back({"Canon S400", 9988, 499.95});

	string s;
	string s2;
	cout << "nev szerint kiket akarsz torolni? :(\n";
	cin >> s >> s2;
	for(auto i = vi.begin();i != vi.end();++i){
		if ((*i).name == s || (*i).name == s2){
			vi.erase(i);
		}
	}
	int s;
	int s2;
	cout << "iid szerint kiket akarsz torolni? :(\n";
	cin >> s >> s2;
	for(auto i = vi.begin();i != vi.end();++i){
		if ((*i).iid == s || (*i).iid == s2){
			vi.erase(i);
		}
	}*/
	//list
	list<Item> vi;
	ifstream in2("jjjjj.txt");
	for (int i = 0;i<10;++i){
		string s;
		int j;
		double d;
		in2>>s>>j>>d;
		vi.push_back({s,j,d});
	}

	vi.sort([](Item a, Item b){return a.name < b.name;});
	vi.sort([](Item a, Item b){return a.iid < b.iid;});
	vi.sort([](Item a, Item b){return a.value > b.value;});
	for (Item i:vi){
		cout << i.name << " " << i.iid << " " << i.value << "\n";
	}

	vi.push_back({"horse shoe", 99, 12.34});
	vi.push_back({"Canon S400", 9988, 499.95});

	string sa;
	string sa2;
	cout << "nev szerint kiket akarsz torolni? :(\n";
	cin >> sa >> sa2;
	for(auto i = vi.begin();i != vi.end();++i){
		if ((*i).name == sa || (*i).name == sa2){
			i = vi.erase(i);
			i--;
		}
	}
	int dd;
	int dd2;
	cout << "iid szerint kiket akarsz torolni? :(\n";
	cin >> dd >> dd2;
	for(auto i = vi.begin();i != vi.end();++i){
		if ((*i).iid == dd || (*i).iid == dd2){
			i = vi.erase(i);
			i--;
		}
	}
	return 0;
}