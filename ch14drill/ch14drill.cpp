#include "std_lib_facilities.h"

	struct B1{
		virtual void vf() {cout<< "B1::vf()\n";}
		void f() {cout<< "B1::f()\n";}
	};

	struct D1 : B1{
		void vf() override {cout << "D1::vf()\n";}
		void f() {cout << "D1::f()\n";}
	};
int main(){
	//1.
	cout << "1.\n"; 
	B1 b;
	b.vf();
	b.f();
	//2.
	cout << "2.\n"; 
	D1 d;
	d.vf();
	d.f();
	//3.
	cout << "3.\n";
	B1& b1ref = d;
	b1ref.vf();
	b1ref.f(); 
	//4.
	cout << "4.\n";

	return 0;
}