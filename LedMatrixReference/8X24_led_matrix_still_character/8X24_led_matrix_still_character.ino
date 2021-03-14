

const int data1 = 6;  // frist shift register's pins COLUMN 
const int str1 = 4;   // the storge register (latch pin) of the all the three shift registers are connected together 
const int clock1 = 5; //
const int data2 = 3;  // second shift register's pins ROW
const int clock2 = 2; // 

/// BELOW ARE THE REFERENCE ARRAYS FOR APLHABETS, NUMBERS and CHARACTERS.


const int n0[6] = {B11111111, B10000011, B01111101, B01111101, B01111101, B10000011 };     //// NUMBERS
const int n1[6] = {B11111111, B01111111, B01110001, B01101111, B01011111, B00111111 };
const int n2[6] = {B11111111, B10111001, B01110101, B01101101, B01011101, B10111101 };
const int n3[6] = {B11111111, B10111011, B01111101, B01101101, B01101101, B10010011 };
const int n4[6] = {B11111111, B11100111, B11010111, B10110111, B00000001, B11110111 };
const int n5[6] = {B11111111, B00011011, B01101101, B01101101, B01101101, B01110011 };
const int n6[6] = {B11111111, B10010011, B01101101, B01101101, B01101101, B11110011 };
const int n7[6] = {B11111111, B01111111, B01110001, B01101111, B01011111, B00111111 };
const int n8[6] = {B11111111, B10010011, B01101101, B01101101, B01101101, B10010011 };
const int n9[6] = {B11111111, B10011111, B01101101, B01101101, B01101101, B10010011 };

const int sp[6] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 };    // SPACE ' '

byte d[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
            B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111,
            B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, }; // the display matrix.
int e,g,i;
int f = 0;
int m = 0;
char alp;
char text[] = {"0"};     //////////  WRITE TEXT HERE  //////////

void setup()
{
  pinMode(data1,OUTPUT);
  pinMode(str1,OUTPUT);
  pinMode(clock1,OUTPUT);
  pinMode(data2,OUTPUT);
  pinMode(clock2,OUTPUT); 
}

void loop()
{text_to_display();
   display_by_shiftregisters();
   
 }


void text_to_display()
{  
   for(g=23; g>=0; g--)     // this loop shifts all the bytes in the array 'd' by one place.
      { d[g] = d[g-1];}
}    
void array(int i)       
{
 
    
  if(alp=='0')  // 0
   d[0] = n0[i];
  if(alp=='1')  // 1
   d[0] = n1[i];
  if(alp=='2')  // 2
   d[0] = n2[i];
  if(alp=='3')  // 3
   d[0] = n3[i];
  if(alp=='4')  // 4
   d[0] = n4[i];
  if(alp=='5')  // 5
   d[0] = n5[i];
  if(alp=='6')  // 6
   d[0] = n6[i];
  if(alp=='7')  // 7
   d[0] = n7[i];
  if(alp=='8')  // 8
   d[0] = n8[i];
  if(alp=='9')  // 9
   d[0] = n9[i];  
   
  if(alp==' ')  // SPACE
   d[0] = sp[i]; 
 
  if(alp=='\0')    //  A string ends with a null character, so if the text ends, this will reset the values of 'f','m' and 'k' and the scrolling will start again from begining! 
    {
      d[0] = sp[i];
      f = 0;
      m = 0;
    }
   
}










void display_by_shiftregisters()
{ 

  for(int e=0; e<=23; e++)      // display loop. 
  {
    byte a = 0;            // writes a 'one' on the 'e'th position of the byte 'a' this is to make a running one in the coloumns as we controll the rows.
   // if(e<8)
     bitSet(a,e);     
    //if((e>=8)&&(e<16))
   //bitSet(a,e-8);
    //if((e>=16)&&(e<24))
    //bitSet(a,e-16);
    
    
    digitalWrite(str1,LOW);
    shiftOut(data2,clock2,LSBFIRST,n8[e]);   //  shifts out the main display array 'd[]' which controlles the rows
    
    //if(e<8)
    //{ 
     shiftOut(data1,clock1,LSBFIRST,a); //  shift the 'walking one' to first shift register
     shiftOut(data1,clock1,LSBFIRST,0);
     shiftOut(data1,clock1,LSBFIRST,0);
    //}
   // if((e>=8)&&(e<16))
   // { 
    
    // shiftOut(data1,clock1,LSBFIRST,0); //  shift the 'walking one' to second shift register
    // shiftOut(data1,clock1,LSBFIRST,a);
    // shiftOut(data1,clock1,LSBFIRST,0);
   // }
    //if((e>=16)&&(e<24))
    //{ 
     //shiftOut(data1,clock1,LSBFIRST,0); //  shift the 'walking one' to third shift register
     //shiftOut(data1,clock1,LSBFIRST,0);
     //shiftOut(data1,clock1,LSBFIRST,a);
    //}
   
    digitalWrite(str1,HIGH);
   
}}
