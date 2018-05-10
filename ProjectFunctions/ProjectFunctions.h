#pragma once
#include <iostream>

using namespace std;

class ProjectFunctions
{
public:
	ProjectFunctions(char *,double,double,char *);
	void addAirport();


private:
	char *name;
	double longitud;
	double latitude;
	char *country;
};

