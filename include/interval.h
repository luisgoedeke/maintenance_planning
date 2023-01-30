#ifndef INTERVAL_H
#define INTERVAL_H

class Interval
{
    private:
    char unit;
    int number;

    public:
    Interval(char a, int b);
    ~Interval();

    char get_unit();
    void set_unit(char a);

    int get_number();
    void set_number(int a);

    int get_total_h();
};

#endif