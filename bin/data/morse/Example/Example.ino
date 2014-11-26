#define PIN_STATUS  13

LEDMorseSender sender(PIN_STATUS);

void setup() {
    sender.setup();
    sender.setMessage(String("YOUR MESSAGE HERE!"));
    sender.startSending();
}

void loop() {
    sender.continueSending();
}
