
// -----------------------------------
// Controlling a drinks dispenser over the Internet
// -----------------------------------

// led1 is D0, led2 is D7
int led1 = D0; //Trigger LED, should be something big and noticeable
int led2 = D7; //Standby KED, will be lit while waiting for a trigger

// Configure pins and register our Spark function
void setup()
{
   //delay(10000);
    
   // Here's the pin configuration, both are used as outputs
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);

   // Declare a Spark.function so that we can trigger the LEDs on and off from the cloud.
   Spark.function("pour", ledToggle);

   // At startup, let's make sure the trigger LED is off, and blink the standby LED once:
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   delay(1000);
   digitalWrite(led2, LOW);
   delay(1000);
   digitalWrite(led2, HIGH);
}

// Since we're waiting for input through the cloud this time,
// we don't actually need to put anything in the loop
void loop()
{
   // Nothing to do here
}

// This is the ledToggle function we registered to the "led" Spark.function earlier.
int ledToggle(String command) {
    // Spark.functions always take a string as an argument and return an integer.
    // Since we can pass a string, it means that we can give the program commands on how the function should be used.

    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
        
    return 1;
}