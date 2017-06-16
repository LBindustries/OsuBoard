#include <Keyboard.h>
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Keyboard.begin();ASDFDFDFFFD
}
void loop() {
  int bottone1 = digitalRead(3);
  int bottone2 = digitalRead(2);
  int bottone3= digitalRead(1);
  int bottone4 = digitalRead(0);
  if(bottone1 == HIGH)
  {
      Keyboard.press('a');
  }
  if(bottone2 == HIGH)
  {
      Keyboard.press('s');
  }
  if(bottone3 == HIGH)
  {
      Keyboard.press('d');
  }
  if(bottone4 == HIGH)
  {
      Keyboard.press('f');
  }
  if(bottone1 == LOW)
  {
      Keyboard.release('a');
  }
  if(bottone2 == LOW)
  {
      Keyboard.release('s');
  }
  if(bottone3 == LOW)
  {
      Keyboard.release('d');
  }
  if(bottone4 == LOW)
  {
      Keyboard.release('f');
  }
}
