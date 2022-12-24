#include <iostream>
#include <cassert>
#include "classes.h"
#define MAX_LEN 100
using namespace std;

void input_valid(int size) {
	if (size <= 0 || size > 100) {
		cout << "Incorrect input!";
		exit(1);
	}
}

fVector::fVector(int s) {
	size = s;
	input_valid(size);
	capacity = size;
	data = new float[size];
}

fVector :: ~fVector() {
	delete[] data;
}

fVector::fVector(fVector& vec) {
	this -> size = vec.size;
	capacity = size;
	data = new float[vec.size]; // конструктор копий
	for (int i = 0; i < vec.size; i++)
		data[i] = vec.data[i];
}

fVector& fVector :: operator=(fVector& vec) {
	if (&vec == this) {
		return *this;     
	}
	delete[] data;
	size = vec.size;						
	data = new float[size];
	for (int i = 0; i < size; i++) {
		data[i] = vec.data[i];
	}

	return *this;
}

void fVector::Input_num() {
	for (int i = 0; i < size; i++) {
		cout << "Input " << i + 1 << " number: ";
		cin >> data[i];
	}
}

void fVector::print() const {
	for (int i = 0; i < size; i++) {
		cout << data[i] << "\t";
	}
}

void fVector::set(int idx, float val) {
	if ((idx < 0) || (idx >= size)) {
		cout << "Incorrect input! This index not find";
		exit(1);
	}
	data[idx] = val;
}

float fVector::get(int idx) const{
	if ((idx < 0) || (idx >= size)) {
		cout << "Incorrect input! This index not find";
		exit(1);
	}
	return data[idx];
}

void fVector::push_back(float val){
	if (size == MAX_LEN) {
		cout << "max lenght = 100. Error!";
		exit(1);
	}
	float* tmp = NULL;
	if (capacity == size)
		capacity *= 2;
	tmp = new float[capacity];
	for (int i = 0; i < size; i++)
		tmp[i] = data[i];
	delete[] data;
	data = tmp;
	data[size] = val;
	size++;
}


void fVector::insert(int idx, float val){
	if (size == MAX_LEN) {
		cout << "max lenght = 100. Error!";
		exit(1);
	}
	if (idx < 0 || idx > size - 1) {
		cout << "Incorrect input! This index not find";
		exit(1);
	}
	int j = 0;
	float* tmp = NULL;
	if (capacity == size)
		capacity *= 2;
	tmp = new float[capacity];
	for (int i = 0; i < size; i++)
		tmp[i] = data[i];
	delete[] data;
	data = tmp;
	for (j = size; j > idx; j--)
		data[j] = data[j - 1];
	data[idx] = val;
	size++;
}

void fVector::erase(int idx) {
	if (idx < 0 || idx > size - 1) {
		cout << "Incorrect input! This index not find";
		exit(1);
	}
	int j = 0;
	for (j = idx; j < size - 1; j++)
		data[j] = data[j + 1];
	size--;
}

void fVector::swap(int idx1, int idx2) {
	if (idx1 < 0 || idx1 > size - 1 || idx2 < 0 || idx2 > size - 1) {
		cout << "Incorrect input! This index not find";
		exit(1);
	}
	float tmp = data[idx1];
	data[idx1] = data[idx2];
	data[idx2] = tmp;
}

ostream& operator<< (ostream& out, const fVector& vec)
{
	for (int i = 0; i < vec.size; i++) {
		out << vec.data[i] << "\t";
	}
	return out;
}

istream& operator>> (istream& in, fVector& vec) {
	for (int i = 0; i < vec.size; i++) {
		cout << "Input " << i + 1 << " number: ";
		cin >> vec.data[i];
	}
	return in;
}

float& fVector::operator[] (const int index)
{
	assert(index >= 0 && index < size);
	return data[index];
}

const float fVector::operator[] (const int index) const 
{
	assert(index >= 0 && index < size);
	return data[index];
}





