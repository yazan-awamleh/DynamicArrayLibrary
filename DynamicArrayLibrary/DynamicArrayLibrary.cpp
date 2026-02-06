#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> arr(3);

    arr.SetItem(0, 10);
    arr.SetItem(1, 20);
    arr.SetItem(2, 30);
    arr.Print();

    arr.InsertAtBeginning(5);
    arr.InsertAtEnd(40);
    arr.InsertAfter(2, 25);
    arr.InsertBefore(1, 7);
    arr.Print();

    arr.DeleteFirstItem();
    arr.DeleteLastItem();
    arr.DeleteItem(25);
    arr.Print();

    arr.Resize(3);
    arr.Print();

    arr.Reverse();
    arr.Print();

    cout << arr.GetItem(1) << endl;

    arr.Clear();
    cout << (arr.IsEmpty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
