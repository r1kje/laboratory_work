#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file("12345.txt");

    if (!file)
    {
        cerr << "Не удалось открыть файл!" << endl;
        return 1;
    }

    string line;

    while (getline(file, line))
    {
        int n = line.size();
        bool is_sentence = false;

        for (int i = 0; i < n; i++)
        {
            if (line[i] == '.')
            {
                is_sentence = true;
                break;
            }
            else if (line[i] == ',')
            {
                is_sentence = false;
                break;
            }
        }

        if (is_sentence)
        {
            cout << line << endl;
        }
    }

    file.close();

    return 0;
}
