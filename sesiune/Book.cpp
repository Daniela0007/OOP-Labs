#include "Book.h"

Book::Book(int price, int quantity, string title, string author)
{
	this->price = price;
	this->quantity = quantity;
	this->title = title;
	this->author = author;
}

string Book::GetType()
{
	return "Book";
}

int Book::GetQuantity()
{
	return quantity;
}

int Book::GetPrice()
{
	return price;
}

void Book::Print()
{
	string s;
	s.append("(Title=");
	s.append(title);
	s.append(", Author=");
	s.append(author);
	s.append(")");
	std::cout << "Book " << s << " Price=" << price << " Quantity=" << quantity << endl;
}
