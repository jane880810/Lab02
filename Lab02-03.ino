
// Lab02_03
// 使用陣列的跑馬燈程式
// 每個 LED 正極接到 Pin 7 - 14, 負極接地
const byte LEDs[] ={7,8,9,10,11,12,13,14};
const byte total = sizeof(LEDs);
const byte SW=6;
int index = 0 , i ,j ;
void setup(){
// 將每個 Pin 設定成輸出
    for ( i=0;i<total;i++) {
    pinMode(LEDs[i], OUTPUT);
    }
    pinMode(SW,INPUT);
}
void loop() {
    
    for (index=0; index <= 7; index++) //向左展示
    { 
        for ( i=0;i<total;i++) // 所有 LED OFF
        { 
            digitalWrite(LEDs[i], LOW);
        }

        j = digitalRead(SW);
        if (j == HIGH) // turn LED on:
        {
            digitalWrite(LEDs[6], HIGH);
            delay(500);
            digitalWrite(LEDs[6], LOW);
            break;
        } 
    
    
      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
    
    for ( i=0;i<total;i++) // 所有 LED OFF
        { 
            digitalWrite(LEDs[i], LOW);
        }
        
    delay(1000);
    
    for (index=7; index >= 0; index--) //向右展示
    {
      
        for ( i=0;i<total;i++) {
            digitalWrite(LEDs[i], LOW);
        }

        j = digitalRead(SW);
        if (j == HIGH) // turn LED on:
        {
             digitalWrite(LEDs[6], HIGH);
             delay(500);
             digitalWrite(LEDs[6], LOW);
             break;
         }

    

    

        digitalWrite(LEDs[index], HIGH);
      
        delay(100);
    }
    for ( i=0;i<total;i++) // 所有 LED OFF
    { 
        digitalWrite(LEDs[i], LOW);
    }
    delay(1000);
    

    j = digitalRead(SW);
    if (j == HIGH) // turn LED on:
    {
        digitalWrite(LEDs[6], HIGH);
        delay(500);
    } 
    else // turn LED off:
    {
        digitalWrite(LEDs[6], LOW);
    
    }
    
}
