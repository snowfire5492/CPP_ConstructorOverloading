/*
 * Person.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: snowf
 */

#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;
	
	// Default contructor
	Person::Person(){
		name = "undefined";
		age = 0;
	}


	//constructor
	Person::Person(string nameUpdate){
		name = nameUpdate;
		age = 0; 					// 
newborn
	}


	Person::~Person(){
		cout << "deconstructed object..." << endl;
	}


	int Person::getAge(){
		return age;
	}

	void Person::setAge(int ageUpdate){
		age = ageUpdate;
	}

	string Person::toString(){

		stringstream ss;

		ss << "Hello my name is " << name << " and i am " << age 
<< " years old. ";

		return ss.str();
	}



