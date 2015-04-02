/*
 * Person.h
 *
 *  Created on: Apr 19, 2019
 *      Author: snowf
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person{

private:
	int age;
	string name;


protected:
public:
	Person();
	Person(string nameUpdate);		// constructor
	~Person();		// deconstructor

	int getAge();
	void setAge(int ageUpdate);

	string toString();
};




#endif /* PERSON_H_ */

