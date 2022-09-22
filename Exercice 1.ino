int i;
int k;
void setup(){
  Serial.begin(9600);
}

void loop(){
    for (i=0; i<10; i++){
        for (k=0; k<10; k++){
            Serial.print(i);
            Serial.print("x");
            Serial.print(k);
            Serial.print("=");
            Serial.println(k*i);
        }
    }
}
