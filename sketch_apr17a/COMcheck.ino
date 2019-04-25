void COMcheck()
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
  else if(message == "SET_MANUAL_MODE")
  {
    manualmode = true;
  }
  else if(message == "SET_SIGNALLING_MODE")
  {
    signalmode = true;
  }
  else if(message == "SET_AUTOMATIC_MODE")
  {
    automaticmode = true;
  }
}
