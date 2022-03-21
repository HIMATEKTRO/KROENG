void checkFlag()
{
  switch(_flag)
  {
    case FLAG_START: 
          Serial2.write(PUTAR); // besar derajat kondisional
          _flag = FLAG_LEFT; 
          break;  
    case FLAG_LEFT:
          susurKiri();  // belum fix
          break;
    case FLAG_RIGHT:
//        susurKanan(); // belum fix
          break;
    default:
          Serial.println("??");       
  }
}
