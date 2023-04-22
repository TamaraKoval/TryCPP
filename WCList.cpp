#include "WCList.h"

void WCList::push_back(WordCounter counter) {
    if (!head) {
        head = new WCElem(counter);
        length = 1;
    } else {
        WCElem *p;
        for (p = head; p->next != nullptr; p = p->next);
        p->next = new WCElem(counter);
        length++;
    }
}

std::ostream &operator<<(std::ostream &stream, const WCList &list) {
    WCElem *p = list.head;
    for (int i = 0; i < list.length; i++) {
        stream << p->elem << "\n";
        p = p->next;
    }
    return stream;
}

void WCList::deleteFirst() {
    WCElem *temp = head;
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
