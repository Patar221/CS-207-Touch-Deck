#include "Nextion.h"
#include <SoftwareSerial.h>

SoftwareSerial HMISerial(3, 2); // RX, TX

NexButton b0 = NexButton(0, 1, "b0");
NexButton b1 = NexButton(0, 2, "b1");

NexTouch *nex_listen_list[] = 
{
  &b0,
  &b1,
  NULL
};

void b0PopCallback(void *ptr)
{
  dbSerialPrintln("b0PopCallback");
  sendTouchDeckCommand(1);
}

void b1PopCallback(void *ptr)
{
  dbSerialPrintln("b0PopCallback");
  sendTouchDeckCommand(2);
}

void setup() {
  Serial.begin(9600);
  HMISerial.begin(9600);
  nexInit();
  b0.attachPop(b0PopCallback, &b0);
  b1.attachPop(b1PopCallback, &b1);
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
