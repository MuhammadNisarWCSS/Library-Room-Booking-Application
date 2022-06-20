#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Date.h"
#include "Room.h"

using namespace std;


/*  Class purpose: Handles Reservation objects.

            Class functions: Checks to see if two reservations overlap, or if one reservation is less than another.

            Variables:   Student* student, Room* room, Date date.
*/

class Reservation {

	public:
		//Constructor
		Reservation(Student* student, Room* room, Date& d);

		//Getters
    Student* getStudent();
    Room* getRoom();
    Date getDate();

		//Other functions
    bool lessThan(Reservation& res);
    bool overlaps(string r, Date& d);
		void print();

	private:

		//Variables
    Student* student;
    Room* room;
    Date date;

};
#endif
