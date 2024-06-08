// ===========================================================================
// This file is for compilation during development work.
//
// Must be add following code in ".vscode/arduino.json" file.
//
//     "buildPreferences":[
//         ["compiler.c.extra_flags","-Wall -Isrc"],
//         ["compiler.cpp.extra_flags","-Wall -Isrc"]
//     ],
//
// ===========================================================================

// ===========================================================================
// Here is coding space for developing library and sample code.
// And copy the completed code to the "Example" folder as sample code.
// For example, the first completed code will be the "example/BasicUsage/BasicUsage.ino" file.
// ===========================================================================


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
