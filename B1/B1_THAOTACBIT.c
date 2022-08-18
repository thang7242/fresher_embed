#include <stdio.h>
#include <stdint.h>

#define HIGH 1
#define LOW 0

uint8_t PORTA = 0b00000000;

void digitalWrite(uint8_t Pin, uint8_t status)
{
    if (status == HIGH)
    {
        PORTA |= 0x80>>Pin; //0b00000000|(0b10000000 >> 1) pin 1 = high
        printf("PORTA = %d\n",PORTA);
    }
    else
    {
        PORTA &= ~(0x80>>Pin);
        printf("PORTA = %d\n",PORTA);
    }
}
//0b01000001 & 0b10111111 = 0b00000001 (pin 1 = low, pin 7 = high) giu nguyen trang thai pin 7 chi low pin 1
//0b00000000
int main(int argc, char const *argv[])
{
    digitalWrite(3,HIGH);//0b00010000 16
    digitalWrite(4,HIGH);//0b00011000 24
    digitalWrite(3,LOW); //0b00001000 8
    return 0;
}

