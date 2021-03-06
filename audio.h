#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "game.h"

#ifndef __AUDIO__
#define __AUDIO__

// struct que armazena samples dos áudios desejados
typedef struct audio_s
{
    ALLEGRO_SAMPLE *diamond;
    ALLEGRO_SAMPLE *step;
    ALLEGRO_SAMPLE *boulder_hit;
    ALLEGRO_SAMPLE *explosion;
    ALLEGRO_SAMPLE *victory;
    ALLEGRO_SAMPLE *open_door;
    ALLEGRO_SAMPLE *wow;
} audio_t;

void initialize_audio(audio_t *audio);

void init_audio(audio_t *audio);

void play_sample(ALLEGRO_SAMPLE *sample, float v);

void play_audio(ALLEGRO_SAMPLE *sample, int *n_plays);

void play_instant_samples(audio_t *audio, game_t *game);

void destroy_audio(audio_t *audio);

#endif