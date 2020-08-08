#include <string>
#include <iostream>
using namespace std;

struct time
{
	int h;
	int m;
};

enum janr
{
	artfilm,
	historical,
	kidprogram,
	comercials,
	informprogram
};

struct programs
{
	string programName;
	janr programJanr;
	time programBeginTime;
	time programEndTime;
};

time TimeConstruct(int, int);

programs CreateProgram(string, janr, time, time);
programs P[7];

int main()
{
	time BeginTime, EndTime;

	BeginTime = TimeConstruct(18, 00);
	EndTime = TimeConstruct(19, 30);
	
	P[0] = CreateProgram("History of Ukraine", janr::historical, BeginTime, EndTime );

	BeginTime = TimeConstruct(19, 40);
	EndTime = TimeConstruct(20, 40);

	P[1] = CreateProgram("Survivor", janr::artfilm, BeginTime, EndTime);

	BeginTime = TimeConstruct(19, 40);
	EndTime = TimeConstruct(20, 40);

	P[2] = CreateProgram("John Wick", janr::artfilm, BeginTime, EndTime);

	BeginTime = TimeConstruct(20, 50);
	EndTime = TimeConstruct(22, 00);

	P[3] = CreateProgram("Good Morning", janr::kidprogram, BeginTime, EndTime);

	BeginTime = TimeConstruct(6, 00);
	EndTime = TimeConstruct(7, 30);

	P[4] = CreateProgram("News", janr::informprogram, BeginTime, EndTime);

	BeginTime = TimeConstruct(8, 00);
	EndTime = TimeConstruct(9, 00);

	P[5] = CreateProgram("Good Medicine", janr::comercials, BeginTime, EndTime);

	BeginTime = TimeConstruct(7, 30);
	EndTime = TimeConstruct(8, 00);

	P[6] = CreateProgram("Shrek 2", janr::artfilm, BeginTime, EndTime);

	BeginTime = TimeConstruct(9, 00);
	EndTime = TimeConstruct(10, 30);

	int count = 0;

	for (int i = 0; i < 7; i++)
	{
		if (P[i].programBeginTime.h >= 16 && P[i].programBeginTime.h <= 24 && P[i].programJanr == artfilm)
		{
			count++;
		}
	}

	
	std::cout << "Whole artfilms today: " << count << endl;
}

programs CreateProgram (string name, janr janr, time Begintime, time Endtime )
{
	programs createdProgram;

	createdProgram.programName = name;
	createdProgram.programJanr = janr;
	createdProgram.programBeginTime = Begintime;
	createdProgram.programEndTime = Endtime;

	return createdProgram;
}

time TimeConstruct(int hours, int minutes)
{
	time ctime;
	ctime.h = hours;
	ctime.m = minutes;
	return ctime;
}
