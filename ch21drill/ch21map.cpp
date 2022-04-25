#include "../std_lib_facilities.h"

void additem(map<string,int> m){
	string s;
	int i;
	cin >> s >> i;
	m[s] = i;
}

int main(){
	map<string, int> msi;
	msi["aldi"] = 6.1;
	msi["lidl"] = 97.7;
	msi["kfc"] = 63.8;
	msi["penny"] = 12.5;
	msi["cba"] = 31.5;
	msi["spar"] = 72.1;
	msi["mcdonalds"] = 41.6;
	msi["ibi"] = 105.9;
	msi["doberdoabc"] = 99.9;
	msi["burgerking"] = 71.4;
	for(pair<string,int>i:msi){
		cout << i.first << " " << i.second << "\n";
	}
	//msi.clear();
	//for(int i = 0;i<10;++i){
	//	additem(msi);
	//}
	for(pair<string,int>i:msi){
		cout << i.first << " " << i.second << "\n";
	}
	int sum = 0;
	for(pair<string,int>i:msi){
		sum += i.second;
	}
	cout << sum << "\n";

	map<int, string> mis;
	for(pair<string,int>i:msi){
		mis[i.second] = i.first;
	}
	for(pair<int,string>i:mis){
		cout << i.first << " " << i.second << "\n";
	}
	return 0;
}