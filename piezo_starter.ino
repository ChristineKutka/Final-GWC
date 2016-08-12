int PIEZOPIN = 5; // Change this if your Piezo is in another pin

// ============ PITCHES =============
// One octave of notes between A4 and A5
int note_A4 = 440;
int note_As4 = 466; 
int note_Bb4 = note_As4;
int note_B4 = 494;
int note_C5 = 523;
int note_Cs5 = 554; 
int note_Db5 = note_Cs5;
int note_D5 = 587;
int note_Ds5 = 622; 
int note_Eb5 = note_Ds5;
int note_E5 = 659;
int note_F5 = 698;
int note_Fs5 = 740; 
int note_Gb5 = note_Fs5;
int note_G5 = 784;
int note_Gs5 = 830; 
int note_Ab5 = note_Gs5;

int note_A5 = note_A4 * 2;
int note_As5 = note_As4 * 2; 
int note_Bb5 = note_As5;
int note_B5 = note_B4 * 2;

int note_rest = -1;

// ============ DURATIONS =============
// note lengths defined here
long whole_note = 1600; // change tempo by changing duration of one measure
long half_note = whole_note / 2;
long quarter_note = whole_note / 4;
long eighth_note = whole_note / 8;
long sixteenth_note = whole_note / 16;



// ========= TASK 3: CREATE YOUR SONG =======
// The song is a 2D array. It is an array containing notes. Each note is
// a 2-element array with two elements: pitch and duration. 




void setup() {
  pinMode(PIEZOPIN, OUTPUT);
}

void loop() {
	// ========= TASKS 1 & 2 =======
	tone(PIEZOPIN, note_C5);
	delay(half_note);
	tone(PIEZOPIN, note_C5);
	delay(half_note);
	tone(PIEZOPIN, note_G5);
	delay(half_note);
	tone(PIEZOPIN, note_G5);
	delay(half_note);
	tone(PIEZOPIN, note_A4);
	delay(half_note);
	tone(PIEZOPIN, note_A4);
	delay(half_note);
	tone(PIEZOPIN, note_G5);
	delay(half_note);
}
