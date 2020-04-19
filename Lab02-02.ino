
// Lab02_02
// 使用陣列的跑馬燈程式 全閃兩次往左跑，全閃兩次往右跑
// 每個 LED 正極接到 Pin 7 - 14, 負極接地
const byte LEDs[] ={7,8,9,10,11,12,13,14};
const byte total = sizeof(LEDs);
int index = 0 , i ;
void setup(){
// 將每個 Pin 設定成輸出
    for ( i=0;i<total;i++) {
    pinMode(LEDs[i], OUTPUT);
    }
}
void loop() {
    for(i=0;i<2;i++)
    {
        for (index=0; index <= 7; index++)
            digitalWrite(LEDs[index], HIGH);
        delay(500);
        for (index=0; index <= 7; index++)
            digitalWrite(LEDs[index], LOW);
        delay(500);
    }
    for (index=0; index <= 7; index++) //向左展示
    { 
        for ( i=0;i<total;i++) // 所有 LED OFF
        { 
            digitalWrite(LEDs[i], LOW);
        }

      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
    
    for ( i=0;i<total;i++) // 所有 LED OFF
        { 
            digitalWrite(LEDs[i], LOW);
        }
        
    delay(1000);

    for(i=0;i<2;i++)
    {
        for (index=0; index <= 7; index++)
            digitalWrite(LEDs[index], HIGH);
        delay(500);
        for (index=0; index <= 7; index++)
            digitalWrite(LEDs[index], LOW);
        delay(500);
    }
    
    for (index=7; index >= 0; index--) //向右展示
    {
      
      for ( i=0;i<total;i++) {
            digitalWrite(LEDs[i], LOW);
        }

      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
    for ( i=0;i<total;i++) // 所有 LED OFF
        { 
            digitalWrite(LEDs[i], LOW);
        }
        
    delay(1000);
}
