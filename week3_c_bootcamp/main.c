#include <stdio.h>

void main() {
    int a = 2, b = 3;

    printf("a = %i b = %i\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %i b = %i\n", a, b);

    //Exercise 1:
    int arr[] = {1, 2, 3, 4, 5, 6};
    int count = 0;
    
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        count += arr[i];
    }

    printf("%d\n", sizeof(arr));

    printf("%d \n", count);

    //Exercise 2:

    int *start = arr;
    int *end  = arr + sizeof(arr)/sizeof(arr[0])-1;

    while(start < end) {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;

        start++;
        end--;
    };


    for(int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {
        printf("%i ", arr[j]);
    };

    // Exercise 3:
    int max = 0;

    for(int k = 0; k < sizeof(arr)/sizeof(arr[0]); k++) {
        if(arr[k] > max) max = arr[k];
    };

    printf("\n%i\n", max);

    // Exercise 4:
    int shiftArray[5];

    for(int l = 0; l < sizeof(arr)/sizeof(arr[0]); l++) {
        if(l < 4) {
            shiftArray[l+1] = arr[l];
        } else {
            shiftArray[0] = arr[l];
        };
    };

    for(int m = 0; m < sizeof(arr)/sizeof(arr[0]); m++) {
        printf("%i\n", shiftArray[m]);
    };

    // Exercise 5:
    int dupeArr[] = {1, 1, 3, 3, 5};

    for(int a = 0; a < sizeof(dupeArr)/sizeof(dupeArr[0])-1; a++) {
        for(int b = a+1; b < sizeof(dupeArr)/sizeof(dupeArr[0])-1; b++) {
            if(b >= sizeof(dupeArr)/sizeof(dupeArr[0])) {
                b = b - sizeof(dupeArr)/sizeof(dupeArr[0]);
            };
            if(dupeArr[b] == dupeArr[a]) {
                printf("Duplicate found %i\n", dupeArr[b]);
            }; 
        }
    };

    //Exercise 6:
    int concatArr[10];
    memset(concatArr, 0, sizeof(concatArr));

    memcpy(concatArr, dupeArr, sizeof(dupeArr));
    memcpy(concatArr+4, arr, sizeof(arr));

    for(int c = 0; c < sizeof(concatArr)/sizeof(concatArr[0]); c++) {
        printf("%i\n", concatArr[c]);
    };
}