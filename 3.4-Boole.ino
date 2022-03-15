int x;
int y=1;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
      
      Serial.begin(9600);
      
    while(y<=3){
    digitalWrite(y+5, HIGH);
      
    for(x=0; x<=255;x++){
      analogWrite(5,x);
      delay(4);
      }
    for(x=255; x>=0;x--){
      analogWrite(5,x);
      delay(4);
      }
      y++;
     }
      Serial.print("Cycle no");
      Serial.println(x);
     }

void loop() {

}
