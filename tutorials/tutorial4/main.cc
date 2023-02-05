#include "HeapArrays.h"

int main(int argc, char const *argv[])
{
    Date d1 = Date(2021, 9, 19);
    Photo test = Photo("linus", d1, "test");
    // test.display();

    StackArrays array = StackArrays();
    HeapArrays heap = HeapArrays();
    heap.addPhoto(test);
    Photo* check = heap.getPointerArray();
    // check->display();
    return 0;
}

