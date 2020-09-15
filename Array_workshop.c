//Array Workshop//

#include <stdio.h>

//Main Function
int main() {

    //The description asks to read 10 integers
    int count = 10;



    int arr[count], i;

    //prompt user to enter numbers
    printf("Enter %d numbers (seperated by a space): ", count);

// taking input of array values from user
    for(i=0; i<count; i++)
        scanf("%d", &arr[i]);


    int inversions = 0, j;

//Loops
    for(i=0; i<count-1; i++) {
        for(j=i+1; j<count; j++) {
            if(arr[j] < arr[i])
                inversions++;
        }
    }

//print the inversions
    printf("The number of inversions are: %d\n", inversions);

//end of main 
    return 0;
}
