#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;

class Base {
public:
void show() { cout << "Base"; }
};

class Derived : public Base {
public:
void show() { cout << "Derived"; }
};
int sum ( int a , int b ) { return a+b ; }
int sum ( double a , double b ) { return a+b ; }
int main(){
	char a[]="1 2 3 4 5 \0 5 4 3 2 1";
	cout << strlen(a);
	return 0;
}

