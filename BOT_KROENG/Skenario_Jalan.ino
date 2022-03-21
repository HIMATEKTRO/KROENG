void maju(int _susur, int _kondisi)
{
  if(_kondisi == DEPAN_TEMBOK)
  {
    _depan = US1.ping_cm();
    while (_depan > 20)
    {
      if (_susur == KANAN)
      {
        susurKanan();
      } 
      else
      {
        susurKiri();
      }
      delay(DELAY_SEND);
      _depan = US1.ping_cm();
    }
  }
  else if(_kondisi = KIRI_TEMBOK)
  {
    _kiriBawah = US5.ping_cm();
    while (_kiriBawah > 30)
    {
      if (_susur == KANAN)
      {
        susurKanan();
      } 
      else
      {
        susurKiri();
      }
      delay(DELAY_SEND);
      _kiriBawah = US5.ping_cm();
    }
  }
}
