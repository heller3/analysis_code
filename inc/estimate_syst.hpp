#ifndef H_SCATTER_MJ_MT
#define H_SCATTER_MJ_MT

#include <vector>
#include <string>
#include <set>

#include "TGraph.h"
#include "TRandom3.h"
#include "TPaveText.h"
#include "TH2D.h"

#include "baby_basic.hpp"

void GetOptions(int argc, char *argv[]);

float VaryWeight(baby_basic &st, const char* whichsyst, TRandom3 &rand); 

float GetFluctWeight(float weight_central, float weight_sigma, TRandom3 &rand); 

void GetSystOneRegion ( baby_basic &st, const char *region, const char *whichsyst, TRandom3 &rand, 
                        int njets_low, int njets_high, int nbm_low, int nbm_high, float met_low, float met_high);

void GetJECSystOneRegion ( baby_basic &st, const char *region, 
                        int njets_low, int njets_high, int nbm_low, int nbm_high, float met_low, float met_high);

#endif
