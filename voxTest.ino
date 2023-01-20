#include <Encoder.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1351.h>
#include "AudioSampleDoc.h"
#include "AudioSampleDocw.h"
#include "AudioSampleDod.h"
#include "AudioSampleDodw.h"
#include "AudioSampleDoe.h"
#include "AudioSampleDof.h"
#include "AudioSampleDofw.h"
#include "AudioSampleDogw.h"
#include "AudioSampleDoa.h"
#include "AudioSampleDog.h"
#include "AudioSampleDoaw.h"
#include "AudioSampleDob.h"
#include "AudioSampleDobch.h"
#include <Fonts/FreeMonoBoldOblique12pt7b.h>
#include <Fonts/FreeSerif9pt7b.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthNoiseWhite     noise2;         //xy=436.66668701171875,1163.3334197998047
AudioEffectEnvelope      envelope2;      //xy=601.6666526794434,1149.999963760376
AudioSynthWaveform       waveform12;     //xy=644.9999999999999,1916.6666666666663
AudioSynthWaveform       waveform2;      //xy=652.0833587646484,947.9167041778564
AudioSynthNoiseWhite     noise3;         //xy=654.9999465942383,706.6666736602783
AudioSynthNoiseWhite     noise5;         //xy=661.6666666666665,2024.9999999999998
AudioSynthWaveform       waveform11;     //xy=663.3333333333333,1808.333333333333
AudioSynthWaveform       waveform3;      //xy=694.1667175292969,1018.749979019165
AudioSynthWaveform       waveform10;     //xy=691.6666717529297,1691.6665725708008
AudioEffectEnvelope      envelope4;      //xy=721.6667175292969,748.3332805633545
AudioSynthWaveform       waveform1;      //xy=734.9048385620117,870.5356998443604
AudioSynthWaveform       waveform8;      //xy=733.333324432373,1416.6666831970215
AudioSynthWaveform       waveform7;      //xy=741.6666666666665,1329.9999999999998
AudioSynthWaveform       waveform6;      //xy=764.9999923706055,636.6666917800903
AudioSynthNoiseWhite     noise4;         //xy=761.6666564941406,1576.6666088104248
AudioSynthWaveform       waveform9;      //xy=763.3333282470703,1483.3333129882812
AudioSynthWaveform       waveform4;      //xy=776.666675567627,493.333345413208
AudioFilterStateVariable filter6;        //xy=774.9999160766602,1153.333339691162
AudioSynthWaveform       waveform5;      //xy=786.6666603088379,561.6666297912598
AudioEffectEnvelope      envelope8;      //xy=801.6666374206543,2018.3333740234375
AudioMixer4              mixer7;         //xy=849.9999923706055,956.6667251586914
AudioFilterStateVariable filter7;        //xy=868.3333854675293,716.6666564941406
AudioEffectEnvelope      envelope6;      //xy=888.333309173584,1573.3333549499512
AudioMixer4              mixer9;         //xy=931.6666666666665,1841.6666666666663
AudioMixer4              mixer6;         //xy=939.9999771118164,1398.333309173584
AudioPlayMemory          duh;       //xy=950.0001602172852,1171.666591644287
AudioFilterStateVariable filter9;        //xy=948.3333015441895,1981.6666622161865
AudioMixer4              mixer8;         //xy=956.6666641235352,556.6666488647461
AudioEffectEnvelope      envelope1;      //xy=986.6666488647461,961.6666240692139
AudioMixer4              mixer10;        //xy=1014.9999999999999,1040.2414067586262
AudioFilterStateVariable filter8;        //xy=1026.6666297912598,1556.6666069030762
AudioEffectEnvelope      envelope3;      //xy=1106.6665878295898,611.6666917800903
AudioEffectEnvelope      envelope7;      //xy=1111.6665954589844,1843.3333616256714
AudioEffectEnvelope      envelope5;      //xy=1188.3333333333333,1421.6666666666665
AudioMixer4              mixer5;         //xy=1204.9999618530273,974.9999542236328
AudioSynthNoiseWhite     noise1;         //xy=1221.0715408325195,1088.868978023529
AudioFilterStateVariable filter3;        //xy=1411.071472167969,1075.5356931686401
AudioFilterStateVariable filter2;        //xy=1416.0714950561526,905.535704612732
AudioFilterStateVariable filter1;        //xy=1430.5714721679688,834.2856931686401
AudioFilterStateVariable filter5;        //xy=1437.7382164001465,1002.2023906707764
AudioMixer4              mixer1;         //xy=1697.3215599060059,1076.785701751709
AudioEffectFade          fade1;          //xy=1841.071502685547,829.285704612732
AudioMixer4              mixer2;         //xy=1944.8215007781985,921.7857055664064
AudioFilterStateVariable filter4;        //xy=2175.6546630859375,900.1190538406372
AudioEffectFreeverb      freeverb2;      //xy=2218.5715713500977,1043.0357179641724
AudioEffectFreeverb      freeverb1;      //xy=2328.571506500244,698.035704612732
AudioMixer4              mixer3;         //xy=2401.0714721679688,984.2856931686403
AudioMixer4              mixer4;         //xy=2449.8215713500977,806.7857189178467
AudioOutputI2S           i2s1;           //xy=2693.5715713500977,930.5357189178467
AudioConnection          patchCord1(noise2, envelope2);
AudioConnection          patchCord2(envelope2, 0, filter6, 0);
AudioConnection          patchCord3(waveform12, 0, mixer9, 2);
AudioConnection          patchCord4(waveform2, 0, mixer7, 1);
AudioConnection          patchCord5(noise3, envelope4);
AudioConnection          patchCord6(noise5, envelope8);
AudioConnection          patchCord7(waveform11, 0, mixer9, 1);
AudioConnection          patchCord8(waveform3, 0, mixer7, 2);
AudioConnection          patchCord9(waveform10, 0, mixer9, 0);
AudioConnection          patchCord10(envelope4, 0, filter7, 0);
AudioConnection          patchCord11(waveform1, 0, mixer7, 0);
AudioConnection          patchCord12(waveform8, 0, mixer6, 1);
AudioConnection          patchCord13(waveform7, 0, mixer6, 0);
AudioConnection          patchCord14(waveform6, 0, mixer8, 2);
AudioConnection          patchCord15(noise4, envelope6);
AudioConnection          patchCord16(waveform9, 0, mixer6, 2);
AudioConnection          patchCord17(waveform4, 0, mixer8, 0);
AudioConnection          patchCord18(filter6, 0, mixer7, 3);
AudioConnection          patchCord19(waveform5, 0, mixer8, 1);
AudioConnection          patchCord20(envelope8, 0, filter9, 0);
AudioConnection          patchCord21(mixer7, envelope1);
AudioConnection          patchCord22(filter7, 0, mixer8, 3);
AudioConnection          patchCord23(envelope6, 0, filter8, 0);
AudioConnection          patchCord24(mixer9, envelope7);
AudioConnection          patchCord25(mixer6, envelope5);
AudioConnection          patchCord26(duh, 0, mixer10, 1);
AudioConnection          patchCord27(filter9, 0, mixer9, 3);
AudioConnection          patchCord28(mixer8, envelope3);
AudioConnection          patchCord29(envelope1, 0, mixer10, 0);
AudioConnection          patchCord30(mixer10, 0, mixer5, 0);
AudioConnection          patchCord31(filter8, 0, mixer6, 3);
AudioConnection          patchCord32(envelope3, 0, mixer5, 1);
AudioConnection          patchCord33(envelope7, 0, mixer5, 3);
AudioConnection          patchCord34(envelope5, 0, mixer5, 2);
AudioConnection          patchCord35(mixer5, 0, filter1, 0);
AudioConnection          patchCord36(mixer5, 0, filter2, 0);
AudioConnection          patchCord37(mixer5, 0, filter3, 0);
AudioConnection          patchCord38(noise1, 0, filter5, 0);
AudioConnection          patchCord39(filter3, 1, mixer1, 2);
AudioConnection          patchCord40(filter2, 1, mixer1, 1);
AudioConnection          patchCord41(filter1, 1, mixer1, 0);
AudioConnection          patchCord42(filter5, 0, mixer1, 3);
AudioConnection          patchCord43(mixer1, 0, mixer2, 1);
AudioConnection          patchCord44(mixer1, fade1);
AudioConnection          patchCord45(fade1, 0, mixer2, 0);
AudioConnection          patchCord46(mixer2, 0, filter4, 0);
AudioConnection          patchCord47(filter4, 0, freeverb1, 0);
AudioConnection          patchCord48(filter4, 0, mixer4, 0);
AudioConnection          patchCord49(filter4, 0, freeverb2, 0);
AudioConnection          patchCord50(filter4, 0, mixer3, 0);
AudioConnection          patchCord51(freeverb2, 0, mixer3, 1);
AudioConnection          patchCord52(freeverb1, 0, mixer4, 1);
AudioConnection          patchCord53(mixer3, 0, i2s1, 1);
AudioConnection          patchCord54(mixer4, 0, i2s1, 0);
AudioControlSGTL5000     sgtl5000_1;     //xy=1397.5,1178.75
// GUItool: end automatically generated code




