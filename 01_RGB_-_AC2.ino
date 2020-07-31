/* SANDRA G MIGUEL  AC2 -IOT*/
const int R = 1;
const int G = 2;
const int B = 3;
const int RR = 4;
const int GG = 5;
const int BB = 6;

void setup(){
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(RR, OUTPUT);
    pinMode(GG, OUTPUT);
    pinMode(BB, OUTPUT);
}
void loop(){
    /* TEMPO0 */
        /* BRANCO */
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
            /* BRANCO */
    digitalWrite(RR, LOW);
    digitalWrite(GG, LOW);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO2 */
            /* VERMELHO */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
                /* BRANCO */
    digitalWrite(RR, LOW);
    digitalWrite(GG, LOW);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO4 */
            /* BRANCO */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
                /* AZUL */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO6 */
            /* VERDE */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
                /* BRANCO */
    digitalWrite(RR, LOW);
    digitalWrite(GG, LOW);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO8 */
            /* BRANCO */
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
                /* LILÁS */
    digitalWrite(RR, LOW);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO10 */
            /* AZUL CLARO */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
            /* BRANCO */
    digitalWrite(RR, LOW);
    digitalWrite(GG, LOW);
    digitalWrite(BB, LOW);
    delay(2000);
      /* TEMPO12 */
            /* BRANCO */
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    /* AMARELO */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
}
