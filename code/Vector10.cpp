#include "Vector10.h"

Vector10::Vector10(){
    // constructor, you should set all values in array to zero
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    };

}

Vector10::~Vector10(){
    // You don't need to add anything here
}

// Implement this function first, since all tests use it.
int Vector10::ValueAt(int index){
    // get an index return the value of array at that index
    if(index < 10 && index >= 0) {
        return arr[index];
    }
    return 0;
}

// Implement this function second, since most tests use it.
bool Vector10::PushBack(int value){
    // puts value in the last empty spot of array (back), function returns false if
    // array is already full and true if push was successful
    // data in array is always left alligned. check class video for details
    for (int i = 0; i < 10; i++){
        if (arr[i] == 0) {
            arr[i] = value;
            return true;
        }
    }
    return false;

}

int Vector10::CountEmpty(){
    // this member function returns number of empty spaces left in the array
    int count = 0;
    for (int i = 0; i < 10; i++){
        if (arr[i] == 0) {
            count++;
            
        }
    }
    return count;
}

bool Vector10::Search(int value){
    // this function searches the value in the array and returns if value exists
    // and returns false otherwise
    for (int i = 0; i < 10; i++){
        if (arr[i] == value) {
            return true;
        }

    }
    return false;
}

bool Vector10::Remove(int index){
    // this function removes a value from array. (removal process includes 
    // shifting valid member on its right hand side to the left by one index)
    // if requested index is not in the range of valid data locations then function returns a false otherwise 
    // it removes the value and returns true.
    // check class video for details.
    if(index >= 0 && index < 10 && arr[index] != 0) {
        for(int i = index; i < 9; i++) {
            arr[i] = arr[i+1];
        }
        arr[9] = 0;
        return true;
    }
    return false;
}