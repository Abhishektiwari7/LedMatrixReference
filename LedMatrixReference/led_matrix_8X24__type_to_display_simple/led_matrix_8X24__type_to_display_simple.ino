const int data1 = 6;              // data sent to shift register(3) to control columns(24) 
const int latch1 = 4;            // latch pin of column shift register(4) 
const int clock1 = 5;           //   clock pin of column shift register
const int data2 = 3;           //  data sent shift register(1) to control rows(8)
const int clock2 = 2;         //   clock pin of column shift register

const int A[8] = {0x00, 0xff, 0x88, 0x88, 0x88, 0xff, 0x00, 0x00};  // Array of character A
const int B[8] = {0x00, 0xe6, 0xaa, 0x92, 0x92, 0x92, 0xfe, 0x00};   // Array of character B
const int C[8] = {0x00, 0x00, 0x81, 0x81, 0x81, 0x81, 0x7e, 0x00};   //array of character c
const int n1[8] = {0x00, 0x01, 0x01, 0xff, 0x81, 0x41, 0x00, 0x00};  // defines array system into hex in matrix 8X8//1
const int n2[8] = {0x00, 0xe1, 0x91, 0x89, 0x85, 0xc3, 0x00, 0x00};     //2
const int n3[8] = {0x00, 0xff, 0x91, 0x91, 0x91, 0x91, 0x00, 0x00};     //3
const int n4[8] = {0x00, 0xff, 0x10, 0x10, 0x10, 0xf0, 0x00, 0x00};     //4
const int n5[8] = {0x00, 0x9f, 0x91, 0x91, 0x91, 0xf1, 0x00, 0x00};     //5
const int n6[8] = {0x00, 0x0f, 0x09, 0x09, 0x09, 0xff, 0x00, 0x00};     //6
const int n7[8] = {0x00, 0xff, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00};     //7
const int n8[8] = {0x00, 0xff, 0x89, 0x89, 0x89, 0xff, 0x00, 0x00};     //8
const int n9[8] = {0x00, 0xff, 0x90, 0x90, 0x90, 0xf0, 0x00, 0x00};     //9
const int n0[8] = {0x00, 0xff, 0x81, 0x81, 0x81, 0xff, 0x00, 0x00};     //0
int d[24] = { 0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00}; //print in loop 0 to 23 on led matrix




const char* text = {"AB1"};      // write the sentence to print on display
 size_t len = strlen(text);    // to get the lenth of input charaters
char alpha;     // to save alphabet one by one through array text[]
int e;       // e is for print characater array on display by shift register(0 to 23)
int f= 0 ;     //index of text array 0 to len(lenth of array or number of items)
void setup() {
  // put your setup code here, to run once:
  pinMode(data1,OUTPUT);             // data sent to shift register by data pin ,this  pin responsible for column(3-shift register are cascaded
  pinMode(latch1,OUTPUT);              // enable the the output to shift to shift register 
  pinMode(clock1,OUTPUT);             // clock pin of shift register control by shiftout funtion in arduino 
  pinMode(data2,OUTPUT);             // data sent to shift register by data pin
  pinMode(clock2,OUTPUT);          // clock pin of shift register control by shiftout funtion in arduino
}


void loop() {

textcomparison();                // first read  the characters one by one then copy that 1st charater to alpha variable which will be use for comparison to our array of characters
shiftregister();                 // after copying every charracters into display array-d[](0 to 23) then use for loop to shift the bytes to shiftregister row and column 

}


void textcomparison()               //this function simply read the charaters of array and also call compare array
{   for(f=0;f<len;f++)           // first start the loop from 0 to lenth of text  example f=0,1&2          
  {alpha = text[f];              //copying one by one character for comparison in array funtion  example-aplha='1';
    array(f);                     //call array function and send(f) the index of current character to know where it has to be placed,like array(0),array(1)...
    }
  
}




