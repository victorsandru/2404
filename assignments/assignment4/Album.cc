#include "Album.h"

Album::Album(const string& titleName, const string& descriptionName) {
    title = titleName;
    description = descriptionName;
    albumArray = new Array<Photo*>();
}

Album::~Album() {
    delete albumArray;
}

int Album::size() const {
    return albumArray->size();
}

const string& Album::getTitle() const {
    return title;
}

bool Album::equals(const string& titleName) const {
    return titleName == title;
}

bool Album::lessThan(Album& alb) {
    return title < alb.getTitle();
}

void Album::addPhoto(Photo* photoToAdd) {
    return albumArray->add(photoToAdd);
}

Photo* Album::getPhoto(int index) const {
    return (*albumArray)[index];
}

void Album::print(ostream& os) const{
    os << "Album Title: " << title << " | Desc.: " << description << endl;
}

void Album::display(ostream& os) const {
    print(os);
    for(int i = 0; i < albumArray->size(); ++i) {
        (*albumArray)[i]->display(os);
    }
}

ostream& operator<<(ostream& os, const Album& a) {
    os << "Album Title: " << a.title << " | desc.: " << a.description << " | Cotent: " << endl;
    a.display(os);
    return os;
};