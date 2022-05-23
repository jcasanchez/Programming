//Linear search

#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6};  // declare array
    int n = 6; // number of elements
    int key = 4; // key to be found

    for(int i=0; i<6; i++){
        if(arr[i] == key){
            printf("The position is %d\n, arr[i]");
        }
    }
}
