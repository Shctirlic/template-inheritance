#include <iostream>
#include <string>

using namespace std;


class ElectroFuel
{
public:
	void info()
	{
		cout << "electric fuel" << endl;
	}

private:

};


template< typename T>
class Vehicle
{
private:
	T fuel;

public:
	void printFuelInfo()
	{
		fuel.info();
	}
};

class electricBicycle : public Vehicle<ElectroFuel>
{
private:
	string name;

public:

	electricBicycle(const char* str) : name(str)
	{

	}

	void printBicycleInfo()
	{
		cout << name << endl;
	}
};

int main()
{
	electricBicycle  bicyckle("qwe");

	bicyckle.printFuelInfo();
	bicyckle.printBicycleInfo();

}

