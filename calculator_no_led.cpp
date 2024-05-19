#include <Keypad.h>

// C++ code
//

long first = 0;
long second = 0;
double total = 0;

char customKey;
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};

byte rowPins[ROWS] = {19,18,17,16};
byte columnPins[COLS] = {7,6,5,4};

Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, columnPins, ROWS, COLS);
  
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	customKey = customKeypad.getKey();
  	// Serial.println(customKey);
  	switch(customKey)
    {
    case '0' ... '9':
      first = first * 10 + (customKey - '0');
      Serial.println(first);
      break;
    case '+':
      first = (total != 0 ? total : first);
      Serial.println("+");
      second = SecondNumber();
      total = first + second; 
      Serial.println(total);
      first = 0, second = 0;
      break;
     case '-':
      first = (total != 0 ? total : first);
      Serial.println("-");
      second = SecondNumber();
      total = first - second; 
      Serial.println(total);
      first = 0, second = 0;
      break;
     case '*':
      first = (total != 0 ? total : first);
      Serial.println("*");
      second = SecondNumber();
      total = first * second; 
      Serial.println(total);
      first = 0, second = 0;
      break;
     case '/':
      first = (total != 0 ? total : first);
      Serial.println("/");
      second = SecondNumber();
      // can't devide by 0
      second == 0 ? Serial.println("Invalid") : total = (float)first / (float)second; 
      Serial.println(total);
      first = 0, second = 0;
      break;
     case 'C':
      total = 0;
      break;
    }
}
long SecondNumber()
{
  while (1)
  {
    customKey = customKeypad.getKey();
    if (customKey >= '0' && customKey <= '9')
    {
      second = second * 10 + (customKey - '0');
      Serial.println(second);
    }
    
    if (customKey == '=') break;
  }
  return second;
}

