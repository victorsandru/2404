#include "PhotoGram.h"

int main(int argc, char const *argv[])
{
    Date d1 = Date(2003, 1, 4);
    Photo p1 = Photo();
    Photo p2 = Photo("hello", d1, "conettt");
    Album a1 = Album("title", "desc");
    a1.addPhoto(new Photo(p2));
    a1.removePhoto(0);
    
    // PhotoGram gram = PhotoGram();
    // gram.addAlbum("re", "description");
    // gram.addPhoto("re", p2);
    // gram.removePhoto("re", "hello");
    // gram.displayAlbums();

    return 0;
}
