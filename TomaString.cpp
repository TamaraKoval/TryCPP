#include "TomaString.h"

TomaString::TomaString(const char *str) {
    int i;
    for(i = 0; str[i]; i++) {
        tomaString[i] = str[i];
    }
    tomaString[i] = MARK;
    curMarkPos = i;

}

int TomaString::length() {
    return curMarkPos;
}

char & TomaString::operator[](unsigned index) {
    if (index < curMarkPos) {
        return tomaString[index];
    } else {
        throw std::out_of_range("there is no char for given index. Bye!");
    }
}

TomaString TomaString::operator=(char *str) {
    int i;
    for (i = 0; str[i] && i < N - 2; i++) {
        tomaString[i] = str[i];
    }
    tomaString[i] = MARK;
    curMarkPos = i;
    return *this;
}

TomaString TomaString::operator=(TomaString str) {
    int i;
    for (i = 0; i < str.length(); i++) {
        tomaString[i] = str[i];
    }
    tomaString[i] = MARK;
    curMarkPos = i;
    return *this;
}

std::ostream &operator<<(std::ostream &stream, const TomaString &str) {
    for (int i = 0; i < str.curMarkPos; i++) {
        stream << str.tomaString[i];
    }
    return stream;
}
