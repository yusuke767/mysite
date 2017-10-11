#include <boarddefs.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremote.h>
#include <IRremoteInt.h>

int receiver = 11; // pin 1 of IR receiver to Arduino digital pin 11

/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);           // create instance of 'irrecv'
decode_results results;            // create instance of 'decode_results'
/*-----( Declare Variables )-----*/


void setup()   /*----( SETUP: RUNS ONCE )----*/{
  Serial.begin(9600);
  Serial.println("YourDuino IR Receiver Button Decode Test");
  Serial.println("Questions: terry@yourduino.com");  
  irrecv.enableIRIn(); // Start the receiver

}/*--(end setup )---*/


void loop(){
  if (irrecv.decode(&results)){
//    Serial.println(results.value, HEX);  UN Comment to see raw values 
    irrecv.resume(); // receive the next value
    Serial.println(results.value);
  }  
}/* --(end main loop )-- */

/*-----( Declare User-written Functions )-----*/




/* ( THE END ) */
