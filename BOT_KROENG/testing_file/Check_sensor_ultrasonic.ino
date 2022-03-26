#include <NewPing.h>

#define MAX_DISTANCE 200

/* SRF05 */
const int TRIG_SENSOR1 = 22; // DEPAN
const int ECHO_SENSOR1 = 23;

const int TRIG_SENSOR2 = 24; // KANAN ATAS
const int ECHO_SENSOR2 = 25;

const int TRIG_SENSOR3 = 26; // KANAN BAWAH
const int ECHO_SENSOR3 = 27;

const int TRIG_SENSOR4 = 28; // KIRI ATAS
const int ECHO_SENSOR4 = 29;

const int TRIG_SENSOR5 = 30; // KIRI BAWAH
const int ECHO_SENSOR5 = 31;

// Define Sensor
NewPing US1(TRIG_SENSOR1, ECHO_SENSOR1, MAX_DISTANCE);
NewPing US2(TRIG_SENSOR2, ECHO_SENSOR2, MAX_DISTANCE);
NewPing US3(TRIG_SENSOR3, ECHO_SENSOR3, MAX_DISTANCE);
NewPing US4(TRIG_SENSOR4, ECHO_SENSOR4, MAX_DISTANCE);
NewPing US5(TRIG_SENSOR5, ECHO_SENSOR5, MAX_DISTANCE);

void setup()
{
    Serial.begin(9600);
};

void loop()
{
    Serial.print("Sensor Depan:");
    Serial.println(US1.ping_cm());

    Serial.print("Sensor Kanan Atas:");
    Serial.println(US2.ping_cm());

    Serial.print("Sensor Kanan Bawah:");
    Serial.println(US3.ping_cm());

    Serial.print("Sensor Kiri Atas:");
    Serial.println(US4.ping_cm());

    Serial.print("Sensor Kiri bawah:");
    Serial.println(US5.ping_cm());
};
