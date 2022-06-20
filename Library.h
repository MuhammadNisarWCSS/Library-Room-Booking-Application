#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_ARRAY 50
#include <iostream>
#include <string>
#include "Reservation.h"

using namespace std;



/*  Class purpose: Handles library objects.

            Class functions: Checks to see if rooms are available, creates reservations.

            Variables:   A statically allocated array of Room pointers, an int to keep track of the amount of room elements in the array,
												 A dynamically allocated array of Student pointers, an int to keep track of the amount of Student elements in the array,
												 A dynamically allocated array of Reservation pointers, an int to keep track of the amount of Reservations in the array.
*/

class Library {

	public:

		//Constructor
		Library();

		//Destructor
		~Library();


    //Setters
		bool addRoom(string name, int capacity = 1, int computers = 0, bool whiteboard = false);
		bool addStudent(string name, string number);

		//Getters
    bool getRoom(string roomName, Room** room);
		bool getStudent(string name, Student** student);

		//Other functions
		bool isFree(string room, Date& date);
		bool makeReservation(string student, string room, Date& date);
		void printReservations();


	private:

		//Variables
    Room* rooms[MAX_ARRAY];
    int roomsQuantity;

		Student** students;
		int studentsQuantity;

		Reservation** reservations;
		int reservationsQuantity;
};
#endif
