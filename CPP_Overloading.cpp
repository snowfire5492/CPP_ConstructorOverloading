#include <iostream>
#include "Person.h"
using namespace std;


int main(){


	Person eric("eric");

	eric.setAge(29);

	cout << eric.toString() << endl;


	return 0;
}

