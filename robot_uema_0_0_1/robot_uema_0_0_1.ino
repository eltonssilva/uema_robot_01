#define DEBUG_ROBOT 1


void setup() {
  // put your setup code here, to run once:

    Serial.begin(115200);
    robot_init ();

}

void loop() {
  // put your main code here, to run repeatedly:

  robot_front();

  delay(5000);

  robot_stop();

   delay(5000);

}