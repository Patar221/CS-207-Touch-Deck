#include "Nextion.h"
#include <SoftwareSerial.h>

SoftwareSerial HMISerial(3, 2); // RX, TX

NexButton b0 = NexButton(0, 1, "b0");
NexButton b1 = NexButton(0, 2, "b1");
NexButton b2 = NexButton(0, 3, "b2");
NexButton b3 = NexButton(0, 4, "b3");
NexButton b4 = NexButton(0, 5, "b4");
NexButton b5 = NexButton(0, 6, "b5");
NexButton b6 = NexButton(0, 7, "b7");
NexButton b7 = NexButton(0, 8, "b8");
NexButton b8 = NexButton(0, 9, "b9");
NexButton b9 = NexButton(0, 10, "b10");
NexButton b10 = NexButton(0, 11, "b11");
NexButton b11 = NexButton(0, 12, "b12");
NexButton b12 = NexButton(0, 13, "b13");
NexButton b13 = NexButton(0, 14, "b14");
NexButton b14 = NexButton(0, 15, "b15");
NexButton b15 = NexButton(0, 16, "b16");
NexButton b16 = NexButton(0, 17, "b17");
NexButton b17 = NexButton(0, 18, "b18");

NexTouch *nex_listen_list[] = 
{
  &b0,
  &b1,
  &b2,
  &b3,
  &b4,
  &b5,
  &b6,
  &b7,
  &b8,
  &b9,
  &b10,
  &b11,
  &b12,
  &b13,
  &b14,
  &b15,
  &b16,
  &b17,
  NULL
};

void b0PopCallback(void *ptr)
{
  dbSerialPrintln("b0PopCallback");
  sendTouchDeckCommand(1);
}

void b1PopCallback(void *ptr)
{
  dbSerialPrintln("b1PopCallback");
  sendTouchDeckCommand(2);
}

void b2PopCallback(void *ptr)
{
  dbSerialPrintln("b2PopCallback");
  sendTouchDeckCommand(3);
}

void b3PopCallback(void *ptr)
{
  dbSerialPrintln("b3PopCallback");
  sendTouchDeckCommand(4);
}

void b4PopCallback(void *ptr)
{
  dbSerialPrintln("b4PopCallback");
  sendTouchDeckCommand(5);
}

void b5PopCallback(void *ptr)
{
  dbSerialPrintln("b5PopCallback");
  sendTouchDeckCommand(6);
}

void b6PopCallback(void *ptr)
{
  dbSerialPrintln("b6PopCallback");
  sendTouchDeckCommand(7);
}

void b7PopCallback(void *ptr)
{
  dbSerialPrintln("b7PopCallback");
  sendTouchDeckCommand(8);
}

void b8PopCallback(void *ptr)
{
  dbSerialPrintln("b8PopCallback");
  sendTouchDeckCommand(9);
}

void b9PopCallback(void *ptr)
{
  dbSerialPrintln("b9PopCallback");
  sendTouchDeckCommand(10);
}

void b10PopCallback(void *ptr)
{
  dbSerialPrintln("b10PopCallback");
  sendTouchDeckCommand(11);
}

void b11PopCallback(void *ptr)
{
  dbSerialPrintln("b11PopCallback");
  sendTouchDeckCommand(12);
}

void b12PopCallback(void *ptr)
{
  dbSerialPrintln("b12PopCallback");
  sendTouchDeckCommand(13);
}

void b13PopCallback(void *ptr)
{
  dbSerialPrintln("b13PopCallback");
  sendTouchDeckCommand(14);
}

void b14PopCallback(void *ptr)
{
  dbSerialPrintln("b14PopCallback");
  sendTouchDeckCommand(15);
}

void b15PopCallback(void *ptr)
{
  dbSerialPrintln("b15PopCallback");
  sendTouchDeckCommand(16);
}

void b16PopCallback(void *ptr)
{
  dbSerialPrintln("b16PopCallback");
  sendTouchDeckCommand(17);
}

void b17PopCallback(void *ptr)
{
  dbSerialPrintln("b17PopCallback");
  sendTouchDeckCommand(18);
}

void setup() {
  Serial.begin(9600);
  HMISerial.begin(9600);
  nexInit();
  b0.attachPop(b0PopCallback, &b0);
  b1.attachPop(b1PopCallback, &b1);
  b2.attachPop(b2PopCallback, &b2);
  b3.attachPop(b3PopCallback, &b3);
  b4.attachPop(b4PopCallback, &b4);
  b5.attachPop(b5PopCallback, &b5);
  b6.attachPop(b6PopCallback, &b6);
  b7.attachPop(b7PopCallback, &b7);
  b8.attachPop(b8PopCallback, &b8);
  b9.attachPop(b9PopCallback, &b9);
  b10.attachPop(b10PopCallback, &b10);
  b11.attachPop(b11PopCallback, &b11);
  b12.attachPop(b12PopCallback, &b12);
  b13.attachPop(b13PopCallback, &b13);
  b14.attachPop(b14PopCallback, &b14);
  b15.attachPop(b15PopCallback, &b15);
  b16.attachPop(b16PopCallback, &b16);
  b17.attachPop(b17PopCallback, &b17);
  dbSerialPrintln("setup done"); 
}

void loop() {
  nexLoop(nex_listen_list);
  //Serial.print("Hello World\n");
}

void sendTouchDeckCommand(int num){
  Serial.print("touchDeck(");
  Serial.print(num);
  Serial.println(")");
}
