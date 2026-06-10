#include <iostream>
using namespace std;
int main()
{
    cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "|| <<  Witaj w grze = kolko-krzyzyk: >>>|||" << endl;
    cout << "||||[ Autorem jest Jakub Jendrzynski ]|||||" << endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout <<endl;


char plansza[3][3];
cout << "plansza";
cout <<endl;
cout <<endl;
int gra = 0;
char ruch = 'x';
int x;
int y;

while (gra == 1);//gra 1 = granie , gra 2 = Xwin , gra 3 = Owin , gra0 = remis
{
    for(int i = 0 ; i < 3 ; i++ )
   {
       for(int j = 0 ; j < 3 ; j++)
       {
           plansza[i][j] = 'p' ;
           cout << plansza[i][j];
       }
       cout <<endl;
    do
    {
    cout <<"podaj gdzie chcesz ruch:";
    cin >> x >> y;
    }while(x>=4&&y>=4&&x<=0&&y>=0&&plansza[x-1][y-1]!='p');

    plansza[x-1][y-1]=ruch;

   }




}
}
