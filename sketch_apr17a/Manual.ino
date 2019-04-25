void Manual()
{
  if (Serial.available() > 0)
  {
    incomingbyte = Serial.read();
    if(incomingbyte == startsign)
    {
      start = true;
    }
    else if(incomingbyte == endsign)
    {
      start = false;
    }
    else if (start == true)
    { 
    message += incomingbyte;
    }
    Serial.println(message);
  }
  if(message == "GREEN_TIME:")
  {
    
  }
  else if(message == "CALAMITY_ALERT")
  {
    
  }
  else if(message == "SET_MANUAL_DIRECTION:")
  {
    
  }
  else if(message == "SET_AUTOMATIC_MODE")
  {
    
  }
  else if(message == "SET_SIGNALLING_MODE")
  {
    
  }
}
