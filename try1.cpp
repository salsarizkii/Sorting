#include <iostream>

int pilihan();

using namespace std;

int maks = 0;
int minimum = 20;

int a = 5;
int b = 7;
int c = 11;

int arrayList[3] = { a, b, c};

int main(void){
    
    int pilUrutan;
    // puts("\n");
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
        printf("%d\n\n", maks);
        pilihan();
    } else if(pilUrutan == 2) {
        minimum = arrayList[0];
        for (int j = 1; j < 3; j++) {
            if (arrayList[j] < minimum) {
                minimum = arrayList[j];
            }
        }
        printf("%d\n\n", minimum);
        pilihan();
    } else if(pilUrutan != 1 || 2){
        puts("\npilihan salah! pilih ulang ");
        main();
    }
    return 0;
}

int pilihan(){
    puts(" [1] pilih ulang");
    puts(" [2] keluar program");
    int pilih;
    printf("pilihanmu -> ");
    scanf("%d", &pilih);
    puts("\n");
    if(pilih == 1){
        main();
    } else if(pilih == 2){
        exit(0);
    } else {
        puts("\npilihan salah! pilih ulang ");
        pilihan();
    }
}