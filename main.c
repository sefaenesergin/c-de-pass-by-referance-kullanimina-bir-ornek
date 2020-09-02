//SEFA ENES ERGİN-sefaenesergin@gmail.com
//pass by referance kullanımına diziler dahil edilmiş bir örnek.
#include <stdio.h>
void carp(int y[], int s,int n){ /*bu satırda 'int y[]' yerine 'int *y' de kullanilabilir. Çünkü  dizi demek, 0. elemanın adresi demek...*/
    for(int i=0;i<n;i++){
        y[i]*=s;
    }
}
int main(int argc, const char * argv[]) {
    int dizi[50]; //bellekten 200 baytlık alan ayırdık.
    int n=50;
    for(int i=0;i<n;i++){
        dizi[i]=(rand()%100)+1; /*bu satır ile 1-100 arasında sayılar  random üretilir. Win makine kullanıyorsanız random fonk. için ek kütüphane tanımlamayı unutmayın.*/
        printf("%d : ",dizi[i]);
    }
    
        printf("\n\n çarpımdan sonraki durum \n\n ");
    
    carp(dizi,5,n);/*pointerimizi gönderdik.dizideki bütün elemanları 5 ile çarp dedik.*/
    for(int i=0;i<n;i++)
        printf("%d : ",dizi[i]);
    return 0;
}
