#include <Arduino.h>
#include "wifi.cpp"
#include "get_ip.cpp"
#include "rtc_esp32.cpp"


void setup() {
// write your initialization code here
    wifisetup();
    get_ip();
    get_offset();
    get_rtc_time();
}

void loop() {
// write your code here
}