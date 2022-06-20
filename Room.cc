#include "Room.h"


//Constructors
Room::Room(string name, int capacity, int computers, bool whiteboard){

	setName(name);
  setCapacity(capacity);
  setComputers(computers);
  setWhiteboard(whiteboard);
}

Room::Room(Room& oldRoom) {

	setName(oldRoom.name);
	setCapacity(oldRoom.capacity);
	setComputers(oldRoom.computers);
	setWhiteboard(oldRoom.whiteboard);
}


//Setters
void Room::setName(string name) {

  this->name = name;
}

void Room::setCapacity(int capacity) {

  this->capacity = capacity;
}

void Room::setComputers(int computers) {

  this->computers = computers;
}

void Room::setWhiteboard(bool whiteboard) {

  this->whiteboard = whiteboard;
}


//Getters
string Room::getName(){return this->name;}
int Room::getCapacity(){return this->capacity;}
int Room::getComputers(){return this->computers;}
bool Room::hasWhiteboard(){return this->whiteboard;}


//Other functions
bool Room::meetsCriteria(int capacity, int computers, bool whiteboard) {

	if (whiteboard == true) {

		return (this->capacity >= capacity && this->computers >= computers && this->whiteboard == whiteboard);
	}

	return (this->capacity >= capacity && this->computers >= computers);
}


bool Room::lessThan(Room& r) {


	if (this->name < r.name) {

		return true;
	}

  return false;
}


void Room::print(){
	cout << "Room name : " << getName() << ", Capacity : " << getCapacity()<< ", Computers : " << getComputers() << ", Whiteboard : " << hasWhiteboard() << endl;
}
