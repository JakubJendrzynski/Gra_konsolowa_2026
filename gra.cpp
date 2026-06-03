#include <iostream>
using namespace std;
int main()
{
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "|| <<  Witaj w grze - symulator zlodzieja: >>>||" << endl;
    cout << "|||||| [ Autorem jest Jakub Jendrzynski ] ||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout <<endl;

    cout << "zamek:"<<endl;
    cout << "    |" <<endl;
    cout << " /  |"<<endl;
    cout << " |  V"<<endl;

    for(int w = 1 ; w <= 8 ; w++)
    {

        for(int k = 1; k <= 7; k++ )
        {
            if(w == 1 || w == 8)
            {
            cout <<"-";
            }
            else if(k== 1 || k == 7)
            {
                cout << "|";
            }
            else
                cout <<"X";

        }
    cout << endl;
    }



}
