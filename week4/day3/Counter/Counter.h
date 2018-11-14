//
// Created by Judit on 2018.11.14..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter();

    Counter(int startnum);

    void add();

    void add(int number);

    int get() const;

    void reset();

private:
    int _num;
    int _base;

};


#endif //COUNTER_COUNTER_H
