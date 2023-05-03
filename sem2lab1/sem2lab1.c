#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
 
using namespace std;
 
char fileName[] = "e:\\txt.txt";
 
void readFile()
{
    ifstream fileIn;
    fileIn.open(fileName);
    char* tmpStr = new char[1000];
    char* tmp = new char[500];
    tmpStr[0]=0;
    bool comma = false;
    while(fileIn >> tmp)
    {           
        strcat(tmpStr, tmp);
        strcat(tmpStr, " ");
        if(tmp[strlen(tmp)-1] == ',')
            comma = true;
        if(tmp[strlen(tmp)-1] == '.' || tmp[strlen(tmp)-1] == '!' || tmp[strlen(tmp)-1] == '?')
        {
            if(!comma)
                cout << tmpStr;
            tmpStr[0] = 0;
            comma = false;
        }
    }
    
    fileIn.close();
    delete[] tmpStr;
}
 
int main()
{
    setlocale(LC_ALL,"Russian"); 
    system("cls");  
    cout << "Предложения, не содержащие запятых: " << endl << endl;
    readFile();
    getch();
    return 0;
}