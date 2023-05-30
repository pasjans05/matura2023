// zadanie 2 2 matura 23.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream plik("bin.txt");
ifstream przyklad("bin_przyklad.txt");

int bloki(long long bin)
{
    int p = 2; //aktualna liczba w bloku
    int r; //aktualna liczba zapisu binarnego
    int b = 0; //wynik - liczba bloków
    while (bin > 0)
    {
        r = bin % 10;
        if (r != p)
        {
            p = r;
            b++;
        }
        bin /= 10;
    }
    return b;
}

int bin2dec(long long bin)
{
    int i = 0;
    int p; //aktualna liczba
    int dec = 0;
    while (bin > 0)
    {
        p = bin % 10;
        if (p == 1) dec += pow(2, i);
        i++;
        bin /= 10;
    }
    return dec;
}

int main()
{
    long long int bin;
    int ileB2 = 0;
    for (int i = 0; i < 100; i++)
    {
        //plik >> bin;
        przyklad >> bin;
        if (bloki(bin) <= 2) ileB2++;
    }
    plik.close();
    przyklad.close();
    cout << "2.2 " << ileB2 << endl;
    plik.open("bin.txt");
    przyklad.open("bin_przyklad.txt");
    int max = 0;
    long long maxB;
    int m;
    for (int i = 0; i < 100; i++)
    {
        //plik >> bin;
        przyklad >> bin;
        m = bin2dec(bin);
        //cout << m << "\t" << bin << endl;
        if (m > max)
        {
            max = m;
            maxB = bin;
        }
    }
    cout << "2.3 " << maxB << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
