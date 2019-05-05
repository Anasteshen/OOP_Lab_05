#include "Pass.h"

Pass::Pass()
{
}

Pass::Pass(string country, int time)
{
	this->country = country;
	this->time = time;
}

Pass::~Pass()
{
}

void Pass::SetCountry(string count)
{
	this->country = count;
}

string Pass::GetCountry()
{
	return this->country;
}

void Pass::SetTime(int time)
{
	this->time = time;
}

int Pass::GetTime()
{
	return time;
}
