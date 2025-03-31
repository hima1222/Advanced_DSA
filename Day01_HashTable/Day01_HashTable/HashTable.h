#pragma once
#include <list>
#include <iostream>

using namespace std;

class HashTable
{
private:
	const int size = 10;
	list <int> hTable[10];

public:
	int hash(int key) {
		return key % size;
	}

	void insert(int key) {
		int index = hash(key);
		hTable[index].push_back(key);
	}

	bool search(int key) {
		int index = hash(key);

		for (auto it = hTable[index].begin(); it != hTable[index].end(); it++) {
			if (*it == key) {
				return true;
			}
		}
		return false;
	}

	void display() {
		for (int i = 0; i < size; i++) {
			cout << i << "->";

			for (auto it = hTable[i].begin(); it != hTable[i].end(); it++) {
				cout << *it << "->";
			}
			cout << endl;

		}
	}
};

