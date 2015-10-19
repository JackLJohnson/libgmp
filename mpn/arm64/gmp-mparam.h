Parameters for /home/tege/prec/gmp-snap/mpn/generic/gmp-mparam.h
clock_gettime is 1.000ns accurate
Using: microsecond accurate clock_gettime()
speed_precision 25000, speed_unittime 1.00e-09 secs, CPU freq 2400.00 MHz
DEFAULT_MAX_SIZE 1000, fft_max_size 50000000

/* Generated by tuneup.c, 2015-10-18, gcc 4.8 */

#define DIVREM_1_NORM_THRESHOLD              0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1P_METHOD                      1
#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          7
#define MOD_1U_TO_MOD_1_1_THRESHOLD          6
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         0  /* never mpn_mod_1_1p */
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        28
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     13
#define USE_PREINV_DIVREM_1                  1
#define DIV_QR_1N_PI1_METHOD                 1
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD            1
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always */
#define BMOD_1_TO_MOD_1_THRESHOLD           30

#define MUL_TOOM22_THRESHOLD                14
#define MUL_TOOM33_THRESHOLD                57
#define MUL_TOOM44_THRESHOLD               154
#define MUL_TOOM6H_THRESHOLD               206
#define MUL_TOOM8H_THRESHOLD               309

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      89
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     102
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      89
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     104
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     130

#define SQR_BASECASE_THRESHOLD               6
#define SQR_TOOM2_THRESHOLD                 28
#define SQR_TOOM3_THRESHOLD                 93
#define SQR_TOOM4_THRESHOLD                160
#define SQR_TOOM6_THRESHOLD                197
#define SQR_TOOM8_THRESHOLD                284

#define MULMID_TOOM42_THRESHOLD             34

#define MULMOD_BNM1_THRESHOLD               12
#define SQRMOD_BNM1_THRESHOLD               13

