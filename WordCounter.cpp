#include "WordCounter.h"

WordCounter::WordCounter(TomaString str, int num, WordCounter *next) {
    word = str;
    count = num;
    this->next = next;
}

void WordCounter::increaseCounter(int num) {
    if (num > 0) {
        count += num;
    }
}

std::ostream &operator<<(std::ostream &stream, const WordCounter &counter) {
        stream << counter.word << ": " << counter.count;
    return stream;
}
