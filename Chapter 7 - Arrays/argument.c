# include <stdio.h>
//void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);

int main() {

int arr[6] = {1, 2, 3, 4, 5, 6};
_printNumbers(arr, 6);// or_printNumbers(&arr[0], 6);
return 0;
}

/*void printNumbers(int *arr, int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}*/

void _printNumbers(int arr[], int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}