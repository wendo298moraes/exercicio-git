#include <windows.h>
#include <stdio.h>

// Notas simplificadas (em Hz)
#define E5 659
#define F5s 740  // F#5
#define G5 784
#define A5 880
#define B5 988
#define C6 1047
#define D6 1175
#define REST 0

// Durações
#define EIGHTH 200
#define QUARTER 400
#define HALF 600
#define PAUSE 30

void tocar(int freq, int dur) {
    if (freq > 0)
        Beep(freq, dur);
    else
        Sleep(dur);
    Sleep(PAUSE);
}

int main() {
    printf("Tocando 'Harry Potter - Hedwig's Theme'...\n");

    // Primeira frase musical
    tocar(E5, QUARTER);
    tocar(G5, QUARTER);
    tocar(F5s, QUARTER);
    tocar(E5, QUARTER);
    tocar(B5, QUARTER);
    tocar(A5, QUARTER);
    tocar(F5s, QUARTER);
    tocar(G5, QUARTER);
    tocar(E5, HALF);

    printf("Fim da introdução.\n");
    return 0;
}
