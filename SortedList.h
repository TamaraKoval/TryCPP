#ifndef KURSOVAYA_SORTEDLIST_H
#define KURSOVAYA_SORTEDLIST_H

#include "SortedElem.h"

class SortedList {
    SortedElem *head;
    int length;
public:
    SortedList() { head = nullptr; length = 0;}
    ~SortedList();
    void deleteFirst();
    bool isInList(TomaString str);
    void add(TomaString str);
    friend std::ostream &operator<<(std::ostream &stream, const SortedList &list);
};


#endif //KURSOVAYA_SORTEDLIST_H
