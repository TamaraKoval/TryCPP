#include <iostream>
#include "TomaString.h"
#include "WordCounter.h"
#include "WCList.h"

using namespace std;

void printIntro();

int main() {



    WCList list;
    list.push_back(str1count);
    list.push_back(str2count);
    cout << list.getLength() << endl;
    cout << list << endl;







    /*printIntro();
    int choice;
    cin >> choice;

    int i = 3;
    while (i) {
        if (choice == 1) {
            cout << "Выполняется инструкция 1";
            break;
        } else if (choice == 2) {
            cout << "Выполняется инструкция 2";
            break;
        } else {
            cout << "Я не поняла, что вы хотите, попробуйте еще раз" << endl;
            i--;
            cin >> choice;
        }
    }

    if (!i) {
        cout << "От вас исходит подозрительная активность. До свидания!";
    }*/


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
