/*
csc 134
M6LAB2 - Arrays, Vectors, and Linked Lists
Thomas Shull
4/24/2024
*/

#include <iostream>
#include <vector>

using namespace std;

// 3 examples
void array_example();
void vector_example();
void linked_lists();



int main(){
    cout << "M6LAB2" << endl;

    array_example();
    vector_example();
    linked_lists();
    return 0;
}

// 3 examples -- full function

void array_example(){
    cout << "Example 1: Array" << endl;
    const int SIZE = 5; //Absolute Max
    int max = 3;         //Current Max
    int nums[SIZE] = {1, 2, 2, 0, 0};
    // add a fourth item
    nums[max] = 3;
    max = max + 1;
    //Print
    for (int i=0; i<max; i++){
        cout << nums[i] << ", ";
    }
    cout << endl;
}

void vector_example(){
    cout << "Example 2: Vector" << endl;
    // requires the #include <vector> 
    vector<int> nums; // an empty vector of integers
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    cout << "Vector contains " << nums.size() << " numbers" << endl;
    //index access works like arrays
    for (int i=0; i<nums.size(); i++){
        cout << nums[i] << ", ";
    }
    cout << endl;
    // or use member access to loop through all items
    for (int num:nums) {
        cout << num << ", ";
    }
    cout << endl;
    cout << "It can hold " << nums.capacity() << " before resizing"  << endl;
}

struct Node{ // in most cases goes up top with function decs
    int num;        // the data
    Node* next;     // pointer to next node
};

void linked_lists(){
    cout << "Example 3: Linked Lists" << endl;
    Node* head = nullptr;
    //now make nodes
    Node first;
    first.num = 1;
    first.next = nullptr; //null pointer -- nowhere

    Node second;
    second.num = 2;
    second.next = nullptr;

    Node third;
    third.num = 3;
    third.next = nullptr;

    // print out the nodes
    cout << "first.num = " << first.num << endl;
    cout << "second.num = " << second.num << endl;
    cout << "third.num = " << third.num << endl;

    // connects nodes 1 & 2
    head = &first; // point to address of first
    first.next = &second; // first points to second

    // connect 2 & 3
    second.next = &third; //second points to third

    // Finally, walk the list and print each item
    cout << "--------------------------------------------------" << endl;
    Node* probe = head; // probe is our temp pointer
    while (probe != nullptr){
        cout << "Next node: " << probe->num << endl;
        probe = probe->next;
    }
    cout << "end of list" << endl;
}