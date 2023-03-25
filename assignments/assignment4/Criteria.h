#ifndef CRITERIA_H
#define CRITERIA_H

#include "Photo.h"

class Criteria {
    public:
        // Criteria(/* args */);
        // ~Criteria();
        virtual bool matches(const Photo& photo) const;
        virtual void print(ostream& os) const;
        friend ostream& operator<<(ostream& os, const Criteria&);
};

class Cat_Criteria : public Criteria {
    private:
        string category;
    public:
        Cat_Criteria(const string&);
        bool matches(const Photo&) const override;
        void print(ostream& os) const override;
};

class Date_Criteria : public Criteria {
    private:
        Date start;
        Date end;
    public:
        Date_Criteria(const Date&, const Date&);
        bool matches(const Photo&) const override;
        void print(ostream&)const override;
};

class CandD_Criteria : public Date_Criteria, public Cat_Criteria {
    public:
        CandD_Criteria(const Date&, const Date&, const string&);
        bool matches(const Photo&) const override;
        void print(ostream&) const override;
};

#endif