#include <iostream>
#include <vector>

typedef std::vector<int>::iterator intIterator;

void printVector(std::vector<int>* currentVector);
void iterationWhile(std::vector<int>* currentVector);
void iterationFor(std::vector<int>* currentVector);
void rangeFor(std::vector<int>* currentVector);

int main() {
    std::vector<int> vNumbers;
    vNumbers.push_back(1);
    vNumbers.push_back(2);
    vNumbers.push_back(3);
    vNumbers.push_back(4);

    printVector(&vNumbers);
    std::cout << "Size: " << vNumbers.size() << std::endl;
    std::cout << "Size: " << vNumbers.capacity() << std::endl;

    //initialize a vector
    std::vector<int> vNumbers2 {1,3,4,6, 345,56};
    std::cout << "** FOR ITERATION **" << std::endl;
    iterationFor(&vNumbers2);
    std::cout << "** WHILE ITERATION **" << std::endl;
    iterationWhile(&vNumbers2);
    std::cout << "** RANGE FOR **" << std::endl;
    rangeFor(&vNumbers2);
    system("pause");
    return 0;
}

void iterationWhile(std::vector<int>* currentVector) {
    //intIterator it = currentVector->begin();
    auto it = currentVector->begin();
    while(it != currentVector->end()) {
        std::cout << *it << std::endl;
        it++;
    }
}
void iterationFor(std::vector<int>* currentVector) {
    for (auto it = currentVector->begin(); it != currentVector->end(); it++) {
    //for (intIterator it = currentVector->begin(); it != currentVector->end(); it++) {
        std::cout << *it << std::endl;
    }
}

void printVector(std::vector<int>* currentVector) {
    
    std::cout << (*currentVector)[0] << " = " << currentVector->at(0) << std::endl;
    std::cout << (*currentVector)[1] << " = " << currentVector->at(1) << std::endl;
    std::cout << (*currentVector)[2] << " = " << currentVector->at(2) << std::endl;
    std::cout << (*currentVector)[3] << " = " << currentVector->at(3) << std::endl;
}

void rangeFor(std::vector<int>* currentVector) {
    //THIS IS A BAD PRACTICE BECAUSE THE FOR IS CREATING A COPY
    for (int number : *currentVector) {
        std::cout << number << std::endl;
    }

    //THIS IS A GOOD PRACTICE
    for (int& number : *currentVector) {
        std::cout << number << std::endl;
    }

    //THIS IS THE BEST PRACTICE IF IT IS JUST PRINTING THE VALUE
    for (const int& number : *currentVector) {
        std::cout << number << std::endl;
    }
}