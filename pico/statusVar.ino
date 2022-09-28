void setup() {

//soft restart lable
restart:

//define and initilize telem values
long missionTime = 0;
long packetCount = 0;

double altitudeGPS = 0;
double altutudeBAR = 0;
double altitude = 0;


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







	advance();
}













//advance stage as apropriate; my implementation is dubious
void advance(){
	switch(missionStage){

		//if on ground
		case 0{
			if(altitude > 5)
				missionStage ++;
		}

		//if ascending
		case 1{
			if(altitude > 5)
				missionStage ++;
		}

		//if releaseing
		case 2{
			if(altitude > 5)
				missionStage ++;
		}

		//if descending
		case 3{
			if(altitude > 5)
				missionStage ++;
		}

		//if on ground
		case 4{
			if(altitude > 5)
				missionStage ++;
		}


	}


}
