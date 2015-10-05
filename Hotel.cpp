#include "Hotel.h"
using namespace std;

Hotel::Hotel(const string Name):name(Name) {}

Hotel::Hotel() {}

void Hotel::fill()
{
	createSingleRooms();
	createDoubleRooms();
	createQueenRooms();
	createKingRooms();
	createSuiteRooms();
}

void Hotel::createSingleRooms()
{
	int x;
	for(x=0;x<40;++x)
	{
		singleRooms.emplace_back(move(make_unique<SingleRoom>("Single", 120)));
	}
}

void Hotel::createDoubleRooms()
{
	int x;
	for(x=0;x<40;++x)
	{
		doubleRooms.emplace_back(move(make_unique<DoubleRoom>("Double", 170)));
	}
}

void Hotel::createQueenRooms()
{
	int x;
	for(x=0;x<40;++x)
	{
		queenRooms.emplace_back(move(make_unique<QueenRoom>("Queen", 220)));
	}
}

void Hotel::createKingRooms()
{
	int x;
	for(x=0;x<40;++x)
	{
		kingRooms.emplace_back(move(make_unique<KingRoom>("King", 270)));
	}
}

void Hotel::createSuiteRooms()
{
	int x;
	for(x=0;x<40;++x)
	{
		suiteRooms.emplace_back(move(make_unique<Suite>("Suite", 320)));
	}
}

void Hotel::removeSingleRoom()
{
	singleRooms.pop_back();
}

void Hotel::removeDoubleRoom()
{
	doubleRooms.pop_back();
}

void Hotel::removeQueenRoom()
{
	queenRooms.pop_back();
}

void Hotel::removeKingRoom()
{
	kingRooms.pop_back();
}

void Hotel::removeSuiteRoom()
{
	suiteRooms.pop_back();
}

bool Hotel::noMoreSingleRooms()
{
	if(singleRooms.size()==0)
	{
		return true;
	}
	return false;
}

bool Hotel::noMoreDoubleRooms()
{
	if(doubleRooms.size()==0)
	{
		return true;
	}
	return false;
}

bool Hotel::noMoreQueenRooms()
{
	if(queenRooms.size()==0)
	{
		return true;
	}
	return false;
}

bool Hotel::noMoreKingRooms()
{
	if(kingRooms.size()==0)
	{
		return true;
	}
	return false;
}

bool Hotel::noMoreSuiteRooms()
{
	if(suiteRooms.size()==0)
	{
		return true;
	}
	return false;
}

