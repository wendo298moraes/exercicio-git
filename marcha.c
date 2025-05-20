#include <windows.h>
#include <stdio.h>

// === BPM e durações ===
#define BPM 100
#define SEMINIMA_MS (60000 / BPM)
#define COLCHEIA_MS (SEMINIMA_MS / 2)
#define PAUSA 30

// === Notas da 4ª e 5ª oitava ===
#define A4  440
#define A4s 466
#define B4  494
#define C5  523
#define C5s 554
#define D5  587
#define D5s 622
#define F4  349
#define E5  659
#define F5  698
#define F5s 740
#define G5  784
#define G5s 830
#define A5  880
#define G4s 415

void tocar(int freq, int dur) {
    Beep(freq, dur);
    Sleep(PAUSA);
}

int main() {
    printf("Tocando 'The Imperial March' (Star Wars - trecho inicial)...\n");

    // Primeira frase
    tocar(A4, COLCHEIA_MS);
    tocar(A4, COLCHEIA_MS);
    tocar(A4, COLCHEIA_MS);
    tocar(F4, SEMINIMA_MS + COLCHEIA_MS);
    tocar(C5, COLCHEIA_MS);

    tocar(A4, SEMINIMA_MS);
    tocar(F4, COLCHEIA_MS);
    tocar(C5, COLCHEIA_MS);
    tocar(A4, SEMINIMA_MS + COLCHEIA_MS);

    Sleep(SEMINIMA_MS);  // pausa entre frases

    // Segunda frase
    tocar(E5, COLCHEIA_MS);
    tocar(E5, COLCHEIA_MS);
    tocar(E5, COLCHEIA_MS);
    tocar(F5, SEMINIMA_MS + COLCHEIA_MS);
    tocar(C5, COLCHEIA_MS);

    tocar(G4s, SEMINIMA_MS);
    tocar(F4, COLCHEIA_MS);
    tocar(C5, COLCHEIA_MS);
    tocar(A4, SEMINIMA_MS + COLCHEIA_MS);

    return 0;
}
