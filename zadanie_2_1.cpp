// zadanie 2 matura 23.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <string>
using namespace std;

long dec2bin(int decim) {
    int a = 0;
    string binar = "";
    while (decim > 0) {
        a = decim % 2;
        binar.insert(0, to_string(a));
        decim /= 2;
    }
    return stol(binar);
}

int main()
{
    int n; //dane zadania - liczba dodatnia całkowita
    cin >> n;
    long o = dec2bin(n); //liczba binarna - long int
    int p = 2; //aktualna liczba w bloku
    int r; //aktualna liczba zapisu binarnego
    int b = 0; //wynik - liczba bloków
    while (o > 0)
    {
        r = o % 10;
        if (r != p)
        {
            p = r;
            b++;
        }
        o /= 10;
    }
    cout << b << endl;
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