void Hotel::doRoomReservation(const int NumberOfGuests, Calendar & calendar, Receipt & receipt)
{
	int roomChoice, secondRoomChoice;

	string room="";

	bool successfullyChoseRoom=false;

	do
	{
		if(room=="")
		{
			cout << "\n";

			cout << "Ah, I see that " << NumberOfGuests << " person(s) will be staying with us during your visit." << "\n";

			cout << "\n";

			cout << "Please select from the various room options we have to offer:" << "\n";

			cout << "\n";

			cout << "Single room, Double room, Queen room, King room, or our Suite style rooms." << "\n";

			cout << "\n";

			cout << "Press 1 for a Single room, which includes one bed and the rest of your usual hotel amenities." << "\n";

			cout << "\n";

			cout << "Press 2 for a Double room, which includes two beds and the rest of your usual hotel amenities." << "\n";

			cout << "\n";

			cout << "Press 3 for a Queen room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

			cout << "\n";

			cout << "Press 4 for a King room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

			cout << "\n";

			cout << "Press 5 for a Suite style room, which can accomedate three or more people" << "\n";

			cin >> roomChoice;
		}
		else if(room=="single")
		{
			cout << "Terribly sorry, but it appears we have no more Single rooms. Would you like to reserve another type of room?" << "\n";

			cout << "\n";

			cout << "Press 1 for yes or 2 for no." << "\n";

			cin >> secondRoomChoice;

			if(secondRoomChoice==1)
			{
				cout << "\n";

				cout << "Press 2 for a Double room, which includes two beds and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 3 for a Queen room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 4 for a King room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

				cout << "\n";

				cout << "Press 5 for a Suite style room, which can accomedate three or more people" << "\n";

				cin >> roomChoice;
			}
			else
			{
				cout << "We are terribly sorry that we cannot accomedate you! Please come see us again." << "\n";

				exit(0);
			}			
		}
		else if(room=="double")
		{
			cout << "Terribly sorry, but it appears we have no more Double rooms. Would you like to reserve another type of room?" << "\n";

			cout << "\n";

			cout << "Press 1 for yes or 2 for no." << "\n";

			cin >> secondRoomChoice;

			if(secondRoomChoice==1)
			{
				cout << "\n";

				cout << "Press 1 for a Single room, which includes two beds and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 3 for a Queen room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 4 for a King room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

				cout << "\n";

				cout << "Press 5 for a Suite style room, which can accomedate three or more people" << "\n";

				cin >> roomChoice;
			}
			else
			{
				cout << "We are terribly sorry that we cannot accomedate you! Please come see us again." << "\n";

				exit(0);
			}			
		}
		else if(room=="Queen")
		{
			cout << "Terribly sorry, but it appears we have no more Queen rooms. Would you like to reserve another type of room?" << "\n";

			cout << "\n";

			cout << "Press 1 for yes or 2 for no." << "\n";

			cin >> secondRoomChoice;

			if(secondRoomChoice==1)
			{
				cout << "\n";

				cout << "Press 1 for a Single room, which includes two beds and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 2 for a Double room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 4 for a King room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

				cout << "\n";

				cout << "Press 5 for a Suite style room, which can accomedate three or more people" << "\n";

				cin >> roomChoice;
			}
			else
			{
				cout << "We are terribly sorry that we cannot accomedate you! Please come see us again." << "\n";

				exit(0);
			}			
		}
		else if(room=="king")
		{
			cout << "Terribly sorry, but it appears we have no more King rooms. Would you like to reserve another type of room?" << "\n";

			cout << "\n";

			cout << "Press 1 for yes or 2 for no." << "\n";

			cin >> secondRoomChoice;

			if(secondRoomChoice==1)
			{
				cout << "\n";

				cout << "Press 1 for a Single room, which includes two beds and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 2 for a Double room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 3 for a Queen room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

				cout << "\n";

				cout << "Press 5 for a Suite style room, which can accomedate three or more people" << "\n";

				cin >> roomChoice;
			}
			else
			{
				cout << "We are terribly sorry that we cannot accomedate you! Please come see us again." << "\n";

				exit(0);
			}			
		}
		else if(room=="suite")
		{
			cout << "Terribly sorry, but it appears we have no more Souble rooms. Would you like to reserve another type of room?" << "\n";

			cout << "\n";

			cout << "Press 1 for yes or 2 for no." << "\n";

			cin >> secondRoomChoice;

			if(secondRoomChoice==1)
			{
				cout << "\n";

				cout << "Press 1 for a Single room, which includes two beds and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 2 for a Double room, which includes a queen sized bed and the rest of your usual hotel amenities." << "\n";

				cout << "\n";

				cout << "Press 3 for a Queen room, which includes a king sized bed and the rest of your usual hotel amenitites." << "\n";

				cout << "\n";

				cout << "Press 4 for a King style room, which can accomedate three or more people" << "\n";

				cin >> roomChoice;
			}
			else
			{
				cout << "We are terribly sorry that we cannot accomedate you! Please come see us again." << "\n";

				exit(0);
			}			
		}
	
		switch(roomChoice)
		{
			case 1:
				if(noMoreSingleRooms()==true)
				{
					room+="single";

					break;
				}

				receipt.setRoomType("Single");

				receipt.setRoomPrice(120);

				doReserveSingleRoom(calendar, receipt);

				break;
			case 2:
				if(noMoreDoubleRooms()==true)
				{
					room+="double";

					break;
				}

				receipt.setRoomType("Double");

				receipt.setRoomPrice(170);

				doReserveDoubleRoom(calendar, receipt);

				break;
			case 3:
				if(noMoreQueenRooms()==true)
				{
					room+="queen";

					break;
				}

				receipt.setRoomType("Queen");

				receipt.setRoomPrice(220);

				doReserveQueenRoom(calendar, receipt);

				break;
			case 4:
				if(noMoreKingRooms()==true)
				{
					room+="king";

					break;
				}

				receipt.setRoomType("King");

				receipt.setRoomPrice(270);

				doReserveKingRoom(calendar, receipt);

				break;
			case 5:
				if(noMoreSuiteRooms()==true)
				{
					room+="suite";

					break;
				}

				receipt.setRoomType("Suite");

				receipt.setRoomPrice(320);

				doReserveSuite(calendar, receipt);

				break;
			default:
				break;
		}
	}
	while(successfullyChoseRoom==false);
	
}

