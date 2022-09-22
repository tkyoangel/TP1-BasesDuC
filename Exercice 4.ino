//Echange de variables

void setup(){
int a, b, tmp;
Serial.begin(9600);

a = 1984;
b = 1515;

tmp = b;
b = a;
a = tmp;

Serial.print ("a = ");
Serial.println (a);
Serial.print ("b = ");
Serial.println (b);
}

void loop(){}
