#include <iostream>
#include "TomaString.h"
#include "WordCounter.h"
#include "WCList.h"

using namespace std;

void printIntro();

int main() {

    WordCounter c1("���", 5);
    c1.increaseCounter(5);
    cout << c1;

/*

    WCList list;
    TomaString str = "���ᨪ";
    list.addCounter(str, 6);
    str = "����誠";
    list.addCounter(str, 8);
    str = "���ᨪ";
    list.addCounter(str, 3);
    cout << list.getLength() << endl;
    cout << list << endl;

*/

    /*printIntro();
    int choice;
    cin >> choice;

    int i = 3;
    while (i) {
        if (choice == 1) {
            cout << "�믮������ �������� 1";
            break;
        } else if (choice == 2) {
            cout << "�믮������ �������� 2";
            break;
        } else {
            cout << "� �� ���﫠, �� �� ���, ���஡�� �� ࠧ" << endl;
            i--;
            cin >> choice;
        }
    }

    if (!i) {
        cout << "�� ��� ��室�� ������⥫쭠� ��⨢�����. �� ᢨ�����!";
    }*/


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
