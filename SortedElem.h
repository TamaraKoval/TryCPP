#ifndef KURSOVAYA_SORTEDELEM_H
#define KURSOVAYA_SORTEDELEM_H

#include "TomaString.h"

class SortedElem {
public:
    TomaString word;
    SortedElem *next;
    explicit SortedElem(TomaString str, SortedElem *next = nullptr);
    friend std::ostream &operator<<(std::ostream &stream, const SortedElem &elem);
};


#endif //KURSOVAYA_SORTEDELEM_H
