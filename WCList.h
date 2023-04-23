#ifndef KURSOVAYA_WCLIST_H
#define KURSOVAYA_WCLIST_H

#include "WordCounter.h"

class WCList {
    WordCounter *head;
    int length;
    void push_back(TomaString word, int count);
public:
    WCList() { head = nullptr; length = 0;}
    ~WCList();
    int getLength() const;
    void deleteFirst();
    void addCounter(TomaString word, int num);
    friend std::ostream &operator<<(std::ostream &stream, const WCList &list);

};


#endif //KURSOVAYA_WCLIST_H
