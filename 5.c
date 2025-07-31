//numero piu piccolo divisibile da tutti i numeri da 1 a 10;
#include <stdio.h>

int main() {
    int num = 1;

    while (1) {
        int divisible = 1; //Questa variabile rappresenta il numero che vogliamo testare: “È divisibile per tutti i numeri da 1 a 10?”

        // Controlla se num è divisibile per tutti i numeri da 1 a 10
        for (int i = 1; i <= 20; i++) {
            if (num % i != 0) {
                divisible = 0; // Se anche un solo numero da 1 a 10 non divide num, impostiamo divisible a 0.
                break;
            }
        }

        /*👉 Questa condizione verifica se la variabile divisible è ancora uguale a 1, 
        ovvero se num è divisibile per tutti i numeri da 1 a 20.
	•	Se sì, allora abbiamo trovato il numero che cerchiamo.
	•	Se no, si passa alla riga dopo il blocco if, e si prova con num + 1.
        */
        if (divisible) {
            printf("Il numero più piccolo divisibile da 1 a 20 è: %d\n", num);
            break;
        }

        num++;
        // Se non abbiamo trovato un numero divisibile per tutti, 
        //  aumentiamo num di 1 e ripetiamo il ciclo.
    }

    return 0;
}