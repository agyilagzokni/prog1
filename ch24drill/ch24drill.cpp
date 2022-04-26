#include "../std_lib_facilities.h"
#include "Matrix.h"
#include <complex>

double a_sqrt(){
	int x;
	cin >> x;
	if (x >= 0){
		return sqrt(x);
	}else{
		cout << "illegal call 911 now\n";
	}
}

Numeric_lib::Matrix<double,2> cucc(int x, int y){
	Numeric_lib::Matrix<double, 2> a(x+1, y+1);
	for(int i = 0;i<=x;++i){
		for(int j = 0;j<=y;++j){
			a[i][j] = i*j;
		}
	}
	return a;
}

int main(){
	/*
	cout << "char " << sizeof(char) << "\n";
	cout << "short " << sizeof(short) << "\n";
	cout << "int " << sizeof(int) << "\n";
	cout << "long " << sizeof(long) << "\n";
	cout << "float " << sizeof(float) << "\n";
	cout << "double " << sizeof(double) << "\n";
	cout << "int* " << sizeof(int*) << "\n";
	cout << "double* " << sizeof(double*) << "\n";

	Numeric_lib::Matrix<int> a(10);
	cout << "matrix int 10 "<< sizeof(a) << "\n";
	Numeric_lib::Matrix<int> b(100);
	cout << "matrix int 100 "<< sizeof(b) << "\n";
	Numeric_lib::Matrix<double> c(10);
	cout << "matrix double 10 "<< sizeof(c) << "\n";
	Numeric_lib::Matrix<int, 2> d(10, 10);
	cout << "matrix int 10, 10 "<< sizeof(d) << "\n";
	Numeric_lib::Matrix<int, 3> e(10, 10, 10);
	cout << "matrix int 10, 10, 10 "<< sizeof(e) << "\n";

	cout << "matrix int 10 "<< a.size() << "\n";
	cout << "matrix int 100 "<< b.size() << "\n";
	cout << "matrix double 10 "<< c.size() << "\n";
	cout << "matrix int 10, 10 "<< d.size() << "\n";
	cout << "matrix int 10, 10, 10 "<< e.size() << "\n";

	for(int i = 0;i<10;++i){
		double d;
		cin >> d;
		c[i] = d;
	}
	for(int i = 0;i<10;++i){
		cout << c[i] << " \n";
	}
	*/

	int x, y;
	cin >> x >> y;
	Numeric_lib::Matrix<double, 2> a(cucc(x,y));

	for(int i = 0;i<x;++i){
		for(int j = 0;j<y;++j){
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}

	Numeric_lib::Matrix<complex<double>> b(10);
	complex<double> csum;
	complex<double> cd;
	for(int i = 0;i<10;++i){
		cin >> b[i];
		csum += b[i];
	}
	cout << csum << "\n";

	Numeric_lib::Matrix<int,2> m(2,3);

	for(int i = 0;i<2;++i){
		for(int j = 0;j<3;++j){
			cin >> m[i][j];
		}
	}

	for(int i = 0;i<2;++i){
		for(int j = 0;j<3;++j){
			cout << m[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}