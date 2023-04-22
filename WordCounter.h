#ifndef KURSOVAYA_WORDCOUNTER_H
#define KURSOVAYA_WORDCOUNTER_H

#include "TomaString.h"

class WordCounter {
    TomaString word;
    int count;
public:
    WordCounter() {}
    WordCounter(TomaString str, int num);
    void increaseCounter(int i);

    const TomaString &getWord() const;

    int getCount() const;

    void setWord(const TomaString &word);
    void setCount(int count);
    WordCounter operator=(WordCounter counter);
    friend std::ostream &operator<<(std::ostream &stream, const WordCounter &counter);
};


#endif //KURSOVAYA_WORDCOUNTER_H
