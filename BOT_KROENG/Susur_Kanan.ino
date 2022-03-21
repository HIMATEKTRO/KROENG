void susurKanan()
{
    _kananAtas = US2.ping_cm();
    _kananBawah = US3.ping_cm();
    _rata = (_kananAtas + _kananBawah) / 2; 
    _rata = SET_POINT- _rata;
    err=((_kananBawah- _kananAtas) + (_rata/2));
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
}
