#include <NewPing.h>

#define MAX_DISTANCE 200

/* SRF05 */
const int TRIG_SENSOR1 = 22;
const int ECHO_SENSOR1 = 23;

const int TRIG_SENSOR2 = 24;
const int ECHO_SENSOR2 = 25;

const int TRIG_SENSOR3 = 26;
const int ECHO_SENSOR3 = 27; 

const int TRIG_SENSOR4 = 32;
const int ECHO_SENSOR4 = 33;

const int TRIG_SENSOR5 = 30;
const int ECHO_SENSOR5 = 31;

const int DELAY_SEND = 500;

// konstanta
const int FLAG_START = 0;
const int FLAG_LEFT = 1;
const int FLAG_RIGHT = 2;

const int MAJU = 61;
const int KIRI = 62;
const int KANAN = 63;
const int PUTAR = 64;

const int DEPAN_TEMBOK = 1;
const int KIRI_KOSONG = 2;
const int KANAN_KOSONG = 3;
const int KIRI_TEMBOK = 4;
const int KANAN_TEMBOK = 5;

const int KP = 4;
const int KD = 2;

const int MAX_ERROR = 30;
const int MIN_ERROR = -30;

const int SET_POINT= 12;


NewPing US1(TRIG_SENSOR1, ECHO_SENSOR1, MAX_DISTANCE);
NewPing US2(TRIG_SENSOR2, ECHO_SENSOR2, MAX_DISTANCE);
NewPing US3(TRIG_SENSOR3, ECHO_SENSOR3, MAX_DISTANCE);
NewPing US4(TRIG_SENSOR4, ECHO_SENSOR4, MAX_DISTANCE);
NewPing US5(TRIG_SENSOR5, ECHO_SENSOR5, MAX_DISTANCE);

int _flag;
int _kiriAtas;
int _kiriBawah;
int _kananBawah;
int _kananAtas;
int _depan;
int _error;
int _rata;
int _shake;
int _dError;
int _lastError;
int err;


void setup() {
  _flag = FLAG_START;
  Serial.begin(9600);
  Serial2.begin(115200);
  ////////////////////////////////
  Serial2.write(PUTAR);
  maju(KANAN, DEPAN_TEMBOK);
  Serial2.write(KIRI);
  maju(KANAN, KIRI_TEMBOK);
  
  ////////////////////////////////
  
  
}

void loop() {

  
}
