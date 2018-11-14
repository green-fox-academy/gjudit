//
// Created by Judit on 2018.11.14..
//

#include "Counter.h"

Counter::Counter() {
    _num = 0;
    _base = 0;
}

Counter::Counter(int startnum) {
    _num = startnum;
    _base = startnum;
}

void Counter::add() {
    _num++;
}

void Counter::add(int number) {
    _num += number;
}


int Counter::get() const {
    return _num;
}

void Counter::reset() {
    _num = _base;
}


