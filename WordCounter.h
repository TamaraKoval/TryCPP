#ifndef KURSOVAYA_WORDCOUNTER_H
#define KURSOVAYA_WORDCOUNTER_H

#include "TomaString.h"

class WordCounter {
public:
    TomaString word;
    int count;
    WordCounter *next;
    WordCounter(TomaString str, int num, WordCounter *next = nullptr);
    void increaseCounter(int i);

    friend std::ostream &operator<<(std::ostream &stream, const WordCounter &counter);
};


#endif //KURSOVAYA_WORDCOUNTER_H
