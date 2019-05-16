#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;
int buf = 20;

class Timers {
public:
	int alltimes;
	int iterTimer();
	int stepsTimer();
};

class AbsClass{					//Abstractniy class
protected:
	int d1;
	int m1;
	int y1;
	int H1;
	int Min1;
	int *d;
	int *m;
	int *y;
	int *h1;
	int *min1;
	int *h2;
	int *min2;
	int *steps;
	int size;
	int duration;
	virtual void AddPodschet(int, int, int, int, int, int, int, int) = 0;
};

class Pedometer : protected AbsClass, public Timers
{
public:
	// Konstryktory------------------------
	Pedometer();                                 // default
	Pedometer(int, int, int, int, int, int);        // initsializator1
	Pedometer(const Pedometer &);                // ñopy	
	//Destryktor---------------------------
	~Pedometer();

	//Vozvrat starting date and time
	int GetD();
	int GetM();
	int GetY();
	int GetH1();
	int GetMin1();
	int GetInfPodschet(int, int, int, int, int, int, int);       // information about podschet
	double AverStepsMonth(int);                                  // average steps month
	double AverStepsAll();                                       // averege steps all
	int	MaxStepsMonth(int);
	int MaxStepsAll();
	void AddPodschet(int, int, int, int, int, int, int, int);
	int iterTimer();

	//Peregryzka
	Pedometer operator=(const Pedometer&);

	friend ostream & operator << (ostream & stream, const Pedometer &a);
	friend istream & operator >> (istream & stream, Pedometer &a);
};

ostream& operator << (ostream & stream, const Pedometer &a); //Peregryzka vyvoda
istream& operator >> (istream & stream, Pedometer &a);       //Peregryzka vvoda
