int led = D7;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    //S
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //t
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
    
    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //e
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //p
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);

    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //h
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //e
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);

    //Preperation for new letter
    digitalWrite(led, LOW);
    delay(1500);
    //n
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    

    //End of first name
    digitalWrite(led, LOW);
    delay(3500);
}