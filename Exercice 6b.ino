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
        if (k>10){
            for (;i<=k;k-=10){
                delay(10000);
                Serial.println(k);
            }
        }

        if (k<10){
            for (;i<=k;k--){
            delay(1000);
            Serial.println(k);
            }
        }
    }
}
