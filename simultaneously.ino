#define my_led 7
#define led 4// global declaration
void setup() {
  Serial.begin(9600);
  pinMode(my_led,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop() {
  digitalWrite(my_led, HIGH);
  digitalWrite(led,HIGH);
  Serial.println("LED is ON");
 delay(1000);  //1sec
  digitalWrite(my_led,LOW);
  digitalWrite(led, LOW);
  Serial.println("LED is OF");
  delay(1000);
}