#pragma once
#include <string>
using namespace std;

class Pass
{
private:
	string country;
	int time;

public:
	Pass();
	Pass(string country, int time);
	~Pass();

	void SetCountry(string count);
	string GetCountry();

	void SetTime(int time);
	int GetTime();

	virtual double CoustPass()=0;
};
