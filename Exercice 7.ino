void setup(){
    Serial.begin(9600);
}

void loop(){
    unsigned int nombre;
    if (Serial.available()){
        nombre = Serial.parseInt ();
        int parite = nombre%2;
    if (parite==0) {
        Serial.println("Bit de poids faible = 0");
        }
    
    else {
        Serial.println("Bit de poids faible = 1")
        }
    
    }
}
