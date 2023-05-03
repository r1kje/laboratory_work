#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("test.txt"); // открываем файл для чтения

    if (!file) // если файла не существует или не удаётся его открыть
    {
        cerr << "Не удалось открыть файл!" << endl;
        return 1;
    }

    string line; // переменная для хранения считанной строки

    while (getline(file, line)) // читаем строки из файла
    {
        int n = line.size(); // количество символов в строке
        bool is_sentence = false; // флаг - является ли строка предложением

        for (int i = 0; i < n; i++)
        {
            if (line[i] == '.') // если встретили точку
            {
                is_sentence = true; // считаем строку предложением
                break;
            }
            else if (line[i] == ',') // если встретили запятую
            {
                is_sentence = false; // считаем строку НЕ предложением
                break;
            }
        }

        if (is_sentence) // если строка является предложением
        {
            cout << line << endl; // выводим её на экран
        }
    }

    file.close(); // закрываем файл

    return 0;
}
