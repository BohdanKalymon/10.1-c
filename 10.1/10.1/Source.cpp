// Дано текстовий файл t.  
// Вияснити, чи є в цьому файлі такі символи si,j та si,j+1 (і – номер рядка у файлі, j – номер позиції у рядку), що si, j – це кома(“, ”), а si, j + 1 – тире(“–”), та обчислити їх кількість (оформити у вигляді функції).
// C

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using namespace std;
int IsOrNot(char* FileName, int& k)
{
    FILE* f;
    if ((f = fopen(FileName, "r")) == NULL)
    {
        cerr << "Помилка при відкритті файлу.\n";
        exit(1);
    }

    const int LEN = 80;
    char s[LEN];
    size_t l = 0;
    k = 0;
    while (!feof(f))
    {
        fgets(s, LEN - 1, f);
        for (size_t i = 0; i < strlen(s) - 1; i++)
            if (s[i] == ',' && s[i + 1] == '-')
                ++k;
    }
    return k;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char FileName[] = "t.txt";
    int k;
    if (IsOrNot(FileName, k) != 0)
        cout << ",- is found " << k << " times" << endl;
    else
        cout << ",- is not found." << endl;
}
