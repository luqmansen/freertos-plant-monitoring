//
//
//void mq9_task(void *pvParameter){
//
//  sensorData data;
//    while (1)
//    {
//      data = readMQ9();
//      PRINT("MQ9:", data.digital.value);
//      vTaskDelay( xDelay );
//    }
//}
//
//sensorData readMQ9(){
//    sensorData data;
//    data.type = mq9_sensor;
//    data.digital.value = digitalRead(MQ9);
//    return data;
//}
