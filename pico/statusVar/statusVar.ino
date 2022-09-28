#include "/Documents/code/twomonth/pico/statusVar/advance.ino"



//aparently this is how you do globals

//define and initilize telem values
long missionTime = 0;
long packetCount = 0;

double altitudeGPS = 0;
double altutudeBAR = 0;
double altitude = 0;


//etc etc

//define and initialize status variable
int missionStage = 0;




void setup() {

//soft restart lable
restart:

//initilize telem values
missionTime = 0;
packetCount = 0;

altitudeGPS = 0;
altutudeBAR = 0;
altitude = 0;


//etc etc

//define and initialize status variable
int missionStage = 0;


//setup interfaces
//initGPS();
//initSD();
//initPressure();
//initXBee();
//initUplinkInterupt();
//

}

void loop() {







advance(altitude);
}
