#include "WCElem.h"

WCElem::WCElem(WordCounter counter, WCElem *next) {
    elem = counter;
    this->next = next;
}

