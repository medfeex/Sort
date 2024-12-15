#include "head.h"

int main() {
    vector<int> intArray = readFromFile<int>("input_int.txt");
    mergeSort(intArray, 0, intArray.size() - 1, intComparator);
    writeToFile("output_int.txt", intArray);

    vector<Person> personArray = readPersonsFromFile("input_person.txt");
    mergeSort(personArray, 0, personArray.size() - 1, personComparator);
    writePersonsToFile("output_person.txt", personArray);

    cout << "Sorting is over. Results are put in files." << endl;
    return 0;
}
