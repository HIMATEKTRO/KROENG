void checkAllUltrasonic()
{
  Serial.print("Sensor depan : ");
  Serial.println(US1.ping_cm());
  Serial.print("Sensor kanan atas : ");
  Serial.println(US2.ping_cm());
  Serial.print("Sensor kanan bawah : ");
  Serial.println(US3.ping_cm());
  Serial.print("Sensor kiri atas : ");
  Serial.println(US4.ping_cm());
  Serial.print("Sensor kiri bawah : ");
  Serial.println(US5.ping_cm());

 delay(500);
}
