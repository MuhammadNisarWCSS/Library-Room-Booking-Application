
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

const int MAX_DURATION = 3;




/*  Class purpose: Handles date objects.

            Class functions: Checks to see if two dates overlap, or if one date is less than another.

            Variables:   int day, int month, int year, int hour, int duration
*/


class Date {

	public:
		//Constructors
		Date();
		Date(int year, int month, int day, int hour, int duration);


		//Setters
		void setDay( int);
		void setMonth(int);
		void setYear(int);
		void setDate(int y, int m, int d, int hour, int duration);
		void setDate(Date&);
		void setHour(int hour);
		void setDuration(int duration);

		//Getters
		int getDay();
		int getMonth();
		int getYear();
		int getHour();
		int getDuration();
		const string& getMonthName();


		//Other functions
		bool lessThan(Date& d);
		void print();
		bool overlaps(Date& d);

	private:
		//Functions
		int getMaxDay();


		//Variables
		int day;
		int month;
		int year;
		int hour;
		int duration;

		const string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		const string smonths[12]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul","Aug", "Sep", "Oct", "Nov", "Dec"};

};
#endif