AudioMixer4 *mainMixer[4] = {&mixer7, &mixer8, &mixer6, &mixer9};
AudioEffectEnvelope *mainEnvelope[4] = {&envelope1, &envelope3, &envelope5, &envelope7};
AudioSynthWaveform *waveform[12] = {&waveform1, &waveform2, &waveform3, &waveform4, &waveform5, &waveform6, &waveform7, &waveform8, &waveform9, &waveform10, &waveform11, &waveform12};

AudioSynthWaveform *waveformMain[4] = {&waveform1, &waveform4, &waveform7, &waveform10};
//defenitions for the oled and math
#define SCLK_PIN 13
#define MOSI_PIN 11
#define DC_PIN   36
#define CS_PIN   37
#define RST_PIN  39
#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 96
#define  BLACK           0x0000
#define BLUE            0x001F
#define RED             0xF800
#define GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0
#define ORANGE          0xFD20
#define WHITE           0xFFFF
#define PINK                        0xF81F
#define MAROON          0x7800
#define NAVY            0x000F
#define PURPLE          0x780F

#define GREENYELLOW     0xAFE5
#define DARKCYAN        0x03EF
#define OLIVE           0x7BE0


///BITMAPS
// 'New Project', 30x15px
// 'New Project', 30x15px
// 'New Project-2', 30x15px
const unsigned char epd_bitmap_New_Project_2 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x03, 0x80, 0x49, 0x80, 0x04, 0xc8,
  0x38, 0xff, 0xfc, 0x70, 0x08, 0x80, 0x04, 0x40, 0x07, 0x04, 0x83, 0x80, 0x00, 0x08, 0x40, 0x00,
  0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'New Project-3', 30x15px
