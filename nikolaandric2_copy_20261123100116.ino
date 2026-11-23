unsigned long otporR = 100000;
float kapacitetC = 47e-6;
float tau;
float vrijemePunjenja;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tau = otporR * kapacitetC
  Serial.print("Tau: "); Serial.println(tau,3);
  vrijemePunjenja = 5 * tau;
  Serial.print("Vrijeme punjenja. ");
  Serial.println(vrijemePunjenja,2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
