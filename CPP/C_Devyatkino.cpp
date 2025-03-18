#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    int capacity;
    vector<int> keys;      // Roll numbers
    vector<string> values; // Gender
    vector<bool> occupied; // To check if slot is occupied

    // Hash function
    int hashFunction(int key) {
        return key % capacity;
    }

public:
    // Constructor
    HashTable(int size) {
        capacity = size;
        keys.resize(size, -1);       // -1 indicates empty slot
        values.resize(size, "");
        occupied.resize(size, false);
    }

    // Insert key-value pair using linear probing
    void insert(int key, string value) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (occupied[index]) {
            index = (index + 1) % capacity;
            if (index == originalIndex) {
                cout << "Hash Table is full. Cannot insert " << key << endl;
                return;
            }
        }
        keys[index] = key;
        values[index] = value;
        occupied[index] = true;
    }

    // Search for a key
    string search(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (occupied[index]) {
            if (keys[index] == key)
                return values[index];
            index = (index + 1) % capacity;
            if (index == originalIndex)
                break;
        }
        return "Not Found";
    }

    // Delete a key
    void remove(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (occupied[index]) {
            if (keys[index] == key) {
                keys[index] = -1;
                values[index] = "";
                occupied[index] = false;
                cout << "Deleted key: " << key << endl;
                return;
            }
            index = (index + 1) % capacity;
            if (index == originalIndex)
                break;
        }
        cout << "Key not found: " << key << endl;
    }

    // Display Hash Table
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < capacity; i++) {
            if (occupied[i])
                cout << "Index " << i << ": " << keys[i] << " -> " << values[i] << endl;
            else
                cout << "Index " << i << ": Empty" << endl;
        }
    }
};

// Function to separate Male and Female into different hash tables
void separateGender(HashTable &source, HashTable &HTM, HashTable &HTF, int size) {
    for (int i = 0; i < size; i++) {
        string gender = source.search(i);
        if (gender == "Male")
            HTM.insert(i, "Male");
        else if (gender == "Female")
            HTF.insert(i, "Female");
    }
}

int main() {
    int size = 10;  // Define size of hash tables

    // Creating Hash Tables
    HashTable HT1(size), HT2(size);
    HashTable HTM(size), HTF(size); // Separate tables for Male & Female

    // Inserting values (Roll No -> Gender)
    HT1.insert(101, "Male");
    HT1.insert(102, "Female");
    HT1.insert(103, "Male");
    HT1.insert(104, "Female");
    HT1.insert(105, "Male");

    // Display Initial Hash Tables
    cout << "HT1:";
    HT1.display();

    cout << "\nSeparating Male and Female into HTM and HTF...";
    separateGender(HT1, HTM, HTF, size);

    // Display Separate Male & Female Hash Tables
    cout << "\nHTM (Males):";
    HTM.display();
    cout << "\nHTF (Females):";
    HTF.display();

    return 0;
}
