#include <iostream>
#include <vector>

using namespace std;

class SortedList {
private:
    vector<int> data;  // A dynamic array (vector) to store the sorted list

public:
    // Insert an item into the sorted list manually maintaining the order
    void insert(int item) {
        if (data.empty()) {
            data.push_back(item);
        } else {
            auto it = data.begin();
            // Find the correct position to insert the item
            while (it != data.end() && *it < item) {
                ++it;
            }
            data.insert(it, item); // Insert item at the correct position
        }
    }

    // Search for an item in the list
    bool search(int item) {
        // Linear search
        for (int i : data) {
            if (i == item) return true;
        }
        return false;
    }

    // Delete an item from the list
    bool remove(int item) {
        for (auto it = data.begin(); it != data.end(); ++it) {
            if (*it == item) {
                data.erase(it);  // If item exists, remove it
                return true;
            }
        }
        return false;  // Item not found
    }

    // Display the sorted list
    void display() const {
        for (int i : data) {
            cout << i << " ";
        }
        cout << endl;
    }

    // For testing purposes - return the internal vector data
    vector<int> get_data() const {
        return data;
    }
};

// Function to run test cases
void runTestCases() {
    SortedList list;
    cout << "Running test cases...\n";

    // Test Case 1: Insert items and check sorted order
    list.insert(5);
    list.insert(3);
    list.insert(8);
    list.insert(1);
    vector<int> expected1 = {1, 3, 5, 8};
    cout << "Test Case 1 - Insert: ";
    list.display();
    cout << (list.get_data() == expected1 ? "Passed" : "Failed") << endl;

    // Test Case 2: Search for an existing item
    int itemToSearch = 3;
    bool searchResult = list.search(itemToSearch);
    cout << "Test Case 2 - Search for 3: ";
    cout << (searchResult ? "Passed" : "Failed") << endl;

    // Test Case 3: Search for a non-existing item
    itemToSearch = 6;
    searchResult = list.search(itemToSearch);
    cout << "Test Case 3 - Search for 6: ";
    cout << (!searchResult ? "Passed" : "Failed") << endl;

    // Test Case 4: Delete an existing item
    int itemToRemove = 5;
    bool removeResult = list.remove(itemToRemove);
    vector<int> expected2 = {1, 3, 8};
    cout << "Test Case 4 - Remove 5: ";
    list.display();
    cout << (removeResult && list.get_data() == expected2 ? "Passed" : "Failed") << endl;

    // Test Case 5: Delete a non-existing item
    itemToRemove = 10;
    removeResult = list.remove(itemToRemove);
    cout << "Test Case 5 - Remove 10 (non-existent): ";
    cout << (!removeResult ? "Passed" : "Failed") << endl;

    // Test Case 6: Insert duplicate values and ensure correct behavior
    list.insert(3);
    vector<int> expected3 = {1, 3, 3, 8};
    cout << "Test Case 6 - Insert duplicate 3: ";
    list.display();
    cout << (list.get_data() == expected3 ? "Passed" : "Failed") << endl;
}

int main() {
    runTestCases();
    return 0;
}