void Hotel::doReserveSingleRoom(Calendar & calendar, Receipt & receipt)
{
	removeSingleRoom();

	doChooseMonth(calendar, receipt);
}

void Hotel::doReserveDoubleRoom(Calendar & calendar, Receipt & receipt)
{
	removeDoubleRoom();

	doChooseMonth(calendar, receipt);
}

void Hotel::doReserveQueenRoom(Calendar & calendar, Receipt & receipt)
{
	removeQueenRoom();

	doChooseMonth(calendar, receipt);
}

void Hotel::doReserveKingRoom(Calendar & calendar, Receipt & receipt)
{
	removeKingRoom();

	doChooseMonth(calendar, receipt);
}

void Hotel::doReserveSuite(Calendar & calendar, Receipt & receipt)
{
	removeSuiteRoom();

	doChooseMonth(calendar, receipt);
}

void Hotel::doChooseJanuaryDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";	

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " days you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInJanuary(date)==false)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeJanuaryDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "January " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseFebruaryDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInFebruary(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeFebruaryDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "February " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseMarchDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInMarch(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeMarchDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "March " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseAprilDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInApril(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeAprilDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "April " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseMayDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInMay(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeMayDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "May " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}	

void Hotel::doChooseJuneDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInJune(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeJuneDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "June " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseJulyDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInJuly(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeJulyDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "July " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseAugustDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInAugust(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeAugustDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "August " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseSeptemberDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInSeptember(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeSeptemberDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "September " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseOctoberDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInOctober(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeOctoberDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "October " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseNovemberDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInNovember(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeNovemberDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "November " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}	

void Hotel::doChooseDecemberDates(Calendar & calendar, Receipt & receipt)
{
	int lengthOfStay, date, choice;

	int foundDateCount=0;

	bool changeDates;

	bool allDatesFound=false;

	vector<int> datesNotFound;

	do
	{
		if(changeDates==false)
		{
			cout << "Now, please type in the number of days you will be staying with us." << "\n";

			cin >> lengthOfStay;
		}
		else
		{
			cout << "\n";

			std::cout << "Now, please kindly enter the number of days you would like to stay with us." << "\n";

			cin >> lengthOfStay;
		}

		int i;
		for(i=1;i<lengthOfStay+1;++i)
		{
			cout << "\n";

			cout << "Kindly enter date number " << i << " of the " << lengthOfStay << " dates you will be staying with us." << "\n";

			cin >> date;

			if(calendar.dateExistsInDecember(date)==true)
			{
				datesNotFound.emplace_back(date);
			}
			else
			{

				foundDateCount++;

				receipt.addDate(date);

				calendar.removeDecemberDate(date);
			}
		}

		if(foundDateCount!=lengthOfStay)
		{
			cout << "\n";

			cout << "We are sorry, but we were unable to find the room you requested on the following dates:" << "\n";

			for(const auto & date : datesNotFound)
			{
				cout << "December " << date << "\n";
			}

			cout << "\n";

			cout << "Would you like to change the dates of your reservation or cancel your reservation?" << "\n";

			cout << "Press 1 to change the dates for your reservation or 2 to cancel reservation." << "\n";

			cin >> choice;

			if(choice==1)
			{
				changeDates=true;
			}
			else if(choice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else
		{
			cout << "\n";

			cout << "Successfully booked you for the dates you selected!" << "\n";

			allDatesFound=true;
		}
	}
	while(allDatesFound==false);

	cout << "\n";

	doCheckOut(receipt);	
}

void Hotel::doChooseMonth(Calendar& calendar, Receipt& receipt)
{
	cout << "\n";

	int monthChoice, secondMonthChoice;

	bool monthAvailable=false;

	string month="";

	do
	{
		if(month=="")
		{
			cout << "Now that you've chosen your room type, please select the month you will be staying with us." << "\n";

			cout << "\n";

			cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

			cin >> monthChoice;

			cout << "\n";
		}
		else if(month=="January")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again" << "\n";

				exit(0);
			}
		}
		else if(month=="February")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="March")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="April")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="May")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="June")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 7 for July, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="July")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 8 for August, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="August")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 9 for September, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="September")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 10 for October, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="October")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 11 for November, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="November")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, or 12 for December." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}
		}
		else if(month=="December")
		{
			cout << "We are terribly sorry, but it appears we are completely booked in the month of " << month << "." << "\n";

			cout << "Would you like to make a reservation for another month? Press 1 for yes or 2 for no." << "\n";

			cin >>  secondMonthChoice;

			if(secondMonthChoice==1)
			{
				cout << "Please select another month." << "\n";

				cout << "Type 1 for January, 2 for February, 3 for March, 4 for April, 5 for May, 6 for June, 7 for July, 8 for August, 9 for September, 10 for October, or 11 for November." << "\n";

				cin >> monthChoice;
			}
			else if(secondMonthChoice==2)
			{
				cout << "We are terribly sorry that we couldn't accomedate you. Please come see us again." << "\n";

				exit(0);
			}	
		}

		switch(monthChoice)
		{
			case 1:
				if(calendar.isJanuaryFull()==true)
				{
					month+="January";

					break;
				}

				receipt.setMonth("January");

				doChooseJanuaryDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 2:
				if(calendar.isFebruaryFull()==true)
				{
					month+="February";

					break;
				}

				receipt.setMonth("February");

				doChooseFebruaryDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 3:
				if(calendar.isMarchFull()==true)
				{
					month+="March";

					break;
				}

				receipt.setMonth("March");

				doChooseMarchDates(calendar, receipt);

				break;
			case 4:
				if(calendar.isAprilFull()==true)
				{
					month+="April";
				}

				receipt.setMonth("April");

				doChooseJanuaryDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 5:
				if(calendar.isMayFull()==true)
				{
					month+="May";

					break;
				}

				receipt.setMonth("May");

				doChooseMayDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 6:
				if(calendar.isJuneFull()==true)
				{
					month+="June";
					
					break;
				}

				receipt.setMonth("June");

				doChooseJuneDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 7:
				if(calendar.isJulyFull()==true)
				{
					month+="July";

					break;
				}
				
				receipt.setMonth("July");

				doChooseJulyDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 8:
				if(calendar.isAugustFull()==true)
				{
					month+="August";

					break;
				}

				receipt.setMonth("August");

				doChooseAugustDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 9:
				if(calendar.isSeptemberFull()==true)
				{
					month+="September";

					break;
				}

				receipt.setMonth("September");

				doChooseSeptemberDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 10:
				if(calendar.isOctoberFull()==true)
				{
					month+="October";

					break;
				}

				receipt.setMonth("October");

				doChooseOctoberDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 11:
				if(calendar.isNovemberFull()==true)
				{
					month+="November";

					break;
				}

				receipt.setMonth("November");

				doChooseNovemberDates(calendar, receipt);

				monthAvailable=true;

				break;
			case 12:
				if(calendar.isDecemberFull()==true)
				{
					month+="December";

					break;
				}

				receipt.setMonth("December");

				doChooseDecemberDates(calendar, receipt);

				monthAvailable=true;

				break;
		}
	}
	while(monthAvailable==false);
}

