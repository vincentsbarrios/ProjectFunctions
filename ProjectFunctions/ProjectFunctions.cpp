#include "ProjectFunctions.h"
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

ProjectFunctions::ProjectFunctions(char *n,double x, double y,char *c)
{
	this->name = n;
	longitud = x;
	latitude = y;
	this->country = c;
}

void ProjectFunctions::addAirport()
{
	ofstream airportfile("Airports.txt", ios::app);

	if (!airportfile) {
		cout << "ERROR FILE" << endl;
		return;
	}
	
	airportfile << name << "; " << latitude << "; " << longitud << ";" << country << "; " << endl;

	airportfile.close();
}


