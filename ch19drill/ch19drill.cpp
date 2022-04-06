#include "../std_lib_facilities.h"

template<typename T> struct S {
private:
	T val;
public:
	S (T t):val{t} {}
	T& get(){return val;}
	const T& get_const()const{return val;}
	//void set(T x) {val = x;}
	S& operator=(const T& x){val=x;return *this;}
};
template<typename T> void read_val(T& v){
	cin >> v;
}

int main(){
	S<int> szerencseszam(21);
	S<char> a_betu('a');
	S<double> dupla(11.22);
	S<string> gyanus_alak("among us");
	//szerencseszam=11;
	//cout << szerencseszam.get() << "\n";
	cout << "irj int" << "\n";
	read_val(szerencseszam.get());
	cout << "irj char" << "\n";
	read_val(a_betu.get());
	cout << "irj double" << "\n";
	read_val(dupla.get());
	cout << "irj string" << "\n";
	read_val(gyanus_alak.get());

	cout << szerencseszam.get() << "\n";
	cout << a_betu.get() << "\n";
	cout << dupla.get() << "\n";
	cout << gyanus_alak.get() << "\n";
	return 0;
}