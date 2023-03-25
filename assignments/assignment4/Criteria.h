#ifndef CRITERIA_H
#define CRITERIA_H

#include "Photo.h"

class Criteria {
    friend ostream& operator<<(ostream& os, const Criteria&);
    public:
        Criteria(){};
        virtual bool matches(const Photo& photo) const = 0;
        virtual void print(ostream& os) const = 0;
};

class Cat_Criteria : public virtual Criteria {
    private:
        string category;
    public:
        Cat_Criteria(const string&);
        bool matches(const Photo&) const;
        void print(ostream& os) const;
};

class Date_Criteria : public virtual Criteria {
    private:
        const Date start;
        const Date end;
    public:
        Date_Criteria(const Date&, const Date&);
        bool matches(const Photo&) const ;
        void print(ostream&) const;
};

class CandD_Criteria : public Date_Criteria, public Cat_Criteria {
    public:
        CandD_Criteria(const Date&, const Date&, const string&);
        bool matches(const Photo&) const;
        void print(ostream&) const;
};

#endif