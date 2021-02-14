//
// Created by lior on 14/02/2021.
//

#ifndef MIN_HEAP_HEAP_H
#define MIN_HEAP_HEAP_H
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Comp {
public:
	bool operator()(const T& a, const T& b) const {
		return a < b;
	}
};

template<class T,class Container = vector<T>,class Comparator = Comp<T> >
class Heap {
private:
	Container heap;
	
	T left(int parent) const;
	T right(int parent) const;
	T parent(int child) const;
	void heapifyup(int index);
	void heapifydown(int index);

public:
	Heap(){}
	Heap(const Heap& rhs){ // if container is vector
		int size = rhs.heap.size();
		for (int i = 0; i < size; ++i) {
			this->heap[i] = rhs.heap[i];
		}
	}
	Heap& operator=(const Heap& other){ // if container is vector
		if(this == *other){
			return *this;
		}
		int size = other.heap.size();
		for (int i = 0; i < size; ++i) {
			this->heap[i] = other.heap[i];
		}
		return *this;
	}
	T extractMin() const;
	void displayHeap() const;
	int size() const;
	Heap<T>& operator+=(const T& elem);
	Heap<T>& operator-=(const T& elem);
	bool contains(T& elem) const;
	bool isEmpty() const;
	bool operator==(const Heap& other);
};



template<class T, class Container, class Comparator>
T Heap<T, Container, Comparator>::left(int parent) const {
	int l = 2 * parent + 1;
	if(l < heap.size())
		return l;
	else
		return -1;
}

template<class T, class Container, class Comparator>
T Heap<T, Container, Comparator>::right(int parent) const {
	int r = 2 * parent + 2;
	if(r < heap.size())
		return r;
	else
		return -1;
}

template<class T, class Container, class Comparator>
T Heap<T, Container, Comparator>::parent(int child) const{
	int p = (child - 1)/2;
	if(child == 0)
		return -1;
	else
		return p;
}

template<class T, class Container, class Comparator>
void Heap<T, Container, Comparator>::heapifyup(int in) {
	if (in >= 0 && parent(in) >= 0 && heap[parent(in)] > heap[in])
	{
		int temp = heap[in];
		heap[in] = heap[parent(in)];
		heap[parent(in)] = temp;
		heapifyup(parent(in));
	}
}

template<class T, class Container, class Comparator>
void Heap<T, Container, Comparator>::heapifydown(int in) {
	int left_child = left(in);
	int right_child = right(in);
	if (left_child >= 0 && right_child >= 0 && heap[left_child] > heap[right_child])
	{
		left_child = right_child;
	}
	if (left_child > 0)
	{
		int temp = heap[in];
		heap[in] = heap[left_child];
		heap[left_child] = temp;
		heapifydown(left_child);
	}
}





template<class T, class Container, class Comparator>
T Heap<T, Container, Comparator>::extractMin() const{
	if (heap.size() == 0)
	{
		return -1;
	}
	else
		return heap.front();
}

template<class T, class Container, class Comparator>
void Heap<T, Container, Comparator>::displayHeap() const{
	typename Container::iterator it = heap.begin();
	cout<<"Heap elements are: " ;
	while (it != heap.end())
	{
		cout<< *it <<" ";
		it++;
	}
	cout << endl << endl;
}

template<class T, class Container, class Comparator>
int Heap<T, Container, Comparator>::size() const{
	return heap.size();
}

template<class T, class Container, class Comparator>
Heap<T>& Heap<T, Container, Comparator>::operator+=(const T& elem) {
/*	if(contains(elem)){
		return *this;
	}*/
	heap.push_back(elem);
	heapifyup(heap.size() -1);
	return *this;
}

template<class T, class Container, class Comparator>
Heap<T>& Heap<T, Container, Comparator>::operator-=(const T& elem) {
	if (heap.size() == 0)
	{
		cout<<"Heap is Empty"<<endl;
		return *this;
	}
	heap[0] = heap.at(heap.size() - 1);
	heap.pop_back();
	heapifydown(0);
	cout<<"Element Deleted"<<endl;
	return *this;
}

template<class T, class Container, class Comparator>
bool Heap<T, Container, Comparator>::contains(T& elem) const {
	typename Container::iterator it = heap.begin();
	while (it != heap.end())
	{
		if(*it == elem){
			return true;
		}
		it++;
	}
	return false;
}

template<class T, class Container, class Comparator>
bool Heap<T, Container, Comparator>::isEmpty() const {
	return size() == 0;
}

template<class T, class Container, class Comparator>
bool Heap<T, Container, Comparator>::operator==(const Heap& other) {
	if(this->size() != other.size()){
		return false;
	}
	
	typename Container::iterator h1 = heap.begin();
	typename Container::const_iterator h2 = other.heap.begin();
	while (h1 != heap.end())
	{
		if(*h1 != *h2){
			return false;
		}
		h1++;
		h2++;
	}
	
	return true;
}

#endif //MIN_HEAP_HEAP_H
