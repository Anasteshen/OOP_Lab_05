#pragma once
#include "Pass.h"

class BusTour : public Pass
{
private:
	int timecountry;
	double hcoustday;
	int timeabroad;
	double dcoustday;

public:
	BusTour();
	BusTour(string country, int time, int timecountry, double hcoustday, int timeabroad, double dcoustday);
	~BusTour();

	void SetTimecountry(int timecountry);
	int  GetTimecountry() const;

	void SetTimeabroad(int timeabroad);
	int  GetTimeabroad() const;

	void SetHCoustday(double hcoustday);
	double GetHCoustday() const;

	void SetDCoustday(double dcoustday);
	double GetDCoustday() const;

	double CoustPass() override;

};

