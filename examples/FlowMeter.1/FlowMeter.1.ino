#include "Utilities.h"
#include "OLED.h"
#include "FlowMeter.h"
#include <MBR_FlowMeter.h>

MBR_FlowMeter flowMeter1(A2);

float MBR_flowRate;

void setup() 
{
  Serial.begin(115200); delay(200);
}

void loop() 
{
  MBR_flowRate = flowMeter1.read();
  flowMeter1.print();
  Serial.println():
}
