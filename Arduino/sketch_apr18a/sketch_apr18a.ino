void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
#include <BluetoothSerial.h>

// Проверка, поддерживается ли Bluetooth
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth не поддерживается на этой плате
#endif

BluetoothSerial SerialBT;
unsigned long startTime;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("Interceptor-AI01"); // Имя Bluetooth устройства
  Serial.println("Устройство запущено, готово к подключению по Bluetooth!");
  
  startTime = millis();
}

void loop() {
  // Отправляем лог каждые 5 секунд
  if (millis() - startTime >= 5000) {
    String logMessage = "Interceptor-AI01: Система активна, режим мониторинга включен. Время работы: " + String(millis() / 1000) + " сек";
    
    SerialBT.println(logMessage);
    Serial.println("Отправлено сообщение: " + logMessage);
    
    startTime = millis();
  }
  
  // Если есть входящие данные, отображаем их на консоли
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
  
  delay(20);
}