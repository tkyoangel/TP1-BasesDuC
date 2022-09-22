//Determineur de parité xdd
void setup() {
  Serial.begin(9600);
}

void loop(){
int nombre;
if (Serial.available()){
  nombre = Serial.parseInt();
  int parite = nombre%2;
  if (parite==0) {
    Serial.println("Ce nombre est pair");
      }
  else {
    Serial.println("Ce nombre est impair");
    }
  }
}
