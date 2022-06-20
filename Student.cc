#include "Student.h"

//Constructors
Student::Student(){
	setName("namelessStudent");
  setNumber("numberlessStudent");
}

Student::Student(string name, string number){
	setName(name);
  setNumber(number);
}

Student::Student(Student& oldStudent) {

	setName(oldStudent.name);
	setNumber(oldStudent.number);
}

//Setters
void Student::setName(string name) {

  this->name = name;
}

void Student::setNumber(string number) {

  this->number = number;
}


//Getters
string Student::getName(){return this->name;}
string Student::getNumber(){return this->number;}


//Other functions
bool Student::lessThan(Student& s) {

	if (this->number < s.number) {

		return true;
	}

  return false;
}

void Student::print(){
	cout << "Student name : " << getName() << ", Student number :  " << getNumber() <<endl;
}
