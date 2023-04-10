#include "asukkaat.h"
#include <iostream>

using namespace std;

//muodostimet

asukkaat::asukkaat()
{

}

asukkaat::asukkaat(string nimi, int vuosi) 
{
	nimi_ = nimi;
	vuosi_ = vuosi;
}

void asukkaat::setNimi(string nimi)
{
	nimi_ = nimi;
}
string asukkaat::getNimi()
{
	return nimi_;
}
void asukkaat::setVuosi(int vuosi)
{
	vuosi_= vuosi;
}
int asukkaat::getVuosi()
{
	return vuosi_;
}