void array(int i)         // this function compare and defined the position of characters on display-first place(24-16)-second place(16 to 8)-third place(8 to 0)
{ 
  int k;                 // if i=0 means,only 1st character is present in text so,k=16 and by which whatever is the character it will shift the position to 16th place
                           //k is use for defines the position of character on display(column 0 to 8 is used to display only 1st character
 if(i==0)
 { k=16;
  }
  else if(i==1)          // if i=1 means,only 2nd character is present in text so,k=8 and by which whatever is the character it will shift the position to 8th place
 { k=8;                      //k is use for defines the position of character on display(column 8 to 16 is used to display only 2nd character
  }
else if(i==2)            // if i=2 means,only 3rd character is present in text so,k=16 and by which whatever is the character it will shift the position to 16th place
 { k=0;                   //k is use for defines the position of character on display(column 16 to 24 is used to display only 3rd character
  }  
  
  if(alpha=='1')                 //in above function textcomparison.we copied the one by one character on alpha for comparison,if alpha =1then loop start to copy n1[j] to d[j+k].
                                   // k decides the position on display or it need to be shift or not[if k=0 means 3rd character of text array is print between 0 to 8]
   for(int j=0;j<8;j++)
   d[j+k] = n1[j];
   
  if(alpha=='2')              // compare 2
   for(int j=0;j<8;j++)
   d[j+k] = n2[j];  
   
   if(alpha=='3')          //3
   for(int j=0;j<8;j++)
   d[j+k] = n3[j]; 
     
     if(alpha=='4')       //4
   for(int j=0;j<8;j++)
   d[j+k] = n4[j];
   
  if(alpha=='5')           //5
   for(int j=0;j<8;j++)
   d[j+k] = n5[j];  
   
   if(alpha=='6')         //6
   for(int j=0;j<8;j++)
   d[j+k] = n6[j]; 

     if(alpha=='7')     //7
   for(int j=0;j<8;j++)
   d[j+k] = n7[j];
   
  if(alpha=='8')           //8
   for(int j=0;j<8;j++)
   d[j+k] = n8[j];  
   
   if(alpha=='9')       //9
   for(int j=0;j<8;j++)
   d[j+k] = n9[j]; 

     if(alpha=='0')       //0
   for(int j=0;j<8;j++)
   d[j+k] = n0[j];
    
     if(alpha=='A')     //A
   for(int j=0;j<8;j++)
   d[j+k] = A[j];
     
     if(alpha=='B')     //B
   for(int j=0;j<8;j++)
   d[j+k] = B[j];
     
     if(alpha=='C')    //C
   for(int j=0;j<8;j++)
   d[j+k] = C[j];
}

void shiftregister()          //this function helps to shift d[] array through shiftregister by function shiftout on led matrix

{ 
  for(e=23; e>=0; e--)            //d[] array has 24 size that's why this loop between 0 to 23
  {
    byte a = 0;                // byte a is used for control the 3 shiftregister which connected in cascade for columns
                   
    if(e<8)                      //e<8 means for (0 to 8) 1st shift register get values to print on 3rd character on display
    bitSet(a,e);                 //copy the e value on a to print 3rd charater     
    if((e>=8)&&(e<16))           //(e>=8)&&(e<16) means for (8 to 16) 2nd shift register get values to print on 2nd character on display
    bitSet(a,e-8);               //copy the (e-8)-means again(0 to 8) value on a to print 2nd charater
    if((e>=16)&&(e<24))          //(e>=16)&&(e<24) means for (16 to 24) 3rd shift register get values to print on 3rd character on display
    bitSet(a,e-16);              //copy the (e-16)-means again(0 to 8) value on a to print 3rd charater
         
    digitalWrite(latch1,LOW);         //1st latch pin to low to save data in shift register
    shiftOut(data2,clock2,LSBFIRST,~d[e]);   // e goes 0 to 23, shifts out the main display array '~d[]' and tild sign(~) for reverse the bytes, which controlles the rows 
    
     if(e<8)
    { 
     shiftOut(data1,clock1,LSBFIRST,a); //  1st shift register
     shiftOut(data1,clock1,LSBFIRST,0);  // without this you will end up to shift out data on 2nd and 3rd shiftregisters too 
     shiftOut(data1,clock1,LSBFIRST,0);  // without this you will end up with nothing on display( 1st shiftregister) and data overlaped with 2nd shiftregister
    }
    if((e>=8)&&(e<16))
    { 
     shiftOut(data1,clock1,LSBFIRST,0); // without this you will end up with nothing on display(2nd shiftregister)
     shiftOut(data1,clock1,LSBFIRST,a);   //  2nd shift register
     shiftOut(data1,clock1,LSBFIRST,0);   // without this you will end up to shift out data on 1st and 3rd shiftregisters too
    }
    if((e>=16)&&(e<24))
    { 
     shiftOut(data1,clock1,LSBFIRST,0); // without this you will end with data overlaped with 1st shiftregister
     shiftOut(data1,clock1,LSBFIRST,0);   //without this you will end with data overlaped with 1st shiftregister
     shiftOut(data1,clock1,LSBFIRST,a);  //  3rd shift register 
    } 
    digitalWrite(latch1,HIGH);             //latch is high so data is shift out to display matrix
  }
  }
