#include <MBR_FlowMeter.h>

MBR_FlowMeter flowMeter1(A2);

float flowRate;

void setup() 
{
  Serial.begin(115200); delay(200);
}

void loop() 
{
  flowRate = flowMeter1.read();
  flowMeter1.print();
  Serial.println();
}
