#include "stdafx.h"
#include "SimpleVector.h"
#include <iostream>

SimpleVector::SimpleVector() {
	_capacity = 10;
	_numElements = 0;
	_array = new int[_capacity];
};
SimpleVector::SimpleVector(int cap) {
	_capacity = cap;
	_numElements = 0;
	_array = new int[_capacity];
};
SimpleVector::~SimpleVector() {
	delete _array;
};
int SimpleVector::size() {
	return _numElements;
};
void SimpleVector::push_back(int x) {
	_array[_numElements] = x;
	_numElements++;
};
void SimpleVector::reverse() {
	for (int i = 0; i <= (_numElements / 2); i++)
	{
		int temp = 0;
		temp = _array[i];
		_array[i] = _array[_numElements - i - 1];
		_array[_numElements - i - 1] = temp;
	}
};
void SimpleVector::set(int x, int i) {
	if (i >= 0 && i < _numElements) _array[i] = x;
	else std::cout << "Index out of bounds" << std::endl;
};
void SimpleVector::clear() {
	_numElements = 0;
};
int SimpleVector::empty() {
	if (_numElements > 0) return 0;
	else return 1;
};
void SimpleVector::pop_back() {
	_numElements--;
};
int SimpleVector::insert(int x, int i) {
	if (i >= 0 && i < _numElements + 1) {
		push_back(0);
		for (int j = _numElements; j > i; j--) _array[j] = _array[j - 1];
		_array[i] = x;
		return 0;
	}
	else return 1;
};
void SimpleVector::extend() {
	int* _temp;
	_capacity *= 2;
	_temp = new int[_capacity];
	for (int i = 0; i > _numElements; i++)	_temp[i] = _array[i];
	_array = new int[_capacity];
	for (int i = 0; i > _numElements; i++)	_array[i] = _temp[i];
	delete _temp;
};

int& SimpleVector::operator[](int i) {
	if (i < 0 || i >= _numElements) {
		std::cout << "Index out of bounds" << std::endl;
		return _array[0];
	}
	return _array[i];
}

const int& SimpleVector::operator[](int i) const {
	if (i < 0 || i >= _numElements) {
		std::cout << "Index out of bounds" << std::endl;
		return _array[0];
	}
	return _array[i];
}