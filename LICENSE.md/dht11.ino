#include <dht11.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD panelin bağlantı pinleri.
dht11 DHT11;

void setup()
{
 lcd.begin(16, 2);
 DHT11.attach(7); //dht 11 in s bacağının bağlantı pini
}

void loop()
{
 
lcd.setCursor(0, 0);
int chk = DHT11.read();

 lcd.print("Nem (%)     :");   //Nem yüzdesini ekrana yazdırıyoruz
 lcd.println((float)DHT11.humidity, DEC);
 lcd.setCursor(0, 1);
 lcd.print("Sicaklik (C):");   //Sıcaklığı santigrad olarak ekrana yazdırıyoruz
 lcd.println((float)DHT11.temperature, DEC);

 delay(2000);
}
