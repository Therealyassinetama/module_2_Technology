void Automatic()
{
  timer = millis();
  //if (timer - previousmillis >= interval)
  //{
  if (digitalRead(Leftsensor) == HIGH || left == true)
  {
    digitalWrite(rightred, HIGH);
    timer2 = millis();
    unsigned long starttime = timer2;
    digitalWrite(leftred, LOW);
    while (timer2 - starttime <= waittime)
    {
      timer2 = millis();
      //timer2 - starttime <= waittime  timer2 < waittime
      digitalWrite(leftgreen, HIGH);
      if (digitalRead(Rightsensor) == HIGH)
      {
        right = true;
      }
      left = false;
      Serial.println(timer2);
    }
    digitalWrite(leftgreen, LOW);
  }
  else if (digitalRead(Rightsensor) == HIGH || right == true)
  {
    digitalWrite(leftred, HIGH);
    timer2 = millis();
    unsigned long starttime = timer2;
    digitalWrite(rightred, LOW);
    digitalWrite(rightgreen, HIGH);
    while (timer2 - starttime <= waittime)
    {
      timer2 = millis();
      if (digitalRead(Leftsensor) == HIGH)
      {
        left = true;
      }
      right = false;
    }
    digitalWrite(rightgreen, LOW);
  }
  previousmillis = timer;
  // }
  timer2 = 0;
  previousmillis = timer;
}
