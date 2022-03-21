void susurKiri()
{
    _depan = US1.ping_cm();
 
    _kiriAtas = US4.ping_cm();
    _kiriBawah = US5.ping_cm();
    _rata = (_kiriAtas + _kiriBawah) / 2; 
    _rata -= SET_POINT;
    err=((_kiriAtas - _kiriBawah) + (_rata/2));
    _dError = err  - _lastError;
    _error = KP * err + KD * _dError;
    
    
    if (_error > MAX_ERROR) 
    {
      _error = MAX_ERROR;
    } 

    if (_error < MIN_ERROR) 
    {
      _error = MIN_ERROR;
      
    }

    _error = (_error + MAX_ERROR);
    Serial2.write(_error);
    Serial.println(_error);
    _lastError = err;
//    if (_sensorKiri > 50) {
//      // belok 90 derajat
//      Serial2.write(KIRI);
//      Serial.println(KIRI);
//    }
//    else 
//    {
//      Serial2.write(_error);
//      Serial.println(_error);
//    }  
//  }
  //}
  //}
}
