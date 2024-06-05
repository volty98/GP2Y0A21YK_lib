#include <GP2Y0A21YK.h>

#define PIN_PSD (3)
GP2Y0A21YK *psd;

void setup()
{
    Serial.begin(9600);
    //PSD init.
    psd = new GP2Y0A21YK(PIN_PSD);

}

void loop()
{
    double distance;
    distance = psd->distance();
    Serial.println(distance);
    delay(500);
}
