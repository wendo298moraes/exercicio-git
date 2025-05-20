#include <windows.h>
#include <stdio.h>

// Tempo base
#define BPM 120
#define QUARTER (60000 / BPM)
#define EIGHTH (QUARTER / 2)
#define HALF (QUARTER * 2)
#define PAUSE 30

// Notas (oitava central + agudos)
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  784
#define A5  880

void tocar(int freq, int dur) {
    if (freq > 0)
        Beep(freq, dur);
    else
        Sleep(dur);
    Sleep(PAUSE);
}

int main() {
    printf("Tocando trecho de 'Sorriso Resplandecente'...\n");

    // "Quero viver uma aventura com você..."
    tocar(E5, EIGHTH);
    tocar(F5, EIGHTH);
    tocar(G5, QUARTER);
    tocar(G5, EIGHTH);
    tocar(A5, EIGHTH);
    tocar(A5, QUARTER);

    tocar(G5, EIGHTH);
    tocar(F5, EIGHTH);
    tocar(E5, QUARTER);
    tocar(D5, EIGHTH);
    tocar(E5, EIGHTH);
    tocar(F5, QUARTER);

    // "Sorriso resplandecente me deu forças pra lutar"
    tocar(E5, EIGHTH);
    tocar(F5, EIGHTH);
    tocar(G5, QUARTER);
    tocar(G5, EIGHTH);
    tocar(A5, EIGHTH);
    tocar(A5, QUARTER);

    tocar(G5, EIGHTH);
    tocar(F5, EIGHTH);
    tocar(E5, QUARTER);
    tocar(D5, EIGHTH);
    tocar(E5, EIGHTH);
    tocar(F5, HALF);

    return 0;
}
