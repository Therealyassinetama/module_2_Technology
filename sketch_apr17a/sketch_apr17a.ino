int Leftsensor = 2;
int Rightsensor = 3;
int leftgreen = 8;
int leftred = 9;
int rightgreen = 10;
int rightred = 11;

//timers and debounce gedeelte
int waittime = 10000;
unsigned long timer = 0;
unsigned long timer2 = 0;
unsigned long previousmillis = 0;
long interval = 1000;

bool left = false;
bool right = false;

bool start = false;

bool manualmode = false;
bool signalmode = false;
bool automaticmode = true;

char incomingbyte;
int startsign = 91;
int endsign = 93;

String message;

void setup()
{
  pinMode(Leftsensor, INPUT);
  pinMode(Rightsensor, INPUT);
  pinMode(leftgreen, OUTPUT);
  pinMode(leftred, OUTPUT);
  pinMode(rightgreen, OUTPUT);
  pinMode(rightred, OUTPUT);
  digitalWrite(leftred, HIGH);
  digitalWrite(rightred, HIGH);
  Serial.begin(9600);
}

void loop()
{
  Manual();
}
