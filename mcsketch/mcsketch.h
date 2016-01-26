#ifndef MC_SKETCH_H
#define MC_SKETCH_H

#include "../sketch_config.h"

#ifdef MC

typedef sketch_l sketch_r;

struct auxi_t {
    size_t w;
    size_t c;
};

typedef struct mcsketch_t {
    size_t D;
    size_t WL;
    size_t WR;
    size_t Z;

    //counter:
    size_t bits_c;       // Memory bits for a single counter
    size_t max_c;        // Upper limit for a counter

    //sketch:
    sketch_l * left;   //slim sketch
    sketch_r * right;  //fat/multi-counter sketch

    //auxilary data
    struct auxi_t auxis[MAX_D];
    size_t aux_minr;
} mcsketch;

#endif //MC
#endif // MC_SKETCH_H
