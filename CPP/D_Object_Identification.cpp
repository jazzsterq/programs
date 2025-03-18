#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    int capacity;
    vector<int> keys;      
    vector<string> values; 
    vector<bool> occupied; 

    
    int hashFunction(int key) {
        return key % capacity;
    }

public:
    
    HashTable(int size) {
        capacity = size;
        keys.resize(size, -1);       
        values.resize(size, "");
        occupied.resize(size, false);
    }

    
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

    
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < capacity; i++) {
            if (occupied[i])
                cout << "Index " << i << ": " << keys[i] << " -> " << values[i] << endl;
            else
                cout << "Index " << i << ": Empty" << endl;
        }
    }

    
    vector<pair<int, string>> getAllEntries() {
        vector<pair<int, string>> entries;
        for (int i = 0; i < capacity; i++) {
            if (occupied[i]) {
                entries.push_back({keys[i], values[i]});
            }
        }
        return entries;
    }
};


void separateGender(HashTable &source, HashTable &HTM, HashTable &HTF) {
    vector<pair<int, string>> entries = source.getAllEntries(); 

    for (auto entry : entries) {
        int rollNo = entry.first;
        string gender = entry.second;

        if (gender == "Male")
            HTM.insert(rollNo, "Male");
        else if (gender == "Female")
            HTF.insert(rollNo, "Female");
    }
}

int main() {
    int size = 10;  

    
    HashTable HT1(size), HT2(size);
    HashTable HTM(size), HTF(size); 

    
    HT1.insert(2, "Male");
    HT1.insert(102, "Female");
    HT1.insert(103, "Male");
    HT1.insert(104, "Female");
    HT1.insert(105, "Male");
    HT1.insert(106,"Male");

    HT2.insert(2, "Male");
    HT2.insert(102, "Female");
    HT2.insert(103, "Male");
    HT2.insert(104, "Female");
    HT2.insert(105, "Male");
    HT2.insert(106,"Male");
    HT1.remove(102);
    HT2.remove(102);
    cout << "HT1:";
    HT1.display();

    cout<<endl;
    cout << "HT2:";
    HT2.display();
    cout << "\nSeparating Male and Female into HTM and HTF...";
    separateGender(HT1, HTM, HTF);


    cout << "\nHTM (Males):";
    HTM.display();
    cout << "\nHTF (Females):";
    HTF.display();

    return 0;
}
