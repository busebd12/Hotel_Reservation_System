#include "Room.h"
using namespace std;

Room::Room(const string Type, const int Price):type(Type),price(Price) {}

void Room::setType(const string Type)
{
	type=Type;
}

void Room::setPrice(const int Price)
{
	price=Price;
}

string Room::getType() const
{
	return type;
}

int Room::getPrice() const
{
	return price;
}
