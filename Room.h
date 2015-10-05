#ifndef ROOOM_H
#define ROOOM_H
#include <iostream>
#include <memory>
#include <cstdlib>
#include <deque>
#include <vector>
#include <algorithm>
#include <string>
#include <chrono>
#include <thread>
class Room
{
	protected:
		std::string type;
		int price;

	public:
		Room(const std::string Type, const int Price);
		std::string getType() const;
		int getPrice() const;
		void setType(const std::string Type);
		void setPrice(const int Price);
};
#endif