const unsigned char epd_bitmap_New_Project_3 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x01, 0x00, 0x10, 0x20, 0x81, 0x00, 0x08, 0x51, 0x42, 0x00, 0x05, 0x20, 0x94, 0x00,
  0x06, 0x04, 0x0c, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'New Project-4', 30x15px
const unsigned char epd_bitmap_New_Project_4 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x01, 0xe0, 0x2d, 0x00, 0x02, 0xd0, 0x21, 0x00, 0x02, 0x10, 0x1e, 0x08, 0x41, 0xe0,
  0x40, 0x87, 0x84, 0x08, 0x3f, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'New Project', 30x15px
const unsigned char epd_bitmap_New_Project [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x0f, 0x80, 0x02, 0x10, 0x82, 0x00, 0x07, 0x09, 0x07, 0x00,
  0x02, 0x09, 0x02, 0x00, 0x08, 0x89, 0x08, 0x80, 0x07, 0x09, 0x07, 0x00, 0x00, 0x10, 0x80, 0x00,
  0x00, 0x10, 0x80, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x39, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 320)
const int epd_bitmap_allArray_LEN = 4;
const unsigned char* epd_bitmap_allArray[4] = {
  epd_bitmap_New_Project,
  epd_bitmap_New_Project_2,
  epd_bitmap_New_Project_3,
  epd_bitmap_New_Project_4
};






