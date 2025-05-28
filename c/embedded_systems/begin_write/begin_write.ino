#define DEBUG_OUTPUT_MESSAGE_MAX_LENGTH 80
void setup ()
{

  //Setting the bit rate at 9600bps
  Serial.begin(9600);

  char message [ DEBUG_OUTPUT_MESSAGE_MAX_LENGTH ];
  
  snprintf ( message , DEBUG_OUTPUT_MESSAGE_MAX_LENGTH , " Hello ,World !\ n " ) ;

  //Writing to the serial port
  Serial.write(message);
}
void loop ()
{
}