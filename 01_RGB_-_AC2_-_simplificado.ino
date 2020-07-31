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
    /* TEMPO_0 */
    /* BRANCO */
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    /* BRANCO */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, HIGH);
    delay(2000);
    /* TEMPO_2 */
    /* VERMELHO */
    digitalWrite(R, LOW);
    delay(2000);
    /* TEMPO_4 */
    /* BRANCO */
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    /* AZUL */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO_6 */
    /* VERDE */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    /* BRANCO */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, HIGH);
    delay(2000);
    /* TEMPO_8 */
    /* BRANCO */
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    /* LILÁS */
    digitalWrite(RR, LOW);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
    /* TEMPO_10 */
    /* AZUL CLARO */
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    /* BRANCO */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, HIGH);
    delay(2000);
    /* TEMPO_12 */
    /* BRANCO */
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    /* AMARELO */
    digitalWrite(RR, HIGH);
    digitalWrite(GG, HIGH);
    digitalWrite(BB, LOW);
    delay(2000);
}