Encoder knobLeft(16, 17);
Encoder knobRight(40, 14);
bool oscOn = false;
int scaleFreq[4][13] = {
  {65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 123, 130},
  {131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262},
  {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523},
  {523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047}
};
int keyboardPin[13] = {3, 31, 30, 29, 28, 32, 26, 25 , 24, 9, 6, 5, 4};
int keyOnWhich;
bool keyboardState[13] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
bool lastKeyboardState[13] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
int octavePin[2] = {1, 0};
bool octaveState[2] = {HIGH, HIGH};
bool lastOctaveState[2] = {LOW, LOW};
bool keyOn[13] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
long positionLeft  = -999;
long positionRight = -999;
int octaveOn = 2;
bool octaveUp;
bool octaveDown;

int formant[3] = {450, 800, 2830};
float formantMix[3] = {5, 3, 1};
int currentFreq[4] = {100, 100, 100, 100};

int encPosition[2] = {0, 0};
int oldPosition[2] = {0, 30};
int vibFreq[4] = {0, 0, 0, 0};
bool fade = false;
long portaTime[4] = {0, 0, 0, 0};
int portaWait = 300;
long fadeTime = 0;
int vibTime = 100;
int drawWait = 50;
int drawTime = 0;
long vibFreqTime = 0;
int vibFreqWait = 10;
long newLeft, newRight;
bool voice[4] = {LOW, LOW, LOW, LOW};
int voiceKey[4] = {0, 0, 0, 0};
int keyOnVoice[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool freqReached[4] = {false, false, false, false};
int encButtonPin[2] = {15, 41};
bool encButtonState[2] = {HIGH, HIGH};
bool lastEncButtonState[2] = {LOW, LOW};
bool encButtonOn[2] = {false, false};
bool rightSel = false;
bool leftSel = false;
float tremMult = 0.01;
int waveCount = 0;
unsigned long startTime = 0;
Adafruit_SSD1351 oled = Adafruit_SSD1351(SCREEN_WIDTH, SCREEN_HEIGHT, CS_PIN, DC_PIN, MOSI_PIN, SCLK_PIN, RST_PIN);
//Adafruit_SSD1351 oled = Adafruit_SSD1351(SCREEN_WIDTH, SCREEN_HEIGHT, CS_PIN, DC_PIN,  RST_PIN);


class Singer {
  public:
    bool open = false;
    int xPos;
    int yPos;
    int mouthWidth = 3;
    int oldMouthWidth = 3;
    long openTime = 0;
    int openDelay = 8;
    int widthMod = 0;
    int oldWidthMod = 0;
    int bmp;
    int clr;
    int oldX;
    int oldY;
    int mouthRad = 10;
    int oldMouthRad = 10;
    int mouthColor = MAGENTA;
    Singer(int x, int y, int b, int c) {
      xPos = x;
      yPos = y;
      bmp = b;
      clr = c;
    }
    void drawFace() {

      if (oldX != xPos || oldY != yPos) {
        erase();
      }
      oldX = xPos;
      oldY = yPos;

      oled.drawBitmap(xPos - 13, yPos - 12, epd_bitmap_allArray[bmp], 30, 15, clr);
      if (oldWidthMod != widthMod) {
        oled.drawRoundRect(xPos - 14 + oldWidthMod, yPos + 3, 30 - oldWidthMod * 2, mouthWidth, mouthRad, BLACK);
      }
      if (oldMouthRad != mouthRad) {
        oled.drawRoundRect(xPos - 14 + oldWidthMod, yPos + 3, 30 - oldWidthMod * 2, mouthWidth, oldMouthRad, BLACK);
      }
      oldWidthMod = widthMod;
      if (openTime + openDelay < millis()) {
        if (open == true) {

          if (oldMouthWidth < 13) {
            oldMouthWidth = mouthWidth;
            mouthWidth++;
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, oldMouthWidth, mouthRad, BLACK);
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, mouthWidth, mouthRad, mouthColor);


          } else {
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, mouthWidth, mouthRad, mouthColor);


          }
        } else {
          if (oldMouthWidth > 4) {
            oldMouthWidth = mouthWidth;
            mouthWidth--;
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, oldMouthWidth, mouthRad, BLACK);
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, mouthWidth, mouthRad, mouthColor);
          } else {
            oled.drawRoundRect(xPos - 14 + widthMod, yPos + 3, 30 - widthMod * 2, mouthWidth, mouthRad, mouthColor);

          }
        }
      }
      openTime = millis();
    }


    void setOpen(bool set) {
      open = set;
    }
    void setWidthMod(int w) {
      widthMod = w;
    }

    void setX(int x) {
      xPos = x;
    }
    void setY(int y) {
      yPos = y;
    }
    void erase() {
      oled.fillCircle(xPos, yPos, 30, BLACK);
    }
    void setMouthRad(int mr) {
      mouthRad = mr;
    }
};
//
//Singer* face1 = new Singer(20, 30);
//Singer* face2 = new Singer(60, 70);
//Singer* face3 = new Singer(20, 75);
//Singer* face4 = new Singer(50, 15);

