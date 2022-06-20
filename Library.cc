#include "Library.h"


//Constructor
//Initializes the quantity of each array by setting it to equal 0. Initializes the array of pointers.
Library::Library() {

  roomsQuantity = 0;

  studentsQuantity = 0;
  students = new Student*[MAX_ARRAY];

  reservationsQuantity = 0;
  reservations = new Reservation*[MAX_ARRAY];
}

//Destructor
//Deallocates previously allocated memory
Library::~Library() {

  for (int i = 0; i < studentsQuantity; ++i) {

    delete students[i];
  }

  for (int i = 0; i < roomsQuantity; ++i) {

    delete rooms[i];
  }

  for (int i = 0; i < reservationsQuantity; ++i) {

    delete reservations[i];
  }

  delete students;
  delete reservations;
}


//Setters
bool Library::addRoom(string name, int capacity, int computers, bool whiteboard) {

  if (this->roomsQuantity >= MAX_ARRAY) {

    return false;
  }

  rooms[roomsQuantity++] = new Room(name, capacity, computers, whiteboard);
  return true;
}

bool Library::addStudent(string name, string number) {

  if (this->studentsQuantity >= MAX_ARRAY) {

    return false;
  }

  students[studentsQuantity++] = new Student(name, number);
  return true;
}



//Getters
bool Library::getRoom(string roomName, Room** room){


  for (int i = 0; i < this->roomsQuantity; i++) {

    if (rooms[i]->getName().compare(roomName) == 0) {

      *room = rooms[i];
      return true;
    }
  }

  return false;
}

bool Library::getStudent(string name, Student** student) {

  for (int i = 0; i < this->studentsQuantity; i++) {

    if (students[i]->getName().compare(name) == 0) {

      *student = students[i];
      return true;
    }
  }

  return false;
}


//Other functions
//Checks to see if room is available
bool Library::isFree(string room, Date& date) {

  Room* roomPtr;

  if (this->getRoom(room, &roomPtr) == true) {

    for (int i = 0; i < reservationsQuantity; i++) {

      if (reservations[i]->overlaps(room, date)) {

        return false;
      }
    }

    return true;
  }

  return false;
}

bool Library::makeReservation(string student, string room, Date& date) {

  Room* roomPtr;
  Student* studentPtr;

  if (this->getRoom(room, &roomPtr) == true && this->getStudent(student, &studentPtr) == true) {

    if (this->isFree(room, date) == false || reservationsQuantity >= MAX_ARRAY) {

      return false;
    }

    reservations[reservationsQuantity++] = new Reservation(studentPtr, roomPtr, date);
    return true;
  }

  return false;
}

void Library::printReservations() {

  for (int i = 0; i < this->reservationsQuantity; i++) {

    reservations[i]->print();
  }
}
