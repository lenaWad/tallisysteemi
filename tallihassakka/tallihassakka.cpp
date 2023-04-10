// tallihassakka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<fstream>
#include <istream>
#include <iostream>
#include<vector>
#include <string>

#include "asukkaat.h"
#include "Heppa.h"
#include "tallikissa.h"
using namespace std;



using namespace std;
int main()
{

    //kutsuu heppaluokan staattista jäsentä: info

    Heppa::info();
    //Tallikissan staattinen jäsen: info
    tallikissa::info();

    

    //Heppaolioiden muodostus

    Heppa Hevo;
    asukkaat* h0 = &Hevo;
    Heppa Hevo1;
    asukkaat* h1 = &Hevo1;
    Heppa Hevo2;
    asukkaat* h2 = &Hevo2;
    Heppa Hevo3;
    asukkaat* h3 = &Hevo3;
    Heppa Hevo4;
    asukkaat* h4 = &Hevo4;

    h0->setNimi("Juuso");

    h1->setNimi("Juho");
    h2->setNimi("Juu");
    h3->setNimi("Haa");
    h4->setNimi("Huu");

    h0->setVuosi(2010);
    h1->setVuosi(2012);
    h2->setVuosi(2014);
    h3->setVuosi(2018);
    h4->setVuosi(2020);

   


    //Taulukkko johon hevosten nimet ovat tallennettu
    string Hevoset[5] = { Hevo.getNimi(), Hevo1.getNimi(), Hevo2.getNimi(),Hevo3.getNimi(),  Hevo4.getNimi() };

    //Hevosten nimet tiedostoon, josta ne myös tulostetaan

    int lkm = sizeof(Hevoset) / sizeof(Hevoset[0]);

    ofstream tiedosto("Hevoset.txt");
    if (tiedosto.is_open())
    {
        for (int i = 0; i < lkm; i++) {
            tiedosto << Hevoset[i] << endl;
        }
        tiedosto.close();
        // cout << "Tallennettu.\n";
    }
    else
    {
        cout << "Nyt meni pieleen.\n";
    }


    ifstream tiedosto_luku("Hevoset.txt");

    if (tiedosto_luku.is_open()) {
        string rivi;
        cout << "\nTallin hevoset ovat:\n";
        while (getline(tiedosto_luku, rivi)) {
            cout << rivi << endl;
        }
        tiedosto_luku.close();
    }
    else {
        cout << "Ei onnistunut.\n";
    }

    
   


    //Tietyn hevosen syntymävuoden tulostus
    int jatkuuko;
    string hevosvalinta;
    cout << "\n\n Haluatko tulostaa jonkun hevosen syntymavuoden? Kylla= 1, Ei =muu kuin 1" << endl;
    cin >> jatkuuko;

    if (jatkuuko == 1)
    {
        cout << "\n Kirjoita hevosen nimi." << endl;
        cin >> hevosvalinta;


        if (hevosvalinta == "Juuso")
        {
            std::cout << "Juuso on syntynyt: " << Hevo.getVuosi() << endl;
        }
        else if (hevosvalinta == "Juho")
        {
            std::cout << "Juho on syntynyt:   " << Hevo1.getVuosi();
        }
        else if (hevosvalinta == "Juu")
        {
            std::cout << "Juu on synytynyt " << Hevo2.getVuosi() << endl;

        }
        else if (hevosvalinta == "Haa")
        {
            cout << "Haa on syntynyt " << Hevo3.getVuosi() << endl;
        }
        else if (hevosvalinta == "Huu")
        {
            cout << "Huu on syntynyt " << Hevo4.getVuosi() << endl;
        }
        else { cout << "Hevosta ei ole" << endl; }
     
    }
    else {
        cout << "OK" << endl;
    }
    

        cout << "\nKiitos ja tervetuloa uudestaan" << endl;

    

       





   return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