void typePressStart(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("PRESS START");
}
Singer singers[4] = {Singer(30, 25, 0, OLIVE), Singer(90, 70, 1, DARKCYAN), Singer(30, 70, 2, MAROON), Singer(90, 20, 3, NAVY)};
void setup() {
  Serial.begin(9600);
  AudioMemory(1200);
  for (int i = 0; i < 2; i++) {

    pinMode(encButtonPin[i], INPUT_PULLUP);
  }
  sgtl5000_1.enable();
  sgtl5000_1.volume(5);

  for (int i = 0; i < 13; i++) {
    pinMode(keyboardPin[i], INPUT_PULLUP);
    if (i < 2) {
      pinMode(octavePin[i], INPUT_PULLUP);
    }
  }
  noise1.amplitude(0);

  for (int i = 0; i < 12; i++) {
    if (i % 3 == 0) {

      if (waveCount == 0) {
        waveform[i]->begin(WAVEFORM_SAWTOOTH);
        waveform[i]->amplitude(.01);
        waveform[i]->frequency(400);
      } else if (waveCount == 1) {
        waveform[i]->begin(WAVEFORM_BANDLIMIT_PULSE);
        waveform[i]->amplitude(.05);
        waveform[i]->frequency(400);
      }
      else if (waveCount == 2) {
        waveform[i]->begin(WAVEFORM_BANDLIMIT_SAWTOOTH_REVERSE);
        waveform[i]->amplitude(.04);
        waveform[i]->frequency(400);
      }
      else if (waveCount == 3) {
        waveform[i]->begin(WAVEFORM_BANDLIMIT_SQUARE);
        waveform[i]->amplitude(.03);
        waveform[i]->frequency(400);
      }
      waveCount++;
    }
  }
  filter1.frequency(formant[0]);
  filter3.frequency(formant[1]);
  filter2.frequency(formant[2]);
  filter4.frequency(2700);
  filter1.resonance(5);
  filter2.resonance(5);
  filter3.resonance(5);
  freeverb1.roomsize(.6);
  freeverb1.damping(.1);
  freeverb2.roomsize(.5);
  freeverb2.damping(0);
  mixer1.gain(0, 1);
  mixer1.gain(1, 1);
  mixer1.gain(2, 1);
  mixer2.gain(0, .3);
  mixer2.gain(1, .8);
  mixer3.gain(1, 1);
  mixer3.gain(0, 5);
  mixer4.gain(1, 1);
  mixer4.gain(0, 10);
  envelope1.attack(40);
  envelope1.release(50);
  envelope3.attack(40);
  envelope3.release(50);
  envelope5.attack(40);
  envelope5.release(50);
  envelope7.attack(40);
  envelope7.release(50);
  envelope2.release(15);
  envelope2.attack(2);
  envelope4.release(15);
  envelope4.attack(2);
  envelope6.release(15);
  envelope6.attack(2);
  envelope8.release(15);
  envelope8.attack(2);
  filter6.frequency(500);

  filter7.frequency(500);

  filter8.frequency(500);

  filter9.frequency(500);

  noise2.amplitude(.1);
  noise3.amplitude(.1);
  noise4.amplitude(.1);
  noise5.amplitude(.1);
  filter5.frequency(1500);
  mixer5.gain(3, 1);
  mixer5.gain(0, 2);
  mixer2.gain(2, 1);
  envelope2.noteOn();
  envelope4.noteOn();
  envelope6.noteOn();
  envelope8.noteOn();
  mixer10.gain(1, .06);
  oled.begin();



  ///


  ///
  oled.fillScreen(BLACK);
  knobRight.write(50 * 2);
  knobLeft.write(30 * 2);

  while(digitalRead(encButtonPin[0]) == HIGH){
    voice[0] = HIGH;
    
    typeTitle(0, 53);
     singers[1].setWidthMod (0);
    singers[1].drawFace();
  
  }
  oled.fillScreen(BLACK);
}

