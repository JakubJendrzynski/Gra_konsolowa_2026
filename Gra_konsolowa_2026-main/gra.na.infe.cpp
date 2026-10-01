#include <iostream>
using namespace std;

// Wyswietlanie planszy
void pokazPlansze(char plansza[3][3])
{
    cout << "\n";
    cout << "     1   2   3\n";
    cout << "   +---+---+---+\n";

    for (int i = 0; i < 3; i++)
    {
        cout << " " << i + 1 << " |";

        for (int j = 0; j < 3; j++)
        {
            cout << " " << plansza[i][j] << " |";
        }

        cout << "\n";
        cout << "   +---+---+---+\n";
    }

    cout << "\n";
}

// Sprawdzanie, czy kto wygra
bool sprawdzWygrana(char plansza[3][3], char gracz)
{
    // Sprawdzanie wierszy
    for (int i = 0; i < 3; i++)
    {
        if (plansza[i][0] == gracz &&
            plansza[i][1] == gracz &&
            plansza[i][2] == gracz)
        {
            return true;
        }
    }

    // Sprawdzanie kolumn
    for (int j = 0; j < 3; j++)
    {
        if (plansza[0][j] == gracz &&
            plansza[1][j] == gracz &&
            plansza[2][j] == gracz)
        {
            return true;
        }
    }

    // Sprawdzanie przekatnej
    if (plansza[0][0] == gracz &&
        plansza[1][1] == gracz &&
        plansza[2][2] == gracz)
    {
        return true;
    }

    // Sprawdzanie drugiej przekatnej
    if (plansza[0][2] == gracz &&
        plansza[1][1] == gracz &&
        plansza[2][0] == gracz)
    {
        return true;
    }

    return false;
}

// Sprawdzanie remisu
bool sprawdzRemis(char plansza[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (plansza[i][j] == ' ')
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    // Tworzenie planszy
    char plansza[3][3] =
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char gracz = 'X';

    int wiersz;
    int kolumna;

    cout << "=============================\n";
    cout << "       KOLKO I KRZYZYK\n";
    cout << "  autor:Jakub Jendrzyñski 2D \n";
    cout << "=============================\n";

    cout << "Gracz 1: X\n";
    cout << "Gracz 2: O\n";

    // Glowna petla gry
    while (true)
    {
        pokazPlansze(plansza);

        cout << "Ruch gracza " << gracz << "\n";

        // Pobieranie ruchu
        cout << "Podaj numer wiersza (1-3): ";
        cin >> wiersz;

        cout << "Podaj numer kolumny (1-3): ";
        cin >> kolumna;

        // Zamiana numerów na indeksy tablicy
        wiersz--;
        kolumna--;

        // Sprawdzanie poprawnoœci ruchu
        if (wiersz < 0 || wiersz > 2 ||
            kolumna < 0 || kolumna > 2)
        {
            cout << "\nNieprawidlowe pole!\n";
            cout << "Wybierz wiersz i kolumne od 1 do 3.\n";
            continue;
        }

        // Sprawdzanie, czy pole jest wolne
        if (plansza[wiersz][kolumna] != ' ')
        {
            cout << "\nTo pole jest juz zajete!\n";
            continue;
        }

        // Wstawienie X lub O
        plansza[wiersz][kolumna] = gracz;

        // Sprawdzenie wygranej
        if (sprawdzWygrana(plansza, gracz))
        {
            pokazPlansze(plansza);

            cout << "=============================\n";
            cout << "     WYGRYWA GRACZ " << gracz << "!\n";
            cout << "=============================\n";

            break;
        }

        // Sprawdzenie remisu
        if (sprawdzRemis(plansza))
        {
            pokazPlansze(plansza);

            cout << "=============================\n";
            cout << "          REMIS!\n";
            cout << "=============================\n";

            break;
        }

        // Zmiana gracza
        if (gracz == 'X')
        {
            gracz = 'O';
        }
        else
        {
            gracz = 'X';
        }
    }

    return 0;
}

