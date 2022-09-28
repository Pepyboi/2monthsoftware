//sudocode; not a valaid arduino sketch

//setup function; doing loops with while, so no need for loop function
void setup(){

//soft restart lable
restart:

//define and initilize telem values

long missionTime = 0;
long packetCount = 0;

double altitudeGPS = 0;
double altutudeBAR = 0;

//etc etc

//setup
initGPS();
initSD();
initPressure();
initXBee();
initUplinkInterupt();


//ground
ground:
do{
	getTelemetry();
	sendTelemetry();

}while(altitude < 5)


//ascent
assent:

do{
	getTelemetry();
	sendTelemetry();

}while(altitude < 400)

//release
releaseLabel:

releace();

//desent
desent:
do{


}while


}

void loop(){
	//never use; error
}