void loop() {


  for (int i = 0; i < 4; i++) {
    singers[i].drawFace();
  }
  checkEncButtons();
  keyboard();
  vibrato();
  playNote();
  octave();

  rightEncoder(0, 50);
  leftEncoder(0, 50);
  formantShift();
  reverbShift();
  filter1.frequency(formant[0]);
  filter2.frequency(formant[1]);
  filter3.frequency(formant[2]);
  mixer1.gain(0, 1);
  mixer1.gain(0, formantMix[1]);
  mixer1.gain(0, formantMix[2]);
  mixer1.gain(0, .05);


}

void keyboard() {
  for (int i = 0; i < 13; i++) {

    keyboardState[i] = digitalRead(keyboardPin[i]);

    if (lastKeyboardState[i] == HIGH and keyboardState[i] == LOW) {
      //solfege
      if (i == 0) {
        duh.play(AudioSampleDoc);
      } else if (i == 1) {
        duh.play(AudioSampleDocw);
      } else if (i == 2) {
        duh.play(AudioSampleDod);
      } else if (i == 3) {
        duh.play(AudioSampleDodw);
      } else if (i == 4) {
        duh.play(AudioSampleDoe);
      } else if (i == 5) {
        duh.play(AudioSampleDof);
      } else if (i == 6) {
        duh.play(AudioSampleDofw);
      } else if (i == 7) {
        duh.play(AudioSampleDog);
      } else if (i == 8) {
        duh.play(AudioSampleDogw);
      } else if (i == 9) {
        duh.play(AudioSampleDoa);
      } else if (i == 10) {
        duh.play(AudioSampleDoaw);
      } else if (i == 11) {
        duh.play(AudioSampleDob);
      } else if (i == 12) {
        duh.play(AudioSampleDobch);
      }




      if (voice[0] == LOW) {

        singers[0].setOpen(true);
        voiceKey[0] = i;
        keyOnVoice[i] = 0;
        voice[0] = HIGH;
        mainEnvelope[0]->noteOn();

      } else if (voice[1] == LOW) {
        \
        voiceKey[1] = i;
        singers[1].setOpen(true);
        keyOnVoice[i] = 1;
        voice[1] = HIGH;
        mainEnvelope[1]->noteOn();

      }
      else if (voice[2] == LOW) {

        voiceKey[2] = i;
        singers[2].setOpen(true);
        keyOnVoice[i] = 2;
        voice[2] = HIGH;
        mainEnvelope[2]->noteOn();

      }
      else if (voice[3] == LOW) {

        voiceKey[3] = i;
        singers[3].setOpen(true);
        keyOnVoice[i] = 3;
        voice[3] = HIGH;
        mainEnvelope[3]->noteOn();
      } else {

        voiceKey[3] = i;
        keyOnVoice[i] = 3;
        mainEnvelope[3]->noteOn();

      }
      keyOn[i] = true;

      delay(5);
    } else if (lastKeyboardState[i] == LOW and keyboardState[i] == HIGH) {

      voice[keyOnVoice[i]] = LOW;
      mainEnvelope[keyOnVoice[i]]->noteOff();
      singers[keyOnVoice[i]].setOpen(false);
      keyOn[i] = false;
      delay(5);
    }

    lastKeyboardState[i] = keyboardState[i];
  }
}

void playNote() {

  for (int i = 0; i < 4; i++) {

    if (voice[i] == HIGH) {
      //      Serial.println("cur is ");
      //      Serial.println(curretnFreq[i]);
      //      Serial.println("freq is ");
      //      Serial.println(scaleFreq[octaveOn][voiceKey[i]]);
      //      Serial.println("oct is ");
      //      Serial.println(octaveOn);
      if (currentFreq[i] < scaleFreq[octaveOn][voiceKey[i]]) {
        freqReached[i] = false;
        //  if (portaTime + portaWait < millis()) {
        currentFreq[i] += 50;


        // }
      } else if (currentFreq[i] > scaleFreq[octaveOn][voiceKey[i]]) {
        //f (portaTime + portaWait < millis()) {
        currentFreq[i] -= 50;
        freqReached[i] = false;

        //}
      }
      if (scaleFreq[octaveOn][voiceKey[i]] - 50 < currentFreq[i] && scaleFreq[octaveOn][voiceKey[i]] + 50 > currentFreq[i]) {
        if (freqReached[i] == false) {
          currentFreq[i] = scaleFreq[octaveOn][voiceKey[i]];
          freqReached[i] = true;
        }
      }
      if (portaTime[i] + portaWait < millis()) {
        currentFreq[i] += random(0, 10 );

        currentFreq[i] -= random(0, 10 );
        portaTime[i] = millis();
      }

      waveformMain[i]->frequency(currentFreq[i] + vibFreq[i]);

    }
  }

}

void octave() {
  for (int i = 0; i < 2; i++) {

    octaveState[i] = digitalRead(octavePin[i]);

    if (lastOctaveState[i] == HIGH and octaveState[i] == LOW) {

      if (i == 0) {
        octaveUp = true;
        octaveOn++;
        if (octaveOn > 3) {
          octaveOn = 3;
        }
        Serial.println("up");
      }
      if (i == 1) {
        octaveOn--;
        if (octaveOn < 0) {
          octaveOn = 0;
        }
        octaveDown = true;
        Serial.println("down");
      }
      delay(5);
    } else {
      if (i == 0) {
        octaveUp = false;

      }
      if (i == 1) {
        octaveDown = false;

      }
      delay(5);
    }

    lastOctaveState[i] = octaveState[i];
  }
}

int vibrato() {
  if (fadeTime + vibTime < millis()) {
    if (fade == false) {
      fade1.fadeOut(vibTime);

      fade = true;
    } else {
      fade1.fadeIn(vibTime);

      fade = false;
    }
    fadeTime = millis();


  }
  if (vibFreqTime + vibFreqWait < millis()) {
    for (int i = 0; i < 4; i++) {
      if (fade == false) {
        vibFreq[i] += scaleFreq[octaveOn][voiceKey[i]] * tremMult;
      } else {
        vibFreq[i] -= scaleFreq[octaveOn][voiceKey[i]] * tremMult;

      }
    }
    vibFreqTime = millis();
  }
}
//void encoders() {
//
//  newLeft = knobLeft.read()/2;
//  newRight = knobRight.read()/2;
//  if (newLeft != positionLeft || newRight != positionRight) {
//    positionLeft = newLeft;
//    positionRight = newRight;
//  }
//}



