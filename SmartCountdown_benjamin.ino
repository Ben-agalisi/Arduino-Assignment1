int startvalue = 5;
int pinled = 7;

void flashled(int times) {

  for (int flashCount = 0; flashCount < times; flashCount++) {

    digitalWrite(pinled, HIGH);
    delay(500);              // 

    digitalWrite(pinled, LOW);
    delay(500);              // 
  }
}

void setup() {
  pinMode(pinled, OUTPUT);

  Serial.begin(9600);
  Serial.println("========SMART COUNTDOWN========");

  for (int count = startvalue; count > 0; count = count - 1) {

    Serial.print("count: ");
    Serial.println(count);

    flashled(count);

    delay(2000);              
  }

  
  Serial.println("======Countdown is Complete======");
}

void loop() {}