

const int data1 = 6;  // frist shift register's pins COLUMN 
const int str1 = 4;   // the storge register (latch pin) of the all the three shift registers are connected together 
const int clock1 = 5; //
const int data2 = 3;  // second shift register's pins ROW
const int clock2 = 2; // 

/// BELOW ARE THE REFERENCE ARRAYS FOR APLHABETS, NUMBERS and CHARACTERS.

const int A[6] = {B11111111, B10000001, B01110111, B01110111, B01110111, B10000001 };     //// ALPHABETS
const int B[6] = {B11111111, B00000001, B01101101, B01101101, B01101101, B10010011 };
const int C[6] = {B11111111, B10000011, B01111101, B01111101, B01111101, B10111011 };
const int D[6] = {B11111111, B00000001, B01111101, B01111101, B01111101, B10000011 };
const int E[6] = {B11111111, B00000001, B01101101, B01101101, B01101101, B01111101 };
const int F[6] = {B11111111, B00000001, B01101111, B01101111, B01101111, B01111111 };
const int G[6] = {B11111111, B10000011, B01111101, B01111101, B01110101, B10110011 };
const int H[6] = {B11111111, B00000001, B11101111, B11101111, B11101111, B00000001 };
const int I[6] = {B11111111, B11111111, B01111101, B00000001, B01111101, B11111111 };
const int J[6] = {B11111111, B11111011, B11111101, B01111101, B00000011, B01111111 };
const int K[6] = {B11111111, B00000001, B11101111, B11010111, B10111011, B01111101 };
const int L[6] = {B11111111, B00000001, B11111101, B11111101, B11111101, B11111101 };
const int M[6] = {B11111111, B00000001, B10111111, B11001111, B10111111, B00000001 };
const int N[6] = {B11111111, B00000001, B11011111, B11101111, B11110111, B00000001 }; 
const int O[7] = {B11111111, B10000011, B01111101, B01111101, B01111101, B10000011 };
const int P[6] = {B11111111, B00000001, B01101111, B01101111, B01101111, B10011111 };
const int Q[6] = {B11111111, B10000011, B01111101, B01110101, B01111011, B10000101 };
const int R[6] = {B11111111, B00000001, B01101111, B01100111, B01101011, B10011101 };
const int S[6] = {B11111111, B10011101, B01101101, B01101101, B01101101, B01110011 };
const int T[6] = {B11111111, B01111111, B01111111, B00000001, B01111111, B01111111 };
const int U[6] = {B11111111, B00000011, B11111101, B11111101, B11111101, B00000011 };
const int V[6] = {B11111111, B00000111, B11111011, B11111101, B11111011, B00000111 };
const int W[6] = {B11111111, B00000001, B11111011, B11100111, B11111011, B00000001 };
const int X[6] = {B11111111, B00111001, B11010111, B11101111, B11010111, B00111001 };
const int Y[6] = {B11111111, B00011111, B11101111, B11110001, B11101111, B00011111 };
const int Z[6] = {B11111111, B01111001, B01110101, B01101101, B01011101, B00111101 };

const int n0[6] = {B11111111, B10000011, B01111101, B01111101, B01111101, B10000011 };     //// NUMBERS
const int n1[6] = {B11111111, B11111111, B10111101, B00000001, B11111101, B11111111 };
const int n2[6] = {B11111111, B10111001, B01110101, B01101101, B01011101, B10111101 };
const int n3[6] = {B11111111, B10111011, B01111101, B01101101, B01101101, B10010011 };
const int n4[6] = {B11111111, B11100111, B11010111, B10110111, B00000001, B11110111 };
const int n5[6] = {B11111111, B00011011, B01101101, B01101101, B01101101, B01110011 };
const int n6[6] = {B11111111, B10010011, B01101101, B01101101, B01101101, B11110011 };
const int n7[6] = {B11111111, B01111111, B01110001, B01101111, B01011111, B00111111 };
const int n8[6] = {B11111111, B10010011, B01101101, B01101101, B01101101, B10010011 };
const int n9[6] = {B11111111, B10011111, B01101101, B01101101, B01101101, B10010011 };

const int sp[6] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 };    // SPACE ' '
const int ex[5] = {B11111111, B11111111, B00000101, B11111111, B11111111 };               // EXCLAMATION MARK '!'
const int qu[6] = {B11111111, B10111111, B01111111, B01110101, B01101111, B10011111 };    // QUESTION MARK '?'
const int mi[6] = {B11111111, B11101111, B11101111, B11101111, B11101111, B11101111 };    // MINUS '-'  
const int co[5] = {B11111111, B11111111, B11111111, B10111011, B11111111 };               // COLON ':'
const int bs[6] = {B11111111, B11111111, B11111111, B10000011, B01111101, B11111111 };    // BRACKET START '('
const int be[6] = {B11111111, B11111111, B01111101, B10000011, B11111111, B11111111 };    // BRACKET END ')'
const int an[6] = {B11111111, B10010011, B01101101, B01100101, B10011011, B11110101 };    // AND '&'
const int gt[6] = {B11111111, B11111111, B11011101, B11101011, B11110111, B11111111 };    // GREATER THAN '>'
const int lt[6] = {B11111111, B11111111, B11110111, B11101011, B11011101, B11111111 };    // LESS THAN '<'
const int pw[6] = {B11111111, B11011111, B10111111, B01111111, B10111111, B11011111 };    // POWER '^'
const int ap[6] = {B11111111, B11110111, B11101111, B11110111, B11111011, B11110111 };    // APPROXIMATELY '~'
const int pl[6] = {B11111111, B11101111, B11101111, B10000011, B11101111, B11101111 };    // PLUS '+'
const int eq[6] = {B11111111, B11010111, B11010111, B11010111, B11010111, B11111111 };    // EQUAL '='
const int ml[6] = {B11111111, B10111011, B11010111, B11101111, B11010111, B10111011 };    // MULTIPLY '*'
const int dv[6] = {B11111111, B11111011, B11110111, B11101111, B11011111, B10111111 };    // DIVIDE '/'
const int pr[6] = {B11111111, B10111011, B11110111, B11101111, B11011111, B10111011 };    // PERCENT '%'
const int dl[6] = {B11111111, B10011101, B01101101, B00000001, B01101101, B01110011 };    // DOLLER '$'

const int BL[6] = {B11111111, B11111111, B11000011, B10111101, B01010110, B01111010 };    // HAPPY FACE '[]'
const int BR[6] = {B01111010, B01010110, B10111101, B11000011, B11111111, B11111111 }; 
const int bl[6] = {B11111111, B11111111, B11000011, B10111101, B01011010, B01110110 };    // SAD FACE '{}'
const int br[6] = {B01110110, B01011010, B10111101, B11000011, B11111111, B11111111 }; 
const int Hr[6] = {B11111111, B11111111, B10001111, B00000111, B00000011, B10000001 };    // HEART ',.'
const int hr[6] = {B10000001, B00000011, B00000111, B10001111, B11111111, B11111111 }; 
const int kk[6]=  {B11111111, B11111000, B11111001, B11111111, B11111111, B11111111 };     //|
byte d[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
            B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111,
            B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, }; // the display matrix.
 
int e,g,i;
int f = 1;
int m = 0;
int k = 6;
int s = 0;
unsigned long t;
char alp;
char text[] = {"ABHI"};     //////////  WRITE TEXT HERE  //////////
char line[200];

void setup()
{  Serial.begin(9600);
  pinMode(data1,OUTPUT);
  pinMode(str1,OUTPUT);
  pinMode(clock1,OUTPUT);
  pinMode(data2,OUTPUT);
  pinMode(clock2,OUTPUT); 
}

