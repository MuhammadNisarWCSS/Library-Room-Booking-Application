#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

using namespace std;


/*  Class purpose: Handles room objects.

            Class functions: Checks to see if a room meets a certain criteria. Checks if a room is less than another alphabetically.

            Variables:   string name, int capacity, int computers, bool whiteboard
*/


class Room {

	public:

		//Constructors
		Room(string name, int capacity, int computers, bool whiteboard);

		//Copy constructor
		Room(Room&);


		//Setters
    void setName(string name);
    void setCapacity(int capacity);
    void setComputers(int computers);
    void setWhiteboard(bool whiteboard);


		//Getters
		string getName();
		int getCapacity();
    int getComputers();
    bool hasWhiteboard();



		//Other functions
		bool meetsCriteria(int capacity, int computers, bool whiteboard);
    bool lessThan(Room& r);
		void print();

	private:

		//Variables
    string name;
    int capacity;
    int computers;
    bool whiteboard;

};
#endif
