
Author : Muhammad Nisar 

Allows students to book a certain room at a certain date, or to search for rooms that match certain criteria and check their availability.

At the moment, this application is only supported on linux.



Files : Date.h, Date.cc (Handles the Date objects by comparing dates)
        Library.h Library.cc (Handles the library objects by creating reservations and making sure no reservations overlap)
        Reservation.h Reservation.cc (Handles the reservation object, makes sure no reservations overlap)
        Room.h Room.cc (Handles the room object, ensures that the room meets the requested criteria)
        Student.h Student.cc (Handles student objects. Holds the student's name and their number)
        a1-global.cc (Main function is in here. Used to test the program using testcases)
        makefile (Used to compile and create the executable)


To compile : Open up the terminal. Type "make".
To launch executable : Type ./libraryRoomBooking in terminal.


