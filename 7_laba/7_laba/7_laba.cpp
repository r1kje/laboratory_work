#include <iostream>
#include <typeinfo>
#include <string>
#include "Figure.h"
using namespace std;

int Figure::count = 0;



int main()
{
    Figure* figures[4];
    figures[0] = new Rectangle{30,50};
    figures[1] = new Circle{ 30 };
    figures[2] = new Penta{ 15,15,15,15,15 };
    figures[3] = new Triangle{ 15,25,6 };
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        figures[i]->Show();
    }
    delete figures[3];
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        figures[i]->Show();
    }
    
    return 0;
}
