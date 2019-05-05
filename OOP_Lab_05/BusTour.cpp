#include "BusTour.h"


BusTour::BusTour()
{
}


BusTour::~BusTour()
{
}

BusTour::BusTour(string country, int time, int timecountry, double hcoustday, int timeabroad, double dcoustday) : Pass(country, time)
{
	this->timecountry = timecountry;
	this->hcoustday = hcoustday;
	this->timeabroad = timeabroad; 
	this->dcoustday = dcoustday;
}


void BusTour::SetTimecountry(int timecountry)
{
	this->timecountry = timecountry;
}

int BusTour::GetTimecountry() const
{
	return timecountry;
}

void BusTour::SetTimeabroad(int timeabroad)
{
	this->timeabroad = timeabroad;
}

int BusTour::GetTimeabroad() const
{
	return timeabroad;
}

void BusTour::SetHCoustday(double hcoustday)
{
	this->hcoustday = hcoustday;
}

double BusTour::GetHCoustday() const
{
	return hcoustday;
}

void BusTour::SetDCoustday(double dcoustday)
{
	this->dcoustday = dcoustday;
}

double BusTour::GetDCoustday() const
{
	return dcoustday;
}

double BusTour::CoustPass()
{
	double coustpass = (this->timeabroad*this->dcoustday)+(this->hcoustday*this->timecountry);
	return coustpass;
}
