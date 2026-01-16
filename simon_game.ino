//output LED'S
const int Green_Led = 13;
const int Blue_Led = 12;
const int Yellow_Led = 11;
const int Red_Led = 10;

//input Switches
const int Green_Button = 7;
const int Blue_Button = 6;
const int Yellow_Button = 5;
const int Red_Button = 4;

//output buzzer
const int BUZZER = 3;

//colour tones
const int Green_Tone = 415;
const int Blue_Tone = 310;
const int Yellow_Tone = 252;
const int Red_Tone = 209;

void setup()
{
  pinMode(Green_Led,OUTPUT);
  pinMode(Blue_Led,OUTPUT);
  pinMode(Yellow_Led,OUTPUT);
  pinMode(Red_Led,OUTPUT);
  
  pinMode(Green_Button,INPUT);
  pinMode(Blue_Button,INPUT);
  pinMode(Yellow_Button,INPUT);
  pinMode(Red_Button,INPUT);
}

void loop()
{
  if (!digitalRead(Green_Button))
  {
    digitalWrite(Green_Led,HIGH);
    tone(BUZZER,Green_Tone,500); 
  }
  else
  {
    digitalWrite(Green_Led,LOW);
  }
  
  if (!digitalRead(Blue_Button))
  {
    digitalWrite(Blue_Led,HIGH);
    tone(BUZZER,Blue_Tone,500);
  }
  else
  {
    digitalWrite(Blue_Led,LOW);
  }
  
  if (!digitalRead(Yellow_Button))
  {
    digitalWrite(Yellow_Led,HIGH);
    tone(BUZZER,Yellow_Tone,500);
  }
  else
  {
    digitalWrite(Yellow_Led,LOW);
  }
  
  if (!digitalRead(Red_Button))
  {
    digitalWrite(Red_Led,HIGH);
    tone(BUZZER,Red_Tone,500);
  }
  else
  {
    digitalWrite(Red_Led,LOW);
  }
}
