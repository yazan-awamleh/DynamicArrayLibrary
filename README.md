# Dynamic Array (C++)

This project is a simple implementation of a dynamic array in C++ using templates.
It is built from scratch to understand how dynamic memory allocation works internally,
similar to `std::vector`, but in a simplified and educational way

## Features
- Template-based design (support any data type)
- Dynamic memory allocation using pointers
- Copy constructor with deep copy
- Copy assignment disabled
- Insert and delete operations
- Resize and reverse functionality
- Search and access with bounds checking

## Implemented Operations
- Set and get elements.
- Insert at beginning, end, before, and after index.
- Delete first, last, by index, or by value.
- Delete all occurrences of a value.
- Resize array.
- Reverse array.
- Clear array.
- Check if array is empty.

## Example
```cpp
clsDynamicArray<int> arr(3);
arr.SetItem(0, 10);
arr.SetItem(1, 20);
arr.SetItem(2, 30);
arr.InsertAtEnd(40);
arr.Print();
