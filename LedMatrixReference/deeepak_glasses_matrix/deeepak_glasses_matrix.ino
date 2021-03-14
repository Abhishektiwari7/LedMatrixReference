#include <Arduino.h>


const int data1 = 6;  // frist shift register's pins COLUMN 
const int str1 = 4;   // the storge register (latch pin) of the all the three shift registers are connected together 
const int clock1 = 5; //
const int data2 = 3;  // second shift register's pins ROW
const int clock2 = 2; // 
const uint8_t sexy[][24] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x81, 0x81, 0x81, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const int sexy_len = sizeof(sexy)/24-1;

unsigned long t;



void setup()
{
  pinMode(data1,OUTPUT);
  pinMode(str1,OUTPUT);
  pinMode(clock1,OUTPUT);
  pinMode(data2,OUTPUT);
  pinMode(clock2,OUTPUT); 
}

int sup=0;
void loop()
{
  
  for(int e=23; e>=0; e--)      // display loop. 
  {
    byte a = 0;            // writes a 'one' on the 'e'th position of the byte 'a' this is to make a running one in the coloumns as we controll the rows.
    if(e<8)
     bitSet(a,e);     
    if((e>=8)&&(e<16))
    bitSet(a,e-8);
    if((e>=16)&&(e<24))
    bitSet(a,e-16);
    
    
    digitalWrite(str1,LOW);
    shiftOut(data2,clock2,LSBFIRST,~sexy[sup][e]);   //  shifts out the main display array 'd[]' which controlles the rows
    
    if(e<8)
    { 
     shiftOut(data1,clock1,LSBFIRST,a); //  shift the 'walking one' to first shift register
     shiftOut(data1,clock1,LSBFIRST,0);
     shiftOut(data1,clock1,LSBFIRST,0);
    }
    if((e>=8)&&(e<16))
    { 
    
     shiftOut(data1,clock1,LSBFIRST,0); //  shift the 'walking one' to second shift register
     shiftOut(data1,clock1,LSBFIRST,a);
     shiftOut(data1,clock1,LSBFIRST,0);
    }
    if((e>=16)&&(e<24))
    { 
     shiftOut(data1,clock1,LSBFIRST,0); //  shift the 'walking one' to third shift register
     shiftOut(data1,clock1,LSBFIRST,0);
     shiftOut(data1,clock1,LSBFIRST,a);
    }
   
    digitalWrite(str1,HIGH);
  } 
}

