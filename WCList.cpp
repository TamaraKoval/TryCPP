#include "WCList.h"

void WCList::push_back(TomaString word, int count) {
    if (!head) {
        head = new WordCounter(word, count);
        length = 1;
    } else {
        WordCounter *p;
        for (p = head; p->next != nullptr; p = p->next);
        p->next = new WordCounter(word, count);
        length++;
    }
}

void WCList::deleteFirst() {
    WordCounter *temp = head;
    head = head->next;
    delete temp;
}

WCList::~WCList() {
    for (int i = 0; i < length; i++) {
        deleteFirst();
    }
}

int WCList::getLength() const {
    return length;
}

void WCList::addCounter(TomaString str, int num) {
    WordCounter *p = head;
    while (p != nullptr) {
        if (p->word == str) {
            p->increaseCounter(num);
            return;
        }
        p = p->next;
    }
    push_back(str, num);
}

std::ostream &operator<<(std::ostream &stream, const WCList &list) {
    WordCounter *p = list.head;
    for (int i = 0; i < list.length; i++) {
        stream << *p << "\n";
        p = p->next;
    }
    return stream;
}
