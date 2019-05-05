#pragma once
#include "Pass.h"


class Vacation : public Pass
{
private:
	int coustday;
	double fare;

public:
	Vacation();
	Vacation(string country, int time, int coustday, double fare);
	~Vacation();

	void SetCoust(int coust);
	int GetCoust() const;

	void SetFare(double fare);
	double GetFare() const;

	double CoustPass() override;
	//double FullAmount();

};


