//Diviseurs

void setup(){
    Serial.begin(9600);
}

void loop(){
    if(Serial.available()){
    int k;
    int nombre;
    nombre = Serial.parseInt();
    for (k=1; k<nombre; k++){
        int reste = nombre%k;
        if (reste==0){
            Serial.println(k);            
        }
    }
  }
}
