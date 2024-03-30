#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

#endif // CUSTOMER_HPP
