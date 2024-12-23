#include "VideoGame.h"

VideoGame::VideoGame(int price, int quantity, string platform, string name)
{
	this->price = price;
	this->quantity = quantity;
	this->platform = platform;
	this->name = name;
}

string VideoGame::GetType()
{
	return "VideoGame";
}

int VideoGame::GetQuantity()
{
	return quantity;
}

int VideoGame::GetPrice()
{
	return price;
}

void VideoGame::Print()
{
	string s;
	s.append("(Platform=");
	s.append(platform);
	s.append(", Name=");
	s.append(name);
	s.append(")");
	std::cout << "VideoGame " << s << " Price=" << price << " Quantity=" << quantity << endl;
}
