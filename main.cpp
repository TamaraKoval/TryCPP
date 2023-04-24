#include <iostream>
#include <fstream>
#include "TomaString.h"
#include "WCList.h"
#include "SortedList.h"

using namespace std;

void printIntro();

bool isPunct(char ch);

void createWCList();

void createSortedList();

int main() {

    printIntro();
    int choice;
    cin >> choice;

    int i = 3;
    while (i) {
        if (choice == 1) {
            createWCList();
            break;
        } else if (choice == 2) {
            createSortedList();
            break;
        } else {
            cout << "Я не поняла, что вы хотите, попробуйте еще раз" << endl;
            i--;
            cin >> choice;
        }
    }

    if (!i) {
        cout << "От вас исходит подозрительная активность. До свидания!";
    }

    return 0;
}

void printIntro() {
    cout << "Добро пожаловать!" << endl;
    cout << "Я программа, которая умеет считать, сколько раз в тексте встречается каждое слово=)" << endl;
    cout << "А еще зачем-то умею сортировать по алфавиту нечетные слова, если у них гласная находится в середине"
         << endl;
    cout << "Вся работа со мной будет происходить через файлы:" << endl;
    cout << "Сперва загрузите в меня файл" << endl;
    cout << "Потом выберите опцию:" << endl;
    cout << "1. Подсчитать слова" << endl;
    cout << "2. Отсортировать по алфавиту слова с нечетным количеством букв (у которых гласная в середине)" << endl;
}

bool isPunct(char ch) {
    char punctArray[] = " .,!?:;\n\t\r\v";
    for (char p : punctArray) {
        if (ch == p) {
            return true;
        }
    }
    return false;
}

void createWCList() {
    ifstream fin("LoremIpsum.txt", ios::in | ios::binary);
    char ch;
    WCList list;
    if (!fin) {
        cout << "Ошибка открытия файла";
    } else {
        while (!fin.eof()) {
            TomaString str = "";
            while (!fin.eof()) {
                fin.get(ch);
                if (!isPunct(ch) && !fin.eof()) {
                    str.append(ch);
                }
                if (isPunct(ch)) {
                    break;
                }
            }
            if (str.length() > 1) {
                list.addCounter(str.toLowerCase());
            }
        }
        ofstream fout("WordCounter.txt");
        if (!fout) {
            cout << "Ошибка открытия файла";
        } else {
            fout << list;
        }
    }
}

void createSortedList() {
    ifstream fin("LoremIpsum.txt", ios::in | ios::binary);
    char ch;
    SortedList list;
    if (!fin) {
        cout << "Ошибка открытия файла";
    } else {
        while (!fin.eof()) {
            TomaString str;
            while (!fin.eof()) {
                fin.get(ch);
                if (!isPunct(ch) && !fin.eof()) {
                    str.append(ch);
                }
                if (isPunct(ch)) {
                    break;
                }
            }
            if (str.length() > 2) {
                if(str.isOdd() && str.middleVowel()) {
                    list.add(str.toLowerCase());
                }
            }
        }
        ofstream fout("SortedOddWords.txt");
        if (!fout) {
            cout << "Ошибка открытия файла";
        } else {
            fout << list;
        }
    }
}