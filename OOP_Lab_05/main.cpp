#include<iostream>
#include <string>
#include "Vacation.h"
#include "Pass.h"
#include "BusTour.h"
using namespace std;

void Sort(Pass **pass);
int main()
{
	Pass **pass = new Pass*[4];
	pass[0] = new Vacation("Italy", 10, 130, 10);
	pass[1] = new Vacation("Germany", 14, 200, 20);
	pass[2] = new BusTour("Spain", 20, 10, 150, 10, 20);//int timecountry, double hcoustday, int timeabroad, double dcoustday)
	pass[3] = new BusTour("Ukraine", 20, 10, 170, 20, 30);
	double sum[4];
	for (int i = 0; i < 4; i++)
	{
		sum[i] = pass[i]->CoustPass();
		cout << "Cost of pass " << pass[i]->GetCountry() << " = " << sum[i] << endl;
	}
	cout << endl;
	Sort(pass);
	cout << "";
	for (int i = 0; i < 4; i++)
	{
		cout << "Cost of pass " << pass[i]->GetCountry() << " = " << pass[i]->CoustPass() << endl;
	}
	delete pass[0] ;
	delete pass[1] ;
	delete pass[2] ;
	delete pass[3] ;

	delete[] pass;
	system("pause");
	return 0;
}
void Sort(Pass **pass)
{
	Pass *temp;
	int item;
	for (int i = 1; i < 4; i++)
	{
		temp = pass[i];
		item = i - 1;
		while (item >= 0 && pass[item]->CoustPass() > temp->CoustPass())
		{
			pass[item + 1] = pass[item];
			item--;
		}
		pass[item + 1] = temp;
	}
}