//ground override; would be sort of terminalish?

//takes very limited commands, maybe just names of stages or
//single numbers to jump to that mission stage?

//so sending command "0\n" would jump to setup, "2\n" go's to release, etc

//or "settup\n" and "release\n"

//attn pin on XBee connected to interupt pin on pico;
//interupt "attatched" to handleUplink() in //setup
//see: https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/

int handleUplink(){

	//no "send" option for SPI? this appears send junk back to xbee as it reads
	//I probably just don't understand the protocol


	//not sure how to do that simpley; if we do number characters can do this:

	//2 char max for 'commands'
	char buffer[2] = SPI.transfer(buffer, 2);


	switch(buffer){
	case

	}

}
