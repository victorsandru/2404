#include "Photo.h"

Photo::Photo(){
    title = "default title";
    content = "default content";
    category = "null";
    date = Date(1900, 1, 1);
}

Photo::Photo(const string& titleC, const string& categoryC, const Date& dateC, const string& contentC) {
    title = titleC;
    date = dateC;
    content = contentC;
    category = categoryC;
}

Photo::Photo(const Photo& oldPhoto) {
    title = oldPhoto.title;
    date = oldPhoto.date;
    content = oldPhoto.content;
    category = oldPhoto.category;
}

bool Photo::equals(const string& titleName) const {
    return title == titleName;
}

void Photo::print(ostream& os) const {
    os << "Photo Title: " << title << " | Category: " << category <<" | date: " << date << endl;
}

void Photo::display(ostream& os) const {
    print(os);
    os << "Photo content: " << content << endl;
}

const string& Photo::getTitle() const {
    return title;
}

const string& Photo::getCategory() const {
    return category;
}

const string& Photo::getContent() const {
    return content;
}

const Date& Photo::getDate() const {
    return date;
}

ostream& operator<<(ostream& os, const Photo& p) {
    os << "Photo Title: " << p.title << " | Category: " << p.category << " | Content: " << p.content << " | Date: " << p.date << endl;
    return os;
};