#define MUL_FFT_MODF_THRESHOLD             308  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    308, 5}, {     13, 6}, {      7, 5}, {     15, 6}, \
    {      8, 5}, {     17, 6}, {     13, 7}, {      7, 6}, \
    {     15, 7}, {      8, 6}, {     17, 7}, {     17, 8}, \
    {      9, 7}, {     20, 8}, {     11, 7}, {     24, 8}, \
    {     13, 7}, {     27, 9}, {      7, 8}, {     15, 7}, \
    {     31, 8}, {     21, 9}, {     11, 8}, {     27, 9}, \
    {     15, 8}, {     35, 9}, {     19, 8}, {     39, 9}, \
    {     23, 8}, {     47, 9}, {     27,10}, {     15, 9}, \
    {     31, 8}, {     63, 9}, {     39,10}, {     23, 9}, \
    {     55,11}, {     15,10}, {     31, 9}, {     71,10}, \
    {     39, 9}, {     83,10}, {     47, 9}, {     99,10}, \
    {     55,11}, {     31,10}, {     63, 9}, {    127,10}, \
    {     79, 9}, {    159,11}, {     47,10}, {     95, 9}, \
    {    191, 8}, {    383,10}, {    103,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255, 8}, {    511,10}, \
    {    135, 9}, {    271,10}, {    143,11}, {     79,10}, \
    {    159, 9}, {    319, 8}, {    639,10}, {    175, 9}, \
    {    351, 8}, {    703,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767,10}, {    207, 9}, {    415, 8}, \
    {    831,11}, {    111,10}, {    223,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,10}, {    271, 9}, \
    {    543,10}, {    287, 9}, {    575,11}, {    159,10}, \
    {    319, 9}, {    639,11}, {    175,10}, {    351, 9}, \
    {    703,12}, {     95,11}, {    191,10}, {    383, 9}, \
    {    767,11}, {    207,10}, {    415, 9}, {    831,11}, \
    {    223,10}, {    447,13}, {     63,12}, {    127,11}, \
    {    255,10}, {    511,11}, {    271,10}, {    543,11}, \
    {    287,10}, {    575,12}, {    159,11}, {    319,10}, \
    {    639,11}, {    351,10}, {    703,11}, {    383,10}, \
    {    767,11}, {    415,10}, {    831,12}, {    223,11}, \
    {    447,10}, {    895,11}, {    479,10}, {    959,13}, \
    {    127,11}, {    543,12}, {    287,11}, {    575,10}, \
    {   1151,12}, {    319,11}, {    639,12}, {    351,11}, \
    {    703,10}, {   1407, 9}, {   2815,12}, {    383,11}, \
    {    767,12}, {    415,11}, {    831,10}, {   1663,12}, \
    {    447,11}, {    895,10}, {   1791,12}, {    479,11}, \
    {    959,10}, {   1919,14}, {    127,13}, {    255,12}, \
    {    511,11}, {   1023,12}, {    543,11}, {   1087,12}, \
    {    575,11}, {   1151,13}, {    319,12}, {    639,11}, \
    {   1279,12}, {    703,11}, {   1407,13}, {    383,12}, \
    {    767,11}, {   1535,12}, {    831,11}, {   1663,13}, \
    {    447,12}, {    959,11}, {   1919,14}, {    255,13}, \
    {    511,12}, {   1087,13}, {    575,12}, {   1215,13}, \
    {    639,12}, {   1279,13}, {    703,12}, {   1407,14}, \
    {    383,13}, {    767,12}, {   1535,13}, {    831,12}, \
    {   1663,13}, {    895,12}, {   1791,13}, {    959,12}, \
    {   1919,15}, {    255,14}, {    511,13}, {   1087,12}, \
    {   2175,13}, {   1151,14}, {    639,13}, {   1407,12}, \
    {   2815,14}, {    767,13}, {   1663,14}, {    895,13}, \
    {   1919,15}, {    511,14}, {   1023,13}, {   2175,14}, \
    {   1151,13}, {   2431,14}, {   1407,13}, {   2815,15}, \
    {    767,14}, {   1919,16}, {    511,15}, {   1023,14}, \
    {   2431,15}, {   1279,14}, {   2943,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 220
#define MUL_FFT_THRESHOLD                 3520

#define SQR_FFT_MODF_THRESHOLD             272  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    272, 5}, {     13, 6}, {      7, 5}, {     15, 6}, \
    {     17, 7}, {      9, 6}, {     19, 7}, {     17, 8}, \
    {      9, 7}, {     20, 8}, {     11, 7}, {     24, 8}, \
    {     13, 9}, {      7, 8}, {     15, 7}, {     31, 8}, \
    {     21, 9}, {     11, 8}, {     27,10}, {      7, 9}, \
    {     15, 8}, {     33, 9}, {     19, 8}, {     39, 9}, \
    {     23, 8}, {     47, 9}, {     27,10}, {     15, 9}, \
    {     39,10}, {     23, 9}, {     51,11}, {     15,10}, \
    {     31, 9}, {     67,10}, {     39, 9}, {     79,10}, \
    {     47, 9}, {     95,10}, {     55,11}, {     31,10}, \
    {     63, 8}, {    255,10}, {     71, 9}, {    143, 8}, \
    {    287,10}, {     79,11}, {     47,10}, {     95, 9}, \
    {    191,12}, {     31,11}, {     63, 9}, {    255, 8}, \
    {    511,10}, {    143, 9}, {    287,11}, {     79,10}, \
    {    159, 9}, {    319, 8}, {    639,10}, {    175, 9}, \
    {    351, 8}, {    703,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767,10}, {    207, 9}, {    415,12}, \
    {     63,10}, {    255, 9}, {    511,11}, {    143,10}, \
    {    287, 9}, {    575,11}, {    159,10}, {    319, 9}, \
    {    639,11}, {    175,10}, {    351, 9}, {    703,12}, \
    {     95,11}, {    191,10}, {    383, 9}, {    767,11}, \
    {    207,10}, {    415, 9}, {    831,11}, {    223,13}, \
    {     63,11}, {    255,10}, {    511, 9}, {   1023,11}, \
    {    287,10}, {    575, 9}, {   1151,12}, {    159,11}, \
    {    319,10}, {    639,11}, {    351,10}, {    703, 9}, \
    {   1407,12}, {    191,11}, {    383,10}, {    767,11}, \
    {    415,10}, {    831,12}, {    223,11}, {    447,10}, \
    {    895,11}, {    479,10}, {    959,12}, {    255,11}, \
    {    511,10}, {   1023,12}, {    287,11}, {    575,10}, \
    {   1151,12}, {    319,11}, {    639,12}, {    351,11}, \
    {    703,10}, {   1407,12}, {    383,11}, {    767,12}, \
    {    415,11}, {    831,10}, {   1663,12}, {    447,11}, \
    {    895,12}, {    479,11}, {    959,10}, {   1919,13}, \
    {    255,12}, {    511,11}, {   1023,12}, {    543,11}, \
    {   1087,12}, {    575,11}, {   1151,13}, {    319,12}, \
    {    639,11}, {   1279,12}, {    703,11}, {   1407,10}, \
    {   2815,13}, {    383,12}, {    831,11}, {   1663,13}, \
    {    447,12}, {    895,11}, {   1791,12}, {    959,11}, \
    {   1919,14}, {    255,13}, {    511,12}, {   1087,13}, \
    {    575,12}, {   1215,13}, {    639,12}, {   1279,13}, \
    {    703,12}, {   1407,11}, {   2815,14}, {    383,13}, \
    {    831,12}, {   1663,13}, {    895,12}, {   1791,13}, \
    {    959,12}, {   1919,15}, {    255,14}, {    511,13}, \
    {   1087,12}, {   2175,13}, {   1215,14}, {    639,13}, \
    {   1407,12}, {   2815,14}, {    767,13}, {   1663,14}, \
    {    895,13}, {   1919,12}, {   3839,15}, {    511,14}, \
    {   1023,13}, {   2175,14}, {   1151,13}, {   2431,12}, \
    {   4863,14}, {   1407,13}, {   2815,15}, {    767,14}, \
    {   1919,13}, {   3839,16}, {    511,15}, {   1023,14}, \
    {   2431,13}, {   4863,15}, {   1279,14}, {   2943,13}, \
    {   5887,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 210
#define SQR_FFT_THRESHOLD                 2496

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  45
#define MULLO_MUL_N_THRESHOLD             7035
#define SQRLO_BASECASE_THRESHOLD             4
#define SQRLO_DC_THRESHOLD                 108
#define SQRLO_SQR_THRESHOLD               4955

#define DC_DIV_QR_THRESHOLD                 51
#define DC_DIVAPPR_Q_THRESHOLD             184
#define DC_BDIV_QR_THRESHOLD                47
#define DC_BDIV_Q_THRESHOLD                 50

#define INV_MULMOD_BNM1_THRESHOLD           26
#define INV_NEWTON_THRESHOLD               228
#define INV_APPR_THRESHOLD                 204

#define BINV_NEWTON_THRESHOLD              248
#define REDC_1_TO_REDC_N_THRESHOLD          60

#define MU_DIV_QR_THRESHOLD               1210
#define MU_DIVAPPR_Q_THRESHOLD            1234
#define MUPI_DIV_QR_THRESHOLD              116
#define MU_BDIV_QR_THRESHOLD               889
#define MU_BDIV_Q_THRESHOLD               1210

#define POWM_SEC_TABLE  1,23,194,712,2177

#define GET_STR_DC_THRESHOLD                10
#define GET_STR_PRECOMPUTE_THRESHOLD        22
#define SET_STR_DC_THRESHOLD              1105
#define SET_STR_PRECOMPUTE_THRESHOLD      3109

#define FAC_DSC_THRESHOLD                  298
#define FAC_ODD_THRESHOLD                   27

#define MATRIX22_STRASSEN_THRESHOLD         15
#define HGCD_THRESHOLD                     134
#define HGCD_APPR_THRESHOLD                166
#define HGCD_REDUCE_THRESHOLD             2121
#define GCD_DC_THRESHOLD                   531
#define GCDEXT_DC_THRESHOLD                386
#define JACOBI_BASE_METHOD                   4

/* Tuneup completed successfully, took 65068 seconds */
