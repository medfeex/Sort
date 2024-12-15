##Sort Program

This program sorts integers and `Person` objects using the merge sort algorithm. It reads data from text files, sorts them, and then writes the sorted data back to new text files.

### Description

The program implements the merge sort algorithm to sort:
- A list of integers stored in `input_int.txt`
- A list of `Person` objects, where each `Person` has a `name` and an `age`, stored in `input_person.txt`

After sorting, the results are written to `output_int.txt` for integers and `output_person.txt` for persons.

### Installation

To use this program, you will need a C++ compiler and `CMake` installed.

### Steps:

1. Clone the repository:
   ```bash
   git clone [https://github.com/medfeex/Sort.git]
2. Navigate to the project directory:
   cd sorting-program
3. Build the project using CMake: 
   mkdir build
   cd build
   cmake ..
   make
   
## Usage:

Prepare the input files:
input_int.txt should contain a list of integers, one per line.
input_person.txt should contain a list of persons, where each person is represented by a name and age separated by a space.

Example content for input_int.txt:
34
2
89
10
5

Example content for input_person.txt:
Alice 30
Bob 25
Charlie 30
Eve 22

Run the program:
./sorting_program

After execution, the sorted data will be written to:
output_int.txt for sorted integers.
output_person.txt for sorted persons (first by age, then by name).
