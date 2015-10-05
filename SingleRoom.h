#ifndef SINGLEROOM_H
#define SINGLEROOM_H
#include "Room.cpp"
class SingleRoom : public Room
{
	//new c++11 feature that allows derived class to inherit it's base class(es)'s constructor
	//have to have a compiler that supports c++11 in order to use this
	using Room::Room; 
};
#endif