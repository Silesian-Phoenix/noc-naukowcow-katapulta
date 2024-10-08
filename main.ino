// definiujemy jak zmienne preprocesora odpowiednie piny Arduino
// odpowiadające za dany sygnał dla sterownika
#define step1 6
#define dir1 7
#define en1 9
#define step2 3
#define dir2 4
#define en2 8
// definiujemy jak zmienne preprocesora piny Arduino
// odbierające sygnał z odpowiednich przycisków
#define button1 13
#define button2 12
#define button3 11

int stepper = 1;                      // 1 = celowanie, 2 = naciąganie
int step_pin = step1;                 // przypisywane przy obsłudze button 2/3
int dir_pin = dir1;                   // przypisywane przy obsłudze button 2/3

void setup() {
  Serial.begin(9600);

  pinMode(step1, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(en1, OUTPUT);

  pinMode(step2, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(en2, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
  digitalWrite(en1, LOW);             // na początku działa tylko stepper 1
  digitalWrite(en2, HIGH);
}

void loop() {
  
  if(digitalRead(button1)==HIGH){     // zmiana steppera
    Serial.println("button 1 active");
    if(stepper==1){
      stepper=2;
    }else{
      stepper=1;
    }
    delay(700);
    Serial.println("stepper switched");
    if(stepper==1){                   // ustawienie sterowania pinami steppera 1
      step_pin=step1;
      dir_pin=dir1;
      digitalWrite(en2, HIGH);
      digitalWrite(en1, LOW);

    }else{                            // ustawienie sterowania pinami steppera 2
      step_pin=step2;
      dir_pin=dir2;
      digitalWrite(en1, HIGH);
      digitalWrite(en2, LOW);
    }
    }
  if(digitalRead(button2)==HIGH){     // ruch wybranego steppera w kierunku 1
    Serial.println("button 2 active");
    digitalWrite(dir_pin, LOW);
    digitalWrite(step_pin, LOW);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(700);
    digitalWrite(step_pin, LOW);
  }
  if(digitalRead(button3)==HIGH){     // ruch wybranego steppera w kierunku 2
    Serial.println("button 3 active");
    digitalWrite(dir_pin, HIGH);
    digitalWrite(step_pin, LOW);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(700);
    digitalWrite(step_pin, LOW);
  }
}
