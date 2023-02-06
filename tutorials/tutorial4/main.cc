#include "HeapArrays.h"

int main(int argc, char const *argv[])
{
    Date d1 = Date(2021, 9, 19);
    Photo test = Photo("linus", d1, "test");
    // test.display();

    // StackArrays array = StackArrays();
    // array.addPhoto(test);
    // Photo* check = array.getObjectArray();
    // Photo** check = array.getPointerArray();
    // (*check)->display();
    HeapArrays heap = HeapArrays();
    heap.addPhoto(test);
    Photo** check = heap.getPointerArray();
    (*check)->display();
    Photo* checker = heap.getObjectArray();
    checker->display();
    return 0;
}

