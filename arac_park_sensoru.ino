const int echoPin = 6; // 6. pin, echo pin olarak tanımlandı.
const int trigPin = 7; // 7. pin, trigger pin olarak tanımladı.
int buzzer = 8; // 8. pin, buzzer pin olarak tanımlandı.
int ledPin0 = 0; // 0. pin, 1. led olarak tanımlandı.
int ledPin1 = 1; // 1. pin, 2. led olarak tanımlandı.
int ledPin2 = 2; // 2. pin, 3. led olarak tanımlandı.
int ledPin3 = 3; // 3. pin,4. led olarak tanımlandı.
int ledPin4 = 4; // 4. pin, 5. led olarak tanımlandı.

int sure; // sure değişkeni tanımlandı.
int mesafe; // mesafe değişkeni tanımlandı.

void setup() {
  pinMode(trigPin, OUTPUT); // trigger pin, çıkış olarak tanımlandı.
  pinMode(echoPin, INPUT); // echo pin, giriş olarak tanımlandı.
  pinMode(buzzer, OUTPUT); // buzzer, çıkış olarak tanımlandı.
  pinMode(ledPin0, OUTPUT);
  // led'ler çıkış olarak tanımlandı.
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH); // trig pin'in çalışması ayarlandı.
  delayMicroseconds(1000); // 1000 mikrosaniye çalışması ayarlandı.
  digitalWrite(trigPin, LOW); // trig pin'in kapanması ayarlandı.
  sure = pulseIn(echoPin, HIGH); // echo pin verisi, sure değişkenine atandı.
  mesafe = (sure/2) / 29.1; // mesafe, cm cinsine çevrildi.

  if (mesafe <= 3) { // mesafe 3 cm'den kısaysa aşağıdaki komutlar gerçekleşir.
    // buzzer ve ledlerin sürekli çalışması ayarlandı.
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
  }

  else if (mesafe <= 4) { // mesafe 4 cm'den kısaysa aşağıdaki komutlar gerçekleşir.
    // buzzer ve ledlerin 50 milisaniye aralıklarla çalışması ayarlandı.
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(50);
  }

  else if(mesafe <= 5) { // mesafe 5 cm'den kısaysa aşağıdaki komutlar gerçekleşir.
    // buzzer ve ledlerin 100 milisaniye aralıklarla çalışması ayarlandı.
    digitalWrite(buzzer, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, LOW);
    delay(100);
  }

  else if(mesafe <= 6) { // mesafe 6 cm'den kısaysa aşağıdaki komutlar gerçekleşir.
    // buzzer ve ledlerin 150 milisaniye aralıklarla çalışması ayarlandı.
    digitalWrite(buzzer, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    delay(150);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    delay(150);
  }

  else if(mesafe <= 7) { // mesafe 7 cm'den kısaysa aşağıdaki komutlar gerçekleşir.
    // buzzer ve ledlerin 200 milisaniye aralıklarla çalışması ayarlandı.
    digitalWrite(buzzer, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin0, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin4, LOW);
    delay(200);
  }

}