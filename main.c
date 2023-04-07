//
//  main.c
//  string
//

//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


  int karsilastir(const void* a, const void* b)// Kelimeleri uzunluklarına göre karşılaştırır
  {
  return strlen(*(const char**)a) - strlen(*(const char**)b);
  }

  // En uzun zinciri bulur
  int uzunz(char** kelimeler, int n) {//uzunz = en uzun zincir
  int max_chain = 1;
  int* zincir = calloc(n, sizeof(int)); // Kelimelerin zincir uzunluklarını tutan dizi

  qsort(kelimeler, n, sizeof(char*), karsilastir);// Kelimeleri uzunluklarına göre sıralar

  int k, d;//değişkenler atanır
  // Her kelime için en uzun zinciri bulur
  for (k = 0; k < n; k++) {//k değişkenini n ye kadar birer birer arttırır
    zincir[k] = 1; // Kendi kendine bir zincir oluşturur

    for (d = 0; d < k; d++) {//d değişkenini k ya kadar birer birer arttırır
            
        if (strlen(kelimeler[k]) == strlen(kelimeler[d]) + 1 &&  // Eğer bir önceki kelime, şimdiki kelimenin bir öncülü ise zincir uzunluğunu arttırır
        strstr(kelimeler[k], kelimeler[d]) != NULL) {//"kelimeler[k]" karakter dizisi içinde "kelimeler[d]" alt dizesinin bulunup bulunmadığını kontrol eder.
        zincir[k] = zincir[d] + 1;//"d" kelimesinin zincir uzunluğuna 1 eklenerek, "k" kelimesi için olası yeni bir zincir uzunluğunun hesaplanmasını sağlar.
        break;
            }
    }

  // En uzun zinciri günceller
    if (zincir[k] > max_chain) {
    max_chain = zincir[k];
        }
    }

    free(zincir); // Zincirler dizisini temizle
    return max_chain;
    }

    int main() {
    printf("**  Verilen a,ab,abc,abcd,abcde,abcdef kelime dizisinin en uzun string zinciri nedir ?  **\n\n");
    
    char* kelimeler[] = {"a", "ab", "abc", "abcd", "abcde", "abcdef"};//kelime dizisi verilmiş
    int n = sizeof(kelimeler) / sizeof(char*);

    // En uzun zinciri bul ve ekrana yazdır
    int max_chain = uzunz(kelimeler, n);
    printf("**CEVAP: Bu dizinin en uzun string zinciri: %d'dir.\n", max_chain);

    return 0;
}
