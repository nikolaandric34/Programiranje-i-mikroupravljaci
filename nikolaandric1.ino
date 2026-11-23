unsigned int napon_mV = 3750;
unsigned int kapacitet_mAh = 2600;

float napon_V;
float kapacitet_Ah;

unsigned long mWh;

void setup() {
  //put your setup code here,to run once:
  Serial.begin(9600);
  napon_V = (float)   napon_mV / 1000;
  kapacitet_Ah = (float)  kapacitet_mAh / 1000;

  mWh = (unsigned long)napon_mV * kapacitet_mAh;

  Serial.print("Napon u V: ");
  Serial.println(napon_V);
  Serial.print("Kapacitet u Ah: ");
  Serial.println(kapacitet_Ah);
  
  Serial.print('mWh: '); Serial.println(mWh);

  

}

void loop() {

  // put your main code here,to run repeatedly:


}
