void setup(){
    Serial.begin(9600);
}

void loop(){
    float nombre;
    if (Serial.available()){
        nombre = Serial.parseInt ();
        nombre = sq(nombre);
        Serial.println(nombre);
    }
}
