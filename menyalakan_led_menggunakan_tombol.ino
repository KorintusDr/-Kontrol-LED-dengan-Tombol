const int tombol=6;
const int ledtest=5;
int tomboltest=0;

void setup() {
 pinMode(ledtest, OUTPUT);
 pinMode(tombol, INPUT_PULLUP);
}

void loop() {
 tomboltest = digitalRead(tombol);

 if(tomboltest == HIGH){
  digitalWrite(ledtest, LOW);
 }else{
  digitalWrite(ledtest, HIGH);
 }

}
