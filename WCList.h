#ifndef KURSOVAYA_WCLIST_H
#define KURSOVAYA_WCLIST_H


#include "WCElem.h"

class WCList {
    WCElem *head;
    int length;
public:
    int getLength() const;

public:
    WCList() { head = nullptr; length = 0;}
    ~WCList();
    void push_back(WordCounter counter);
    void deleteFirst();
    friend std::ostream &operator<<(std::ostream &stream, const WCList &list);

};


#endif //KURSOVAYA_WCLIST_H
