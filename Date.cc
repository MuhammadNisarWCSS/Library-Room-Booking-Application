
#include "Date.h"


//Constructors
Date::Date(){
	setDate(1901,1,1, 1, 1);
}

Date::Date(int y, int m, int d, int hour, int duration){
	setDate(y,m,d, hour, duration);
}


//Setters
void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setDate(int y, int m, int d, int hour, int duration){
	setMonth(m);
	setDay(d);
	setYear(y);
	setHour(hour);
	setDuration(duration);
}

void Date::setDate(Date& d){
	setDate(d.year, d.month, d.day, d.hour, d.duration);
}

void Date::setHour(int hour) {

	if (hour < 0) {
		this->hour = 0;
	}

	else if (hour > 23) {
		this->hour = 23;
	}

	else {
		this->hour = hour;
	}
}

void Date::setDuration(int duration) {

	if (duration < 1) {

		this->duration = 1;
	}

	else if (duration > MAX_DURATION) {

		this->duration = MAX_DURATION;
	}

	else {

		this->duration = duration;
	}
}


//Getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
const string& Date::getMonthName(){return months[month-1];}
int Date::getHour(){return hour;}
int Date::getDuration(){return duration;}


//Other functions

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			if(day == d.day) {
				return hour < d.hour;
			}

			else {
				return day < d.day;
			}
		}

		else{
			return month  < d.month;
		}
	}

	else{
		return year < d.year;
	}
}

void Date::print(){
	cout << "Month : " << getMonthName() << ", Day : " << getDay() << ", Year : " << getYear() << ", Hour : " << getHour() <<", Duration : " << getDuration() <<endl;
}

bool Date::overlaps(Date& d) {

	if (year == d.year && month == d.month && day == d.day) {

		if (hour == d.hour) {
			return true;
		}

		if (hour > d.hour) {

			if (d.hour + d.duration > hour) {

				return true;
			}
		}

		if (d.hour > hour) {

			if (hour + duration > d.hour) {

				return true;
			}
		}
	}
	
	return false;
}


int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}
