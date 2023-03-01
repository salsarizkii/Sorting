#include <iostream>

using namespace std;

int maks = 0;
int minimum = 20;

int a = 5;
int b = 7;
int c = 11;

int arrayList[3] = { a, b, c};

int main(void){
    
    int pilUrutan;
    puts(" [1] Angka terbesar");
    puts(" [2] Angka terkecil");
    printf("pilihanmu -> ");
    scanf("%d", &pilUrutan);

    if(pilUrutan == 1) {
        for (int i = 0; i < 3; i++) {
            if (arrayList[i] > maks){
                maks = arrayList[i];
            }
        }
        printf("%d", maks);
    } else if(pilUrutan == 2) {
        minimum = arrayList[0];
        for (int j = 1; j < 3; j++) {
            if (arrayList[j] < minimum) {
                minimum = arrayList[j];
            }
        }
        printf("%d", minimum);
    }

    
    return 0;
}