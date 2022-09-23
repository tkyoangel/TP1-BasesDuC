void setup(){
    Serial.begin(9600);
    Serial.print("Saissez le nombre de secondes");
    Serial.print("\n");
}

void loop(){
    if (Serial.available()){
        int k;
        k=Serial.parseInt();
        int i;
        i = 0;
        for (;i<=k;k--){
            delay(1000);
            Serial.println(k);
        }
    }
}
