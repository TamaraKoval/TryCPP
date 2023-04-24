#include "SortedElem.h"

SortedElem::SortedElem(TomaString str, SortedElem *next) {
    word = str;
    this->next = next;
}

std::ostream &operator<<(std::ostream &stream, const SortedElem &elem) {
    stream << elem.word;
    return stream;
}