#include <iostream>
using namespace std;

class fVector {
private:
	float* data;
	int size;
	int capacity;
public:
	fVector(int s);
	void erase(int idx);
	~fVector();
	fVector(fVector& vec);
	fVector& operator=(fVector& vec);
	void Input_num();
	void print() const;
	void push_back(float val);
	void set(int idx, float val);
	float get(int idx) const;
	void insert(int idx, float val);
	void swap(int idx1, int idx2);
	friend ostream& operator<< (ostream& out, const fVector& vec);
	friend istream& operator>> (istream& in, fVector& vec);
	float& operator[] (const int index);
	const float operator[] (const int index) const;
};
