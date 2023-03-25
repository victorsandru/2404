#include "Criteria.h"

Cat_Criteria::Cat_Criteria(const string& cat) {
    category = cat;
}

bool Cat_Criteria::matches(const Photo& p) const {
    return p.getCategory() == category;
}

void Cat_Criteria::print(ostream& os) const {
    os << "Criteria Category is: " << category << endl;
}


Date_Criteria::Date_Criteria(const Date& start, const Date& end) : start(start), end(end) {}

bool Date_Criteria::matches(const Photo& p) const {
    return start <= p.getDate() && p.getDate() <= end;
}

void Date_Criteria::print(ostream& os) const {
    os << "Criteria is: Date | Start: " << start << " | End: " << end <<endl;
}

CandD_Criteria::CandD_Criteria(const Date& start, const Date& end, const string& cat) : Date_Criteria(start, end), Cat_Criteria(cat) {}

bool CandD_Criteria::matches(const Photo& p) const {
    return Date_Criteria::matches(p) && Cat_Criteria::matches(p);
}

void CandD_Criteria::print(ostream& os) const {
    Date_Criteria::print(os);
    Cat_Criteria::print(os);
}

ostream& operator<<(ostream& os, const Criteria& c) {
    c.print(os);
    return os;
}