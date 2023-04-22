#include "WordCounter.h"

WordCounter::WordCounter(TomaString str, int num) {
    word = str;
    count = num;
}

void WordCounter::increaseCounter(int num) {
    if (num > 0) {
        count += num;
    }
}

void WordCounter::setWord(const TomaString &word) {
    this->word = word;
}

void WordCounter::setCount(int count) {
    this->count = count;
}

WordCounter WordCounter::operator=(WordCounter counter) {
    word = counter.getWord();
    count = counter.getCount();
    return *this;
}

const TomaString &WordCounter::getWord() const {
    return word;
}

int WordCounter::getCount() const {
    return count;
}

std::ostream &operator<<(std::ostream &stream, const WordCounter &counter) {
        stream << "Slovo " << counter.word << " vstrechaetsya " << counter.count << " raz.";
    return stream;
}