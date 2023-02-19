#include "PhotoGram.h"

int main(int argc, char const *argv[])
{
    // Date d1 = Date(2003, 1, 4);
    // Photo p1 = Photo();
    // Photo p2 = Photo("hello", d1, "conettt");
    // Album a1 = Album("title", "desc");
    // a1.addPhoto(new Photo(p2));
    // a1.removePhoto(0);

    Photo* ph1 = new Photo("title,", Date(), "con");
    Photo* ph2 = new Photo("titl2", Date(), "ca");
    Photo* ph3 = new Photo("ta3", Date(), "a");

    Album* album = new Album("ti", "av");

    album->addPhoto(0, ph1);
    album->addPhoto(0, ph2);
    album->addPhoto(1, ph3);
    album->display();
    // album->addPhoto(ph1);

    delete album;
    delete ph1;
    delete ph2;
    delete ph3;
    return 0;
}
