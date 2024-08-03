#pragma once
#include <string>
#include <array>
#include <cstddef>
#include <iostream>

template<class T>
class C_vector{
private:
	T* vector;
	int size;
public:
    C_vector(T* input,int my_size);
	T get_item(int pos);
    void add(T new_item);
    void pop();
	int length() const;
	void erase(int pos);
};

template <class T>
C_vector<T>::C_vector(T* input,int my_size){
	vector = input;
	size = my_size;
}

template <class T>
int C_vector<T>::length() const{
	return size;
}

template <class T>
void C_vector<T>::add(T new_item) {
	vector[size] = new_item;

	size++;
}

template <class T>
T C_vector<T>::get_item(int pos) {
	return vector[pos];
}

template <class T>
void C_vector<T>::pop() {
	
	vector[size-1] = NULL;
	size--;

}

template <class T>
void C_vector<T>::erase(int pos){
	T* new_vec = new T[size -1];
	int j =0;
	for (int i = 0; i < size; i++){
		if (i != pos){
			new_vec[j] = vector[i];
			j++;
		}
	}

	*vector = *new_vec;
	size--;

	delete[] new_vec;
}

