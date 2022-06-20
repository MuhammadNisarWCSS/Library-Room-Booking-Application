#include "Reservation.h"


//Constructor
Reservation::Reservation(Student* student, Room* room, Date& d){

  this->student = student;
  this->room = room;
  this->date.setDate(d);
}

//Getters
Student* Reservation::getStudent() {return student;}
Room* Reservation::getRoom() {return room;}
Date Reservation::getDate() {return date;}


//Other functions
bool Reservation::lessThan(Reservation& res) {

  if (this->date.lessThan(res.date)) {

    return true;
  }

  return false;
}

bool Reservation::overlaps(string r, Date& d) {

  if (this->room->getName().compare(r) == 0) {

    if (this->date.overlaps(d)) {

      return true;
    }
  }

  return false;
}

void Reservation::print() {

  cout << endl << "Reservation information : " << endl;
  this->student->print();
  this->room->print();
  this->date.print();
}
