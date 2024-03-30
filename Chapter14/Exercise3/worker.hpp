#ifndef WORKER_HPP
#define WORKER_HPP

#include <string>


class Worker
{
private:
    std::string fullname;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const std::string& s, long n) : fullname(s), id(n) {}

    virtual void Set() = 0;
    virtual void Show() const = 0;

    virtual ~Worker() = 0;
};


#endif // WORKER_HPP
