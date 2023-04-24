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
            cout << "� �� ���﫠, �� �� ���, ���஡�� �� ࠧ" << endl;
            i--;
            cin >> choice;
        }
    }

    if (!i) {
        cout << "�� ��� ��室�� ������⥫쭠� ��⨢�����. �� ᢨ�����!";
    }

    return 0;
}

void printIntro() {
    cout << "���� ����������!" << endl;
    cout << "� �ணࠬ��, ����� 㬥�� �����, ᪮�쪮 ࠧ � ⥪�� ����砥��� ������ ᫮��=)" << endl;
    cout << "� �� ��祬-� 㬥� ���஢��� �� ��䠢��� ����� ᫮��, �᫨ � ��� ���᭠� ��室���� � �।���"
         << endl;
    cout << "��� ࠡ�� � ���� �㤥� �ந�室��� �१ 䠩��:" << endl;
    cout << "���ࢠ ����㧨� � ���� 䠩�" << endl;
    cout << "��⮬ �롥�� ����:" << endl;
    cout << "1. �������� ᫮��" << endl;
    cout << "2. �����஢��� �� ��䠢��� ᫮�� � ����� ������⢮� �㪢 (� ������ ���᭠� � �।���)" << endl;
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
        cout << "�訡�� ������ 䠩��";
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
            cout << "�訡�� ������ 䠩��";
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
        cout << "�訡�� ������ 䠩��";
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
            cout << "�訡�� ������ 䠩��";
        } else {
            fout << list;
        }
    }
}