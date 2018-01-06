#pragma once

class SimpleVector {
private:
	int* _array;
	int _numElements;
	int _capacity;
public:
	SimpleVector();
	SimpleVector(int);
	~SimpleVector();
	int size();
	void push_back(int);
	void reverse();
	void set(int, int);
	void clear();
	int empty();
	void pop_back();
	int insert(int, int);
	void extend();
	int& operator[](int);
	const int& operator[](int) const;
};


/*
*** KEEPING TRACK OF ALL TESTED MEMBERS ***
constructors: Both generate objects with desired/default size [WORKING]
Desctrucor: Deletes array at end of program [WORKING]
size: returns an accurate number of elements in the array [WORKING]
push_back: adds an array to the end of the list [WORKING]
reverse: sets elements in reverse order [WORKING]
set: sets value at index i to x; gives error message if index i is out of bounds [WORKING]
clear: Removes indices of all saved values, effectively clearing the array [WORKING]
empty: Returns true (1) if vector is empty, otherwise returns false (0) [WORKING]
pop_back: removes directory to element from end of list [WORKING]
insert: inserts a value x at index i, all indices after which  are shifted right [WORKING]
extend: Doubles array size [WORKING]
[] operator: overloads default array call [WORKING]
*/