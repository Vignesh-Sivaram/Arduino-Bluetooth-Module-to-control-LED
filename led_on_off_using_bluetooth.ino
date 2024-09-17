char data = 0; 
void setup() {
  Serial.begin(9600);                                 
  pinMode(13, OUTPUT); 
}

void loop() {
  if(Serial.available() > 0){     
    data = Serial.read();         
    Serial.print(data);          //Print Value inside data in Serial monitor  
    if(data == '1')              
      digitalWrite(13, HIGH);   //If value is 1 then LED turns ON  
    else if(data == '0')         
      digitalWrite(13, LOW);    //If value is 0 then LED turns OFF  
   } 
}
