#ifndef KURSOVAYA_WCELEM_H
#define KURSOVAYA_WCELEM_H

#include "TomaString.h"
#include "WordCounter.h"

class WCElem {
public:
    WordCounter elem;
    WCElem *next;
    explicit WCElem(WordCounter counter, WCElem *next = nullptr);
};



#endif //KURSOVAYA_WCELEM_H
