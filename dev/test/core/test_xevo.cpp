#include <iostream>

#include "core/xevo.hpp"
using namespace std;

// pass test
int test1() {
	cout << "Running XEVO test1" << endl;
	return 0;
}

// pass test
int test2() {
	cout << "Running XEVO test2" << endl;
	return 0;
}

int main (int argc, char *argv[]) {
    cout << "Running XEVO tests" << endl;
	if ( test1() ) return 1;
	if ( test2() ) return 1;
	return 0;
}
