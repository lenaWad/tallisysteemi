#pragma once
#ifndef ASUKKAAT_H
#define ASUKKAAT_H
#include<iostream>

using namespace std;

//yliluokka:asukkaat m‰‰rittely 

class asukkaat
	//julkiset j‰senet
{   public:
	asukkaat();
	asukkaat(string nimi, int vuosi);

	void setNimi(string nimi);
	string getNimi();
	void setVuosi(int vuosi);
	int getVuosi();
	struct S {
		string nimi;
		int vuosi;
		

	};
	//yksityiset j‰senet:
private:
	string nimi_;
	int vuosi_;
};
#endif //ASUKKAAT_H

