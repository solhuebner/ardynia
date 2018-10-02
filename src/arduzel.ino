#include <EEPROM.h>
#include <Arduboy2.h>
#include <ArduboyPlaytune.h>
#include <math.h>

#include "game.h"
#include "renderer.h"
#include "util.h"
#include "sfx.h"
#include "tileBitmaps.h"

Arduboy2Base arduboy;
ArduboyPlaytune tones(arduboy.audio.enabled);

Renderer renderer(arduboy);
Game game(arduboy, renderer);

void setup() {
    arduboy.boot();
    arduboy.audio.begin();
    Sfx::init(&tones);

#ifdef SERIAL_LOG
    Serial.begin(9600);
    delay(1500);
    LOG("setup done");
#endif
}

uint8_t loopCounter = 1;

void loop() {
    if (!arduboy.nextFrame()) {
        return;
    }

    loopCounter += 1;

    if (loopCounter == 61) {
        loopCounter = 1;
    }

    arduboy.clear();
    arduboy.pollButtons();
    
    game.update(loopCounter);
    game.render(loopCounter);
    arduboy.display();

    arduboy.idle();
}

