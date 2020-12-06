#include <iostream>
#include "bst.h"

using namespace std;

int main() {
	BST bst;
	int arr[10] = { 7, 4, 9, 1, 6, 8, 0, 3, 5, 2};
	for (int i = 0; i < 10; i++) bst.insert(arr[i]);
	Iterator* iter = bst.create_dft_iterator();
	for (int i = 0; i < 10; i++) {
		cout << iter->next();
		cout << bst.contains(arr[i]) << endl;
	}
	bst.remove(1);
	cout << bst.contains(1);

	return 0;
}