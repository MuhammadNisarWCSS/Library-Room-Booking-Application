libraryRoomBooking: a1-global.o Student.o Room.o Date.o Reservation.o Library.o
	g++ -o libraryRoomBooking a1-global.o Student.o Room.o Date.o Reservation.o Library.o

a1-global.o: a1-global.cc Library.h Date.h
	g++ -c a1-global.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Room.o: Room.cc Room.h
	g++ -c Room.cc

Date.o: Date.cc Date.h
	g++ -c Date.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

Library.o: Library.cc Library.h
	g++ -c Library.cc
