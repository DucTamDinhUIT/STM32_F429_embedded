int basic  = 50; // basic PWM power for blance
int robin = 70;
int power;
int C1 = 2;
int C2 = 4;
int C3 = 7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//4 chan PWM
pinMode(3, OUTPUT); //front
pinMode(5, OUTPUT); //behind
pinMode(6, OUTPUT); //left
pinMode(9, OUTPUT); //right
//4 chan input 000, 001, 010, 011, 100, 101, 110, 111
pinMode(C1, INPUT_PULLUP);
pinMode(C2, INPUT_PULLUP);
pinMode(C3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
 start:
if ( C1 == 1) 
goto up;
else
if ( C2 == 1) 
goto down;
else
if ( C3 == 1) 
goto off;
else
Serial.println(C1);
Serial.println(C2);
Serial.println(C3);
goto start;

  {
   analogWrite(3, power);
   analogWrite(5, power);
   analogWrite(6, power);
   analogWrite(9, power);    
  }

//balance
balance:
power = power + basic;
{
  analogWrite(3, power);
  analogWrite(5, power);
  analogWrite(6, power);
  analogWrite(9, power);
}
delay (1000);
goto start;
//up
up:
power = power + robin + robin;
{
  analogWrite(3, power);
  analogWrite(5, power);
  analogWrite(6, power);
  analogWrite(9, power);
}
delay (1000);
goto start;
//down
down:
power = power - robin;
{
  analogWrite(3, power);
  analogWrite(5, power);
  analogWrite(6, power);
  analogWrite(9, power);
}
delay (1000);
goto start;
//shutdown
off:
while ( power !=0 )
  {
    power = power - 1;
    analogWrite(3, power);
    analogWrite(5, power);
    analogWrite(6, power);
    analogWrite(9, power);
    delay (50);
  }
delay (50);
goto start;
}
