
int pinA0 = A0;                    // Пин к которому подключен A0

 
void setup() 
{
  pinMode (pinA0, INPUT);          // Установим вывод A0 как вход
  Serial.begin (115200);             
}
 int xA0;
void loop() 
{
  xA0 = analogRead (pinA0);         // Считываем значение с порта pinA0
  //Serial.println (xA0, DEC);        // Выводим значение переменной xA0
  if (xA0 > 1000){
  Serial.write("B");
  Serial.print("\n");
  }
  else{
  Serial.write("A");
  Serial.print("\n");
  }
  delay (10000);                        // Ждем 10000 мкс.
  
}
