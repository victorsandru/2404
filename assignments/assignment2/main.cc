#include "Album.h"

int main(int argc, char const *argv[])
{
    Date d1 = Date(2003, 1, 4);
    Photo p1 = Photo();
    Photo p2 = Photo("hello", d1, "conettt");
    Album a1 = Album("helloWORLD", "nuts");
    a1.add(&p1);
    a1.add(&p2, 0);
    a1.remove(0)->display();
    a1.display();
    // a1.display();
    return 0;
}
