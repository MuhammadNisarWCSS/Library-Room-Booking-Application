#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


/*  Class purpose: Handles Student objects.

            Class functions: Checks to see if a student comes before another student alphabetically

            Variables:   string name, string number
*/

class Student {

	public:
		//constructor
		Student();
		Student(string name, string number);
		Student(Student&);

		//Setters
    void setName(string name);
    void setNumber(string number);

		//Getters
		string getName();
		string getNumber();

		//Other functions
		bool lessThan(Student& s);
		void print();

	private:

		//Variables
    string name;
    string number;
};
#endif
