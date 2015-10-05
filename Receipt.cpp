#include "Receipt.h"
using namespace std;

Receipt::Receipt() {}

void Receipt::setRoomType(const string RoomType)
{
	roomType=RoomType;
}

void Receipt::clearRoomType()
{
	roomType="";
}

void Receipt::setMonth(const string Month)
{
	month=Month;
}

void Receipt::clearMonth()
{
	month="";
}

void Receipt::setRoomPrice(const int Price)
{
	roomPrice=Price;
}

void Receipt::setCreditCardType(const string CreditCardType)
{
	creditCardType=CreditCardType;
}

void Receipt::setCreditCardNumber(const int CreditCardNumber)
{
	creditCardNumber=CreditCardNumber;
}

void Receipt::setPaymentMethod(string PaymentMethod)
{
	paymentMethod=PaymentMethod;
}	

void Receipt::addDate(const int Date)
{
	dates.emplace_back(Date);
}

void Receipt::clearDates()
{
	dates.clear();
}
string Receipt::getRoomType() const
{
	return roomType;
}

string Receipt::getMonth() const
{
	return month;
}

int Receipt::getRoomPrice() const
{	
	return roomPrice;
}

string Receipt::getCreditCardType() const
{
	return creditCardType;
}

string Receipt::getPaymentMethod() const
{
	return paymentMethod;
}

int Receipt::getCreditCardNumber() const
{
	return creditCardNumber;
}

auto Receipt::getDates() const
{
	return dates;
}