#include <iostream>
#include "classes.h"
using namespace std;

int main() { 
	int size = 0;
	cout << "Input size of vector: ";
	cin >> size;
	fVector vec1(size);													// конструктор
	/*int idx = 0, idx_insert = 0, idx_erase = 0, idx1 = 0, idx2 = 0, idx_replace = 0;
	float val = 0, val_back = 0, val_insert = 0;
	//vec1.Input_num();
	cin >> vec1;
	const fVector vec2(vec1);
	cout << vec2;
	cout << "\n\nInput idx of element: ";
	cin >> idx;
	cout << "\nInput value of element: ";
	cin >> vec1[idx];
	vec1.print(vec1);*/
	
		/*cout << "\nInput value to push back: ";
		cin >> val_back;													//push_back
		vec1.push_back(val_back);
		vec1.print();

	
	cout << "\n\nInput the index of the item to replace: ";
	cin >> idx_replace;
	cout << "Input value to replace: ";
	cin >> val;														//set
	vec1.set(idx_replace, val);
	vec1.print();

	cout << "\n\nInput the index of the item to get: ";
	cin >> idx;
	cout << "\nvalue on index "<< idx <<": "<< vec1.get(idx) << endl;*/			//get
	

	//fVector vec2(10);
	
	
	//fVector vec2(vec1);			// конструктор копий

	//fVector vec2();
	//vec2 = vec1;
	
	//vec2.Input_num();												// input second vec
	//cout << "\nsecond vector after copy constructor: ";
	vec1.print();
	
	/*vec2.operator=(vec1);		
	vec2.print();							// оператор присваивания
	
	cout << "\n\nInput the index of the item to insert: ";
	cin >> idx_insert;
	cout << "Input value to insert: ";									// insert
	cin >> val_insert;
	vec1.insert(idx_insert, val_insert);
	vec1.print();

	cout << "\n\nInput the index of the item to erase: ";
	cin >> idx_erase;														// erase
	vec1.erase(idx_erase);
	vec1.print();
	

	
	cout << "\n\nInput the first index of the item to swap: ";
	cin >> idx1;															// swap
	cout << "Input the second index of the item to swap: ";
	cin >> idx2;
	vec1.swap(idx1, idx2);
	
	cout << "\n\nResult vector: ";
	vec1.print();			*/										// вывод
	return 0;
}