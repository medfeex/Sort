#include "head.h"

bool intComparator(const int& a, const int& b) {
    return a < b;
}

bool personComparator(const Person& a, const Person& b) {
    if (a.age != b.age)
        return a.age < b.age;
    return a.name < b.name;
}

vector<Person> readPersonsFromFile(const string& filename) {
    ifstream file(filename);
    vector<Person> arr;
    string name;
    int age;
    while (file >> name >> age) {
        arr.push_back({ name, age });
    }
    return arr;
}

void writePersonsToFile(const string& filename, const vector<Person>& arr) {
    ofstream file(filename);
    for (const auto& person : arr) {
        file << person.name << " " << person.age << "\n";
    }
}
