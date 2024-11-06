
#include <iostream>

using namespace std;

struct Word
{
    char value[20];
    int  count;
};

int find(Word* words, int size, const Word& word)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(words[i].value, word.value) == 0)
        {
            return i;
        }
    }
    return -1;
}

void addWordsArray(Word*& words, int& size, Word word)
{
    Word* newWords = new Word[size + 1];
    for (int i = 0; i < size; i++)
    {
        newWords[i] = words[i];
    }
    newWords[size] = word;
    delete words;
    size++;
    words = newWords;
}

int main()
{
    /*З клавіатури вводяться слова, деякі з них повторюються.Записати їх у
      масив структур, в якому слова не повторюються.Кожна структура —
      елемент масиву — містить інформацію про кількість повторів даного
      слова при вводі.Вивести отриманий масив.*/

    Word* words = nullptr;
    int size = 0;

    while (true)
    {
        cout << "Enter word: ";
        char w[20];
        cin.getline(w, 20);
        Word word;
        strcpy_s(word.value, 20, w);
        word.count = 1;

        int index = find(words, size, word);
        if (index == -1)
        {
            addWordsArray(words, size, word);
        }
        else
        {
            words[index].count++;
        }

        char c;
        cout << "Enter y/n for continue : ";
        cin >> c; 
        cin.ignore();
        if (c == 'n')
        {
            break;
        }
    }
    cout << "--------------------------------" << endl << endl;

    cout << "Words - Count" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << words[i].value << " - " << words[i].count << endl;
    }


    system("pause");

}

