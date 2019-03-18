/**********************************************************************************
**                                                                               **
**                       Examen Arayd 8 LED's y mes                              **
**                                                                               **
** Mihai Anton                                                         25/2/2019 **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led1 = 2;          // donar nom al pin 2 de l’Arduino
const int led2 = 3;          // donar nom al pin 3 de l’Arduino
const int led3 = 4;          // donar nom al pin 4 de l’Arduino
const int led4 = 5;          // donar nom al pin 5 de l’Arduino
const int led5 = 6;          // donar nom al pin 6 de l’Arduino
const int led6 = 7;          // donar nom al pin 7 de l’Arduino
const int led7 = 8;          // donar nom al pin 8 de l’Arduino
const int led8 = 9;          // donar nom al pin 9 de l’Arduino
const int led9 = 10;         // donar nom al pin 10 de l’Arduino
const int nivell1 = 11;     // donar nom al pin 11 de l’Arduino
const int nivell2 = 12;     // donar nom al pin 12 de l’Arduino
const int nivell3 = 13;     // donar nom al pin 13 de l’Arduino
//********** Setup ****************************************************************
void setup()
{
  pinMode(led1, OUTPUT);     // definir el pin 2 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led8, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led9, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(nivell1, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(nivell2, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(nivell3, OUTPUT);     // definir el pin 13 com una sortida 
}
//********** Loop *****************************************************************
void loop()
{
    digitalWrite(led1, HIGH);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, HIGH);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, HIGH);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, HIGH);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, HIGH);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, HIGH);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, HIGH);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, HIGH);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell1, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, HIGH);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, HIGH);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, HIGH);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, HIGH);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, HIGH);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, HIGH);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, HIGH);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, HIGH);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell3, LOW);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, HIGH);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, HIGH);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, HIGH);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, HIGH);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, HIGH);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, HIGH);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, HIGH);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, HIGH);    // posar a 0V el pin 5
    digitalWrite(led9, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

    digitalWrite(led1, LOW);    // posar a 0V el pin 5
    digitalWrite(led2, LOW);    // posar a 0V el pin 5
    digitalWrite(led3, LOW);    // posar a 0V el pin 5
    digitalWrite(led4, LOW);    // posar a 0V el pin 5
    digitalWrite(led5, LOW);    // posar a 0V el pin 5
    digitalWrite(led6, LOW);    // posar a 0V el pin 5
    digitalWrite(led7, LOW);    // posar a 0V el pin 5
    digitalWrite(led8, LOW);    // posar a 0V el pin 5
    digitalWrite(led9, HIGH);    // posar a 0V el pin 5
    digitalWrite(nivell1, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell2, LOW);    // posar a 0V el pin 5
    digitalWrite(nivell3, HIGH);    // posar a 0V el pin 5

    delay(500);                  // es queden leds 500ms encesos

 }
//********** Funcions *************************************************************
