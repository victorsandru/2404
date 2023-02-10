#include "Album.h"

int main(int argc, char const *argv[])
{
    Album* alb = new Album("hello", "weold!");
    alb->addPhoto(new Photo());
    delete alb;
    cout << "hello";
    return 0;
}