void loop()
{
  
  if(millis()-t>130)          // 130 is the scrolling speed in milliseconds.
  {
    t = millis();
     for(g=23; g>=0; g--)     // this loop shifts all the bytes in the array 'd' by one place.
       d[g] = d[g-1];
     
     if(f==k)             // (first read the three comment lines below to understand this) if f==k then read the next char in the string!  
     {
       k = k + 6;         // almost every alphabet/number is made with a size 6 array, 'k' enables the program (the variable f)
                          // to read only a single reference array (means one character from text) till it is completely read
       m = m + 1;         // then it selects next character by incrementing the value of a variable 'm'(m starts with 0 to read the first char in text string) 
     }
   
     if(f<k)              // else continue reading the reference array of the selected char in the text string untill it is completely read. 
     {
      alp = text[m];      // alp is a char variable which holds the selected char in the text string for six incremented values of 'f'.
      array(f-6*m);       // array is a function at the bottom, f is incremented by one every 60 milliseconds so it continues to be incremented to values    
      //Serial.print(f-6*m);
     }                    // greater than 6 which is the size of the reference arrays. (f-6*m) always ranges from 0 to 5.
    f++;  
  }
  
  for(e=0; e<24; e++)      // display loop. 
  {
    byte a = 0;            // writes a 'one' on the 'e'th position of the byte 'a' this is to make a running one in the coloumns as we controll the rows.
    if(e<8)
    bitSet(a,e);     
    if((e>=8)&&(e<16))
    bitSet(a,e-8);
    if((e>=16)&&(e<24))
    bitSet(a,e-16);
    
    
    digitalWrite(str1,LOW);
    shiftOut(data2,clock2,LSBFIRST,d[e]);   //  shifts out the main display array 'd[]' which controlles the rows
    
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

void array(int i)        // (f-6*m) = int i = ranges from 0 to 5 so we can read the reference arrays.
{
 
  if(alp=='A')  // A 
   d[0] = A[i];         //  as all the elements in array d[] is shifted by one place every time loop executes and the '0'th position in d[] becomes empty,  
  if(alp=='B')  // B     //  we copy the reference array's 'i'th element to d[]'s '0'th place ('0'th place is synchronised with the rightmost coloumn in the  
   d[0] = B[i];         //  LED matrix) so as to scroll from right to left.
  if(alp=='C')  // C
   d[0] = C[i];
  if(alp=='D')  // D
   d[0] = D[i];
  if(alp=='E')  // E
   d[0] = E[i];
  if(alp=='F')  // F
   d[0] = F[i]; 
  if(alp=='G')  // G
   d[0] = G[i];
  if(alp=='H')  // H
   d[0] = H[i];
  if(alp=='I')  // I
   d[0] = I[i];
  if(alp=='J')  // J
   d[0] = J[i]; 
  if(alp=='K')  // K
   d[0] = K[i];
  if(alp=='L')  // L
   d[0] = L[i];
  if(alp=='M')  // M
   d[0] = M[i];
  if(alp=='N')  // N
   d[0] = N[i];
  if(alp=='O')  // O
   d[0] = O[i];
  if(alp=='P')  // P
   d[0] = P[i];
  if(alp=='Q')  // Q
   d[0] = Q[i];
  if(alp=='R')  // R
   d[0] = R[i];
  if(alp=='S')  // S
   d[0] = S[i];
  if(alp=='T')  // T
   d[0] = T[i];
  if(alp=='U')  // U
   d[0] = U[i];
  if(alp=='V')  // V
   d[0] = V[i];
  if(alp=='W')  // W
   d[0] = W[i];
  if(alp=='X')  // X
   d[0] = X[i];
  if(alp=='Y')  // Y
   d[0] = Y[i];
  if(alp=='Z')  // Z
   d[0] = Z[i];
   
 
    
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
  if(alp=='!')  // !
   d[0] = ex[i];
  if(alp=='?')  // ?
   d[0] = qu[i];
  if(alp=='+')  // +
   d[0] = pl[i];
  if(alp=='-')  // -
   d[0] = mi[i];
  if(alp=='=')  // =
   d[0] = eq[i];
  if(alp=='/')  // /
   d[0] = dv[i];
  if(alp=='*')  // *
   d[0] = ml[i];
  if(alp==':')  // :
   d[0] = co[i]; 
  if(alp=='(')  // (
   d[0] = bs[i];
  if(alp==')')  // )
   d[0] = be[i];
  if(alp=='&')  // &
   d[0] = an[i];
  if(alp=='>')  // >
   d[0] = gt[i];
  if(alp=='<')  // <
   d[0] = lt[i];
  if(alp=='~')  // ~
   d[0] = ap[i];
  if(alp=='^')  // ^
   d[0] = pw[i];
  if(alp=='%')  // %
   d[0] = pr[i];
  if(alp=='$')  // $
   d[0] = dl[i];
  if(alp==',')  // ,
   d[0] = Hr[i];
  if(alp=='.')  // .
   d[0] = hr[i];
   
   if(alp=='|')
   d[0] = kk[i];
  
  if(alp=='[')  // [
   d[0] = BL[i]; 
  if(alp==']')  // ]
   d[0] = BR[i]; 
  if(alp=='{')  // {
   d[0] = bl[i]; 
  if(alp=='}')  // }
   d[0] = br[i]; 
  if(alp=='\0')    //  A string ends with a null character, so if the text ends, this will reset the values of 'f','m' and 'k' and the scrolling will start again from begining! 
    {
      d[0] = sp[i];
      f = 1;
      m = 0;
      k = 6;
    }
   
}

