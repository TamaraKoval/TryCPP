#include "SortedList.h"

void SortedList::deleteFirst() {
    SortedElem *temp = head;
    head = head->next;
    delete temp;
}

SortedList::~SortedList() {
    for (int i = 0; i < length; i++) {
        deleteFirst();
    }
}

bool SortedList::isInList(TomaString str) {
    SortedElem *p;
    for (p = head; p != nullptr; p = p->next) {
        if (p->word == str) {
            return true;
        }
    }
    return false;
}

void SortedList::add(TomaString str) {
    if (!head) {
        head = new SortedElem(str);
        length = 1;
    } else {
        if (isInList(str)) return;
        SortedElem *q, *pr, *p;
        q = new SortedElem(str);
        for (p = head, pr = nullptr; p != nullptr && (str > p->word); pr = p, p = p->next);
        if (pr == nullptr) {
            q->next = head;
            head = q;
            length++;
        } else {
            q->next = p;
            pr->next = q;
            length++;
        }
    }
}

std::ostream &operator<<(std::ostream &stream, const SortedList &list) {
    SortedElem *p = list.head;
    for (int i = 0; i < list.length; i++) {
        stream << *p << "\n";
        p = p->next;
    }
    return stream;
}