void Hotel::doCheckOut(Receipt & receipt)
{
	int creditCardChoice, cardProvider, cardNumber, securityCode;

	cout << "Almost done making your reservation!" << "\n";

	cout << "\n";

	cout << "Now, please choose your payment method:" << "\n";

	cout << "\n";

	do
	{
		cout << "Press 1 for Credit Card or press 2 for Debit Card" << "\n";

		cin >> creditCardChoice;

		switch(creditCardChoice)
		{
			case 1:
				receipt.setPaymentMethod("Credit");

				break;

			case 2:
				receipt.setPaymentMethod("Debit");

				break;

			default:
				cout << "\n";

				cout << "Please select either credit or debit" << "\n";

				break;
		}
	}
	while(creditCardChoice>2);

	cout << "\n";

	do
	{
		cout << "Now, please choose your card provider. We accept the following: Visa, Master Card, American Express, and Capital One." << "\n";

		cout << "Press 1 for Visa, 2 for Master Card, 3 for American Express, or 4 for Capital One" << "\n";

		cin >> cardProvider;

		switch(cardProvider)
		{
			case 1:
				receipt.setCreditCardType("Visa");

				break;
			case 2:
				receipt.setCreditCardType("Master Card");

				break;
			case 3:
				receipt.setCreditCardType("American Express");

				break;
			case 4:
				receipt.setCreditCardType("Capital One");

				break;
			default:
				cout << "\n";

				cout << "Please select either Visa, Master Card, American Express, or Capital One." << "\n";

				cout << "\n";

				break;
		}
	}
	while(cardProvider>4);

	cout << "\n";

	cout << "Now, enter your card number (with no spaces)." << "\n";

	cin >> cardNumber;

	receipt.setCreditCardNumber(cardNumber);

	cout << "\n";

	cout << "Please enter the security code on your card (the three numbers on the back of the card)." << "\n";

	cin >> securityCode;

	cout << "\n";

	cout << "One moment please, processing your request..." << "\n";

	std::this_thread::sleep_for(std::chrono::seconds(1));

	std::cout << "Done!" << "\n";

	std::cout << "\n";

	doShowReservation(receipt);
}

void Hotel::doShowReservation(Receipt & receipt)
{
	int grandTotal=(receipt.getRoomPrice()*receipt.getDates().size());

	cout << "\n"; 

	cout << "Thank you very much for choosing to stay with us!" << "\n";

	cout << "\n";

	cout << "Below, you will find a copy of your reservation for your personal records." << "\n";

	cout << " \t \t \t \t \t Your reservation" << "\n";

	cout << " \t \t \t \t \t ________________" << "\n";

	cout << "\n";

	cout << " \t \t \t \t \t Room type: " << receipt.getRoomType() << "\n";

	cout << "\n";

	cout << " \t \t \t \t \t Price per night: " << receipt.getRoomPrice() << "\n";

	cout << "\n";

	cout << "\t \t \t \t \t Dates for Reservation:" << "\n";

	for(const auto & date : receipt.getDates())
	{
		cout << "\t \t \t \t \t " << receipt.getMonth() << " " << date << "\n";
	}

	cout << "\n";

	cout << " \t \t \t \t \t Payment Type: " << receipt.getPaymentMethod() << "\n";

	cout << "\n";

	cout << "\t \t \t \t \t Card provider:" << receipt.getCreditCardType() << "\n";

	cout << "\n";

	cout << " \t \t \t \t \t Card Number: " << receipt.getCreditCardNumber() << "\n";

	cout << "\n";

	cout << "\t \t \t \t \t Grand Total: " << "$" << grandTotal << "\n";

	cout << "\n";

	cout << "\t \t \t \t \t Once again, thank you very much for choosing to stay with us and we look forward to seeing you on: " << receipt.getMonth() << " " << receipt.getDates()[0] << "\n";

	exit(0);
}

void Hotel::setName(const std::string Name)
{
	name=Name;
}

string Hotel::getName() const
{
	return name;
}

deque<unique_ptr<SingleRoom>> const & Hotel::getSingleRooms() const
{
	return singleRooms;
}

deque<unique_ptr<DoubleRoom>> const & Hotel::getDoubleRooms() const
{
	return doubleRooms;
}

deque<unique_ptr<QueenRoom>> const & Hotel::getQueenRooms() const
{
	return queenRooms;
}

deque<unique_ptr<KingRoom>> const & Hotel::getKingRooms() const
{
	return kingRooms;
}

deque<unique_ptr<Suite>> const & Hotel::getSuiteRooms() const
{
	return suiteRooms;
}