#ifndef RECEIPT_H
#define RECEIPT_H
#include <iostream>
#include <memory>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
class Receipt
{
	private:
		std::string roomType;
		std::string month;
		int roomPrice;
		std::string paymentMethod;
		std::string creditCardType;
		int creditCardNumber;
		std::vector<int> dates;
	public:
		Receipt();
		void setRoomType(const std::string RoomType);
		void clearRoomType();
		void setMonth(const std::string Month);
		void clearMonth();
		void setRoomPrice(const int Price);
		void setCreditCardType(const std::string CreditCardType);
		void setCreditCardNumber(const int CreditCardNumber);
		void setPaymentMethod(std::string PaymentMethod);
		void addDate(const int Data);
		void clearDates();
		std::string getRoomType() const;
		std::string getMonth() const;
		int getRoomPrice() const;
		std::string getCreditCardType() const;
		int getCreditCardNumber() const;
		std::string getPaymentMethod() const;
		auto getDates() const;
};
#endif