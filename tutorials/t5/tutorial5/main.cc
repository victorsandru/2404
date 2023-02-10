#include "Album.h"

int main(int argc, char const *argv[])
{
    Album* alb = new Album("hello", "weold!");
    alb->addPhoto(new Photo());
    alb->addPhoto(new Photo("test", Date(2021, 2, 10), "please"));
    Album* alb1 = new Album(*alb);
    for(int i = 0; i < alb1->size(); ++i) {
        delete alb->removePhoto(0);
    }
    alb1->display();
    delete alb;
    delete alb1;
    return 0;
}
