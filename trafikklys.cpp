enum state{
	PREPARE_TO_STOP = 4,	//
	CARS_DRIVE = 3,enum state{
	PREPARE_TO_STOP = 4,	//
	CARS_DRIVE = 3,
	CARS_STOP = 1,
	PREPARE_TO_DRIVE = 2	//1 sekund
};


int GREEN_PIN = 8;
int YELLOW_PIN = 9;
int RED_PIN = 10;

void setTrafficLights(int ny_fase)
{
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
	digitalWrite(RED_PIN, LOW);

	switch(ny_fase) {
	case 1:
		digitalWrite(RED_PIN, HIGH);
		break;
	case 2:
		digitalWrite(RED_PIN, HIGH);
		digitalWrite(YELLOW_PIN, HIGH);
		break;
	case 3:
		digitalWrite(GREEN_PIN, HIGH);
		break;
	case 4:
		digitalWrite(YELLOW_PIN, HIGH);
		break;
	default:
		break;
	}

}

void setup()
{
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(YELLOW_PIN, OUTPUT);
}

void loop()
{
	for(int i = 1 ; i <= 4; i++)
	{
		setTrafficLights(PREPARE_TO_DRIVE);
		delay(1500);
	}
}


	CARS_STOP = 1,
	PREPARE_TO_DRIVE = 2	//1 sekund
};


int GREEN_PIN = 8;
int YELLOW_PIN = 9;
int RED_PIN = 10;

void setTrafficLights(int ny_fase)
{
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(YELLOW_PIN, LOW);
	digitalWrite(RED_PIN, LOW);

	switch(ny_fase) {
	case 1:
		digitalWrite(RED_PIN, HIGH);
		break;
	case 2:
		digitalWrite(RED_PIN, HIGH);
		digitalWrite(YELLOW_PIN, HIGH);
		break;
	case 3:
		digitalWrite(GREEN_PIN, HIGH);
		break;
	case 4:
		digitalWrite(YELLOW_PIN, HIGH);
		break;
	default:
		break;
	}

}

void setup()
{
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(YELLOW_PIN, OUTPUT);
}

void loop()
{
	for(int i = 1 ; i <= 4; i++)
	{
		setTrafficLights(PREPARE_TO_DRIVE);
		delay(1500);
	}
}

