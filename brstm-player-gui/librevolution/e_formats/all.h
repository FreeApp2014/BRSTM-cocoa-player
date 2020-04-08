//Include all formats
#include "brstm.h"
#include "bcstm.h"
#include "bfstm.h"
#include "bwav.h"

unsigned char brstm_formats_encode_brstm(Brstm* brstmi,signed int debugLevel,uint8_t encodeADPCM);
unsigned char brstm_formats_encode_bcstm(Brstm* brstmi,signed int debugLevel,uint8_t encodeADPCM);
unsigned char brstm_formats_encode_bfstm(Brstm* brstmi,signed int debugLevel,uint8_t encodeADPCM);
unsigned char brstm_formats_encode_bwav (Brstm* brstmi,signed int debugLevel,uint8_t encodeADPCM);
