#include <iostream>
using namespace std;


int main()
{
	int x1, x2, y1, y2;			//Task1
	
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter y2: ";
	cin >> y2;
	
	if (x1 == x2) {
		cout << "Line parallel the y-axis";
	}
	else if (y1 == y2) {
		cout << "Line parallel the x - axis";
	}
	else {
		cout << "Non parralel x - axis or y - axis" << endl;
	}

	double test;			//Task2
	cout << "Enter a fractional number: ";
	cin >> test;
	if (test == int(test)) {
		cout << "This number have not a fractional part.";
	}
	else {
		cout << "This number have a fractional part.";
	}

	int hours = 24;		//Task3
	int	minutes = 60; 
	int seconds = 60;
	int hour, minute, second;
	cout << "Enter hours: ";
	cin >> hour;
	cout << "Enter minutes: ";
	cin >> minute;
	cout << "Enter seconds: ";
	cin >> second;
	if (hour > hours || minute > minutes || second > seconds) {
		cout << "Error";
	}
	else {
		cout << "Error not founded";
	}

	int ticket;	//Task4
	cout << "Enter number of ticket: ";
	cin >> ticket;
	int n1 = (ticket / 100000) % 10;
	int n2 = (ticket / 10000) % 10;
	int n3 = (ticket / 1000) % 10;
	int n4 = (ticket / 100) % 10;
	int n5 = (ticket / 10) % 10;
	int n6 = ticket % 10;

	if (n1 + n2 + n3 == n4 + n5 + n6) {
		cout << "This ticket is lucky";
	}
	else {
		cout << "This ticket is usual";
	}

	int month;			//Task5
	int year;
	int day;
	cout << "Enter a year: ";
	cin >> year;
	cout << "Enter a month: ";
	cin >> month;
	cout << "Enter a day: ";
	cin >> day;

	if (month == 12 && day == 31) {								
		cout << "Date = " << "01.01." << year + 1 << endl;
	}
	else if (year % 4 == 0 && month == 2 && day == 28) {		
		cout << "Date = " << day + 1 << ".0" << month << "." << year << endl;
	}
	else if (year % 4 == 0 && month == 2 && day == 29) {
		cout << "01." << month + 1 << "." << year << endl;
	}
	else if (year % 4 != 0 && month == 2 && day == 28) {
		cout << "01.0" << month + 1 << "." << year << endl;
	}
	else if (year % 4 != 0 && month == 2 && day == 29) {
		cout << "Error date";
	}
	else if (day == 31) {
		cout << "Date = 01." << month + 1 << "." << year;
	}
	else if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
		cout << "Date = " << day + 1 << "." << month << "." << year << endl;
	}
	else {
		cout << "Error date";
	}
}