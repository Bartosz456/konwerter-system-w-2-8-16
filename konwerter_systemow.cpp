#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int bin2dec(string binarna)
{
    int dziesietna = strtol(binarna.c_str(), NULL, 2);
    return dziesietna;
}
int oct2dec(string osemkowa)
{
    int dziesietna = strtol(osemkowa.c_str(), NULL, 8);

    return dziesietna;
}
int hex2dec(string szestnastkowa)
{
    int dziesietna = strtol(szestnastkowa.c_str(), NULL, 16);
    return dziesietna;
}
int main()
{
    int w, s, p, l, a, m, n;
    string wynik, pusty,liczba;
    cout << "Wybierz opcje:\n1. Konwertuj na system dwojkowy, osemkowy lub szesnastkowy. \n2. Konwertuj na system dziesietny.\n";
    cin >> w;
    system("CLS");
    if (w == 1)
    {
        cout << "Wybierz system:\n1. Dwojkowy\n2. Osemkowy\n3. Szesnastkowy\n4. Liczba we wszystkich systemach\n";
        cin >> s;
        system("CLS");
        cout << "Podaj liczbe:\n";
        cin >> l;
        if (s == 1)
        {
            system("CLS");
            cout << "Twoja liczba to: " << l << "\n";
            while (l) {
                wynik = (l % 2 ? "1" : "0") + wynik;
                l /= 2;
            }
            cout << "Twoja liczba w systemie dwojkowym to: " << wynik;
        }
        if (s == 2)
        {
            system("CLS");
            cout << "Twoja liczba to: " << l << "\n";
            while (l) {

                if (l % 8 == 0) {
                    wynik = "0" + wynik;
                }
                if (l % 8 == 1) {
                    wynik = "1" + wynik;
                }
                if (l % 8 == 2) {
                    wynik = "2" + wynik;
                }
                if (l % 8 == 3) {
                    wynik = "3" + wynik;
                }
                if (l % 8 == 4) {
                    wynik = "4" + wynik;
                }
                if (l % 8 == 5) {
                    wynik = "5" + wynik;
                }
                if (l % 8 == 6) {
                    wynik = "6" + wynik;
                }
                if (l % 8 == 7) {
                    wynik = "7" + wynik;
                }
                l /= 8;
            }
            cout << "Twoja liczba w systemie osemkowym to: " << wynik;
        }
        if (s == 3)
        {
            system("CLS");
            cout << "Twoja liczba to: " << l << "\n";
            while (l) {

                if (l % 16 == 0) {
                    wynik = "0" + wynik;
                }
                if (l % 16 == 1) {
                    wynik = "1" + wynik;
                }
                if (l % 16 == 2) {
                    wynik = "2" + wynik;
                }
                if (l % 16 == 3) {
                    wynik = "3" + wynik;
                }
                if (l % 16 == 4) {
                    wynik = "4" + wynik;
                }
                if (l % 16 == 5) {
                    wynik = "5" + wynik;
                }
                if (l % 16 == 6) {
                    wynik = "6" + wynik;
                }
                if (l % 16 == 7) {
                    wynik = "7" + wynik;
                }
                if (l % 16 == 8) {
                    wynik = "8" + wynik;
                }
                if (l % 16 == 9) {
                    wynik = "9" + wynik;
                }
                if (l % 16 == 10) {
                    wynik = "A" + wynik;
                }
                if (l % 16 == 11) {
                    wynik = "B" + wynik;
                }
                if (l % 16 == 12) {
                    wynik = "C" + wynik;
                }
                if (l % 16 == 13) {
                    wynik = "D" + wynik;
                }
                if (l % 16 == 14) {
                    wynik = "E" + wynik;
                }
                if (l % 16 == 15) {
                    wynik = "F" + wynik;
                }
                l /= 16;
            }
            cout << "Twoja liczba w systemie szesnastkowym to: " << wynik;

        }
        if (s == 4)
        {
            cout << "Twoja liczba to: " << l << "\n";
            a = l;
            wynik = pusty;
            while (l) {
                wynik = (l % 2 ? "1" : "0") + wynik;
                l /= 2;
            }
            wynik = pusty;
            l = a;
            cout << "Twoja liczba w systemie dwojkowym to: " << wynik << "\n";
            while (l) {

                if (l % 8 == 0) {
                    wynik = "0" + wynik;
                }
                if (l % 8 == 1) {
                    wynik = "1" + wynik;
                }
                if (l % 8 == 2) {
                    wynik = "2" + wynik;
                }
                if (l % 8 == 3) {
                    wynik = "3" + wynik;
                }
                if (l % 8 == 4) {
                    wynik = "4" + wynik;
                }
                if (l % 8 == 5) {
                    wynik = "5" + wynik;
                }
                if (l % 8 == 6) {
                    wynik = "6" + wynik;
                }
                if (l % 8 == 7) {
                    wynik = "7" + wynik;
                }
                l /= 8;
            }
            cout << "Twoja liczba w systemie osemkowym to: " << wynik << "\n";
            l = a;
            wynik = pusty;
            while (l) {

                if (l % 16 == 0) {
                    wynik = "0" + wynik;
                }
                if (l % 16 == 1) {
                    wynik = "1" + wynik;
                }
                if (l % 16 == 2) {
                    wynik = "2" + wynik;
                }
                if (l % 16 == 3) {
                    wynik = "3" + wynik;
                }
                if (l % 16 == 4) {
                    wynik = "4" + wynik;
                }
                if (l % 16 == 5) {
                    wynik = "5" + wynik;
                }
                if (l % 16 == 6) {
                    wynik = "6" + wynik;
                }
                if (l % 16 == 7) {
                    wynik = "7" + wynik;
                }
                if (l % 16 == 8) {
                    wynik = "8" + wynik;
                }
                if (l % 16 == 9) {
                    wynik = "9" + wynik;
                }
                if (l % 16 == 10) {
                    wynik = "A" + wynik;
                }
                if (l % 16 == 11) {
                    wynik = "B" + wynik;
                }
                if (l % 16 == 12) {
                    wynik = "C" + wynik;
                }
                if (l % 16 == 13) {
                    wynik = "D" + wynik;
                }
                if (l % 16 == 14) {
                    wynik = "E" + wynik;
                }
                if (l % 16 == 15) {
                    wynik = "F" + wynik;
                }
                l /= 16;
            }
            cout << "Twoja liczba w systemie szesnastkowym to: " << wynik;
        }
    }
    if (w == 2)
    {
        cout << "Wybierz system:\n1. Dwojkowy\n2. Osemkowy\n3. Szesnastkowy\n";
        cin >> n;
        system("CLS");

        if (n==1)
        {
            string liczba;
            string zamiana;
            cout << "Podaj liczbe w systemie dwojkowym: " << endl;
            cin >> liczba;
            cout << bin2dec(liczba) << endl;
        }
        if (n==2)
        {
            string liczba;

            cout << "Podaj liczbe w systemie osemkowym: " << endl;
            cin >> liczba;
            cout << oct2dec(liczba) << endl;
            system("pause >nul");
        }
        if (n==3)
        {
            string liczba;
            cout << "Podaj liczbe w systemie szestnastkowym: " << endl;
            cin >> liczba;
            cout << hex2dec(liczba) << endl;
        }
    }
}