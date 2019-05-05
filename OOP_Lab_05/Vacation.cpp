#include "Vacation.h"

Vacation::Vacation()
{
}

Vacation::~Vacation()
{
}

Vacation::Vacation(string country, int time, int coustday, double fare) : Pass(country, time)
{
	this->coustday = coustday;
	this->fare = fare;
}

void Vacation::SetCoust(int coust)
{
	this->coustday = coust;
}

int Vacation::GetCoust() const
{
	return fare;
}

void Vacation::SetFare(double fare)
{
	this->fare = fare;
}

double Vacation::GetFare() const
{
	return fare;
}

double Vacation::CoustPass() 
{
	double a = this->GetTime();
	double coustpass = a*coustday;
	return coustpass;
}


/*double Vacation::FullAmount()
{
	double a = this->GetTime();
	double amount = a*coustday + fare;

	return amount;
}*/

