#line 1 "C:/Users/ceviana.CATOLICASC/Desktop/6_MCUs/_LAB/CODE/A2.EX2/AULA.c"
#line 12 "C:/Users/ceviana.CATOLICASC/Desktop/6_MCUs/_LAB/CODE/A2.EX2/AULA.c"
void main() {
ADCON1 = 0x06;
CMCON = 7;

TRISA = 0b00000000;
TRISB = 0b00000000;
TRISC = 0b00000000;
TRISD = 0b00000000;
TRISE = 0b00000000;

PORTA = 0b00000000;
PORTB = 0b10101010;
PORTC = 0b00000000;
PORTD = 0b01010101;
PORTE = 0b00000000;
while (1){
PORTB = ~ PORTB;
PORTD = ~ PORTD;
Delay_ms(600);
}
}
