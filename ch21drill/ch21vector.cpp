#include "../std_lib_facilities.h"
#include <fstream>

int main(){
	vector<double> vd;
	ifstream in("f.txt");
	for(int i = 0;i<16;++i){
		double d;
		in>>d;
		vd.push_back(d);
	}
	vector<int> vi;
	for(double d:vd){
		vi.push_back(d);
	}
	for(int i = 0;i<vd.size();++i){
		cout << "(" << vd[i] << "," << vi[i] << ")\n";
	}
	double sumofvd = 0;
	for(double d:vd){
		sumofvd += d;
	}
	cout << sumofvd << "\n";
	int sumofvi = 0;
	for(int d:vd){
		sumofvi += d;
	}
	cout << sumofvd-sumofvi << "\n";
	reverse(vd.begin(), vd.end());
	for(double d:vd){
		cout << d << "\n";
	}
	cout << sumofvd/vd.size() << "\n";
	vector<double> vd2;
	for (double d:vd){
		if(d < sumofvd/vd.size()){
			vd2.push_back(d);
		}
	}
	sort(vd.begin(), vd.end());
	for(double d:vd){
		cout << d << "\n";
	}
	return 0;
}