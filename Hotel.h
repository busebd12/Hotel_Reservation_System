#ifndef HOTEL_H
#define HOTEL_H
#include "Suite.h"
#include "Calendar.cpp"
#include "Receipt.cpp"
class Hotel
{
	private:	
		std::string name;
		std::deque<std::unique_ptr<SingleRoom>> singleRooms;
		std::deque<std::unique_ptr<DoubleRoom>> doubleRooms;
		std::deque<std::unique_ptr<QueenRoom>> queenRooms;
		std::deque<std::unique_ptr<KingRoom>> kingRooms;
		std::deque<std::unique_ptr<Suite>> suiteRooms;
	public:
		Hotel(const std::string Name);
		Hotel();
		void fill();
		void createSingleRooms();
		void createDoubleRooms();
		void createQueenRooms();
		void createKingRooms();
		void createSuiteRooms();
		void removeSingleRoom();
		void removeDoubleRoom();
		void removeQueenRoom();
		void removeKingRoom();
		void removeSuiteRoom();
		bool noMoreSingleRooms();
		bool noMoreDoubleRooms();
		bool noMoreQueenRooms();
		bool noMoreKingRooms();
		bool noMoreSuiteRooms();
		void doRoomReservation(const int NumberOfGuests, Calendar& calendar, Receipt & receipt);
		void doReserveSingleRoom(Calendar & calendar, Receipt & receipt);
		void doReserveDoubleRoom(Calendar & calendar, Receipt & receipt);
		void doReserveQueenRoom(Calendar & calendar, Receipt & receipt);
		void doReserveKingRoom(Calendar & calendar, Receipt & receipt);
		void doReserveSuite(Calendar & calendar, Receipt & receipt);
		void doChooseJanuaryDates(Calendar & calendar, Receipt & receipt);
		void doChooseFebruaryDates(Calendar & calendar, Receipt & receipt);
		void doChooseMarchDates(Calendar & calendar, Receipt & receipt);
		void doChooseAprilDates(Calendar & calendar, Receipt & receipt);
		void doChooseMayDates(Calendar & calendar, Receipt & receipt);
		void doChooseJuneDates(Calendar & calendar, Receipt & receipt);
		void doChooseJulyDates(Calendar & calendar, Receipt & receipt);
		void doChooseAugustDates(Calendar & calendar, Receipt & receipt);
		void doChooseSeptemberDates(Calendar & calendar, Receipt & receipt);
		void doChooseOctoberDates(Calendar & calendar, Receipt & receipt);
		void doChooseNovemberDates(Calendar & calendar, Receipt & receipt);
		void doChooseDecemberDates(Calendar & calendar, Receipt & receipt);
		void doChooseMonth(Calendar& calendar, Receipt& receipt);
		void doCheckOut(Receipt & receipt);
		void doShowReservation(Receipt & Receipt);
		void setName(const std::string Name);
		std::string getName() const;
		deque<unique_ptr<SingleRoom>> const & getSingleRooms() const;
		deque<unique_ptr<DoubleRoom>> const & getDoubleRooms() const;
		deque<unique_ptr<QueenRoom>> const & getQueenRooms() const;
		deque<unique_ptr<KingRoom>> const & getKingRooms() const;
		deque<unique_ptr<Suite>> const & getSuiteRooms() const;
};
#endif