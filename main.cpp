#include "Hotel.cpp"
#include <iostream>
using namespace std;

int main()
{
	Hotel hotel;

	hotel.fill();

	Calendar calendar;

	calendar.fill();

	Receipt receipt;

	int choice, numberOfGuests;

	//do
	//{
		cout << "Welcome to my Hotel Reservation System!" << "\n";

		cout << "\n";

		cout << "Please follow the following directions in order to book your room." << "\n";

		cout << "\n";

		cout << "Please enter the number of people that will be staying with us:" << "\n";

		cin >> numberOfGuests;

		hotel.doRoomReservation(numberOfGuests, calendar, receipt);
	//}
	//while(choice!=2);
}