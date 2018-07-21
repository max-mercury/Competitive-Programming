#include <iostream>
#include <stdlib.h>
using namespace std;


void removeIndex(char array[], size_t length, size_t index)
{
  // Sanity check.
  if(array != 0 && length > 0) {
    for(size_t i = index; i < (length - 1); i++){
      array[i] = array[i + 1];
    }
    array[length-1] = 0;
  }
}


int main()
{
    char keyBuffer[] = {'S','L','U','R','U','B'};
    removeIndex(keyBuffer, sizeof(keyBuffer)/sizeof(keyBuffer[0]), 1);
    
    for (int i =0;i<sizeof(keyBuffer)/sizeof(keyBuffer[0]);i++){
        cout << keyBuffer[i] << endl;
    }
    cin.get();
    cin.get();
}
