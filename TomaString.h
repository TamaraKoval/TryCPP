#ifndef KURSOVAYA_TOMASTRING_H
#define KURSOVAYA_TOMASTRING_H

#include <ostream>


const unsigned N = 80;

class TomaString {
    static const char MARK = '@';
    char tomaString[N + 1];
    int curMarkPos;
    char &operator[](unsigned index);
public:
    TomaString() { tomaString[0] = MARK; curMarkPos = 0; }
    TomaString(const char *str);
    int length();
    void append(char ch);
    TomaString toLowerCase();
    bool isOdd();
    bool middleVowel();
    char get(int index);
    TomaString & operator=(const char *str);
    TomaString & operator=(TomaString str);
    bool operator==(TomaString str);
    bool operator>(TomaString str);
    bool operator>=(TomaString str);
    friend std::ostream &operator<<(std::ostream &stream, const TomaString &str);
};




#endif //KURSOVAYA_TOMASTRING_H