void rightEncoder(int min, int max) {



  encPosition[0] = knobRight.read() / 2;

  if (encPosition[0] > oldPosition[0]) {

    oldPosition[0] = encPosition[0];

  }  if (encPosition[0] < oldPosition[0]) {

    oldPosition[0] = encPosition[0];



  }
  if (oldPosition[0] > max) {
    oldPosition[0] = max;
    knobRight.write(max * 2);
  }
  if (oldPosition[0] < min) {
    oldPosition[0] = min;
    knobRight.write(min * 2);
  }

}
void leftEncoder(int min, int max) {



  encPosition[1] = knobLeft.read() / 2;

  if (encPosition[1] > oldPosition[1]) {

    oldPosition[1] = encPosition[1];

  }  if (encPosition[1] < oldPosition[1]) {

    oldPosition[1] = encPosition[1];



  }
  if (oldPosition[1] > max) {
    oldPosition[1] = max;
    knobLeft.write(max * 2);
  }
  if (oldPosition[1] < min) {
    oldPosition[1] = min;
    knobLeft.write(min * 2);
  }

}
float mapF(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void formantShift() {
  if (rightSel == false) {
    for (int i = 0; i < 3; i++) {
      if (i == 0) {
        formant[0] = map(oldPosition[0], 0, 50, 400, 450);

      }
      if (i == 1) {
        formant[1] = map(oldPosition[0], 0, 50, 1700, 800);
        formantMix[1] = mapF((float)oldPosition[0], 0.0, 50.0, .6, .7);
      }
      if (i == 2) {
        formant[2] = map(oldPosition[0], 0, 50, 2600, 2830);
        formantMix[2] = mapF((float)oldPosition[0], 0.0, 50.0, .7, .4);
      }
    }
    for (int i = 0; i < 4; i++) {
      singers[i].setWidthMod(map(oldPosition[0], 0, 50, 0, 8));
    }
  }
  //  else {
  //    tremMult = mapF(oldPosition[0], 0.0, 50.0, .00, .1);
  //    for (int i = 0; i < 4; i++) {
  //      singers[i].setMouthRad(map(oldPosition[0], 0, 50, 1, 11));
  //    }
  //  }
}

void reverbShift() {
  freeverb1.roomsize(mapF((float)oldPosition[1], 0.0, 50.0, 0.0, 1.0));
  freeverb2.roomsize(mapF((float)oldPosition[1], 0.0, 50.0, 0.0, 1.0));
  singers[0].setX(map(oldPosition[1], 0, 50, 43, 20));
  singers[0].setY(map(oldPosition[1], 0, 50, 35, 20));
  singers[1].setX(map(oldPosition[1], 0, 50, 70, 100));
  singers[1].setY(map(oldPosition[1], 0, 50, 55, 75));
  singers[2].setX(map(oldPosition[1], 0, 50, 43, 20));
  singers[2].setY(map(oldPosition[1], 0, 50, 55, 75));
  singers[3].setX(map(oldPosition[1], 0, 50, 70, 100));
  singers[3].setY(map(oldPosition[1], 0, 50, 35, 20));
  //Singer singers[4] = {Singer(30, 25, 0, OLIVE), Singer(90, 70, 1, DARKCYAN), Singer(30, 70, 2, MAROON), Singer(90, 20, 3, NAVY)};

}

void checkEncButtons() {
  for (int i = 0; i < 2; i++) {
    encButtonState[i] = digitalRead(encButtonPin[i]);
    if (encButtonState[i] == LOW && lastEncButtonState[i] == HIGH) {
      encButtonOn[i] = true;
      rightSel = true;
      Serial.println(i);
    }
    if (encButtonState[i] == HIGH && lastEncButtonState[i] == LOW) {
      encButtonOn[i] = false;
      rightSel = false;
      Serial.println(i);
    }
    lastEncButtonState[i] = encButtonState[i];
  }
}
void typeTitle(int x, int y) {
  oled.setFont(&FreeSerif9pt7b);
  oled.setCursor(x, y);

  oled.setTextColor(BLUE);
  oled.print("S");
    oled.setTextColor(RED);
  oled.print("e");
    oled.setTextColor(GREEN);
  oled.print("r");
    oled.setTextColor(CYAN);
  oled.print("e");
    oled.setTextColor(NAVY);
  oled.print("n");
    oled.setTextColor(YELLOW);
  oled.print("a");
    oled.setTextColor(GREENYELLOW);
  oled.print("d");
    oled.setTextColor(MAGENTA);
  oled.print("e");
}
