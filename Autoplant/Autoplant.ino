#include <dht.h>

dht humidityTemperatureSensor;

/**************************
 * Connection digram:
 * pin 7 - humidity sensor
 * A0 - soil sensor
 * pin 3 - pump
 * 
 */
#define DHT11_PIN 7



void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1000);        // delay in between reads for stability

}
