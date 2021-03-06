#include "solver.h"
void multbymA(double* lhs, double* rhs)
{
  lhs[0] = -rhs[108] * (-params.B_0[0]) - rhs[109] * (-params.B_0[6]) - rhs[110] * (-params.B_0[12]) - rhs[162] * (1);
  lhs[1] = -rhs[108] * (-params.B_0[1]) - rhs[109] * (-params.B_0[7]) - rhs[110] * (-params.B_0[13]) - rhs[163] * (1);
  lhs[2] = -rhs[108] * (-params.B_0[2]) - rhs[109] * (-params.B_0[8]) - rhs[110] * (-params.B_0[14]) - rhs[164] * (1);
  lhs[3] = -rhs[108] * (-params.B_0[3]) - rhs[109] * (-params.B_0[9]) - rhs[110] * (-params.B_0[15]) - rhs[165] * (1);
  lhs[4] = -rhs[108] * (-params.B_0[4]) - rhs[109] * (-params.B_0[10]) - rhs[110] * (-params.B_0[16]) - rhs[166] * (1);
  lhs[5] = -rhs[108] * (-params.B_0[5]) - rhs[109] * (-params.B_0[11]) - rhs[110] * (-params.B_0[17]) - rhs[167] * (1);
  lhs[6] = -rhs[111] * (-params.B_1[0]) - rhs[112] * (-params.B_1[6]) - rhs[113] * (-params.B_1[12]) -
           rhs[162] * (-params.A_1[0]) - rhs[163] * (-params.A_1[6]) - rhs[164] * (-params.A_1[12]) -
           rhs[165] * (-params.A_1[18]) - rhs[166] * (-params.A_1[24]) - rhs[167] * (-params.A_1[30]) - rhs[168] * (1);
  lhs[7] = -rhs[111] * (-params.B_1[1]) - rhs[112] * (-params.B_1[7]) - rhs[113] * (-params.B_1[13]) -
           rhs[162] * (-params.A_1[1]) - rhs[163] * (-params.A_1[7]) - rhs[164] * (-params.A_1[13]) -
           rhs[165] * (-params.A_1[19]) - rhs[166] * (-params.A_1[25]) - rhs[167] * (-params.A_1[31]) - rhs[169] * (1);
  lhs[8] = -rhs[111] * (-params.B_1[2]) - rhs[112] * (-params.B_1[8]) - rhs[113] * (-params.B_1[14]) -
           rhs[162] * (-params.A_1[2]) - rhs[163] * (-params.A_1[8]) - rhs[164] * (-params.A_1[14]) -
           rhs[165] * (-params.A_1[20]) - rhs[166] * (-params.A_1[26]) - rhs[167] * (-params.A_1[32]) - rhs[170] * (1);
  lhs[9] = -rhs[111] * (-params.B_1[3]) - rhs[112] * (-params.B_1[9]) - rhs[113] * (-params.B_1[15]) -
           rhs[162] * (-params.A_1[3]) - rhs[163] * (-params.A_1[9]) - rhs[164] * (-params.A_1[15]) -
           rhs[165] * (-params.A_1[21]) - rhs[166] * (-params.A_1[27]) - rhs[167] * (-params.A_1[33]) - rhs[171] * (1);
  lhs[10] = -rhs[111] * (-params.B_1[4]) - rhs[112] * (-params.B_1[10]) - rhs[113] * (-params.B_1[16]) -
            rhs[162] * (-params.A_1[4]) - rhs[163] * (-params.A_1[10]) - rhs[164] * (-params.A_1[16]) -
            rhs[165] * (-params.A_1[22]) - rhs[166] * (-params.A_1[28]) - rhs[167] * (-params.A_1[34]) - rhs[172] * (1);
  lhs[11] = -rhs[111] * (-params.B_1[5]) - rhs[112] * (-params.B_1[11]) - rhs[113] * (-params.B_1[17]) -
            rhs[162] * (-params.A_1[5]) - rhs[163] * (-params.A_1[11]) - rhs[164] * (-params.A_1[17]) -
            rhs[165] * (-params.A_1[23]) - rhs[166] * (-params.A_1[29]) - rhs[167] * (-params.A_1[35]) - rhs[173] * (1);
  lhs[12] = -rhs[114] * (-params.B_2[0]) - rhs[115] * (-params.B_2[6]) - rhs[116] * (-params.B_2[12]) -
            rhs[168] * (-params.A_2[0]) - rhs[169] * (-params.A_2[6]) - rhs[170] * (-params.A_2[12]) -
            rhs[171] * (-params.A_2[18]) - rhs[172] * (-params.A_2[24]) - rhs[173] * (-params.A_2[30]) - rhs[174] * (1);
  lhs[13] = -rhs[114] * (-params.B_2[1]) - rhs[115] * (-params.B_2[7]) - rhs[116] * (-params.B_2[13]) -
            rhs[168] * (-params.A_2[1]) - rhs[169] * (-params.A_2[7]) - rhs[170] * (-params.A_2[13]) -
            rhs[171] * (-params.A_2[19]) - rhs[172] * (-params.A_2[25]) - rhs[173] * (-params.A_2[31]) - rhs[175] * (1);
  lhs[14] = -rhs[114] * (-params.B_2[2]) - rhs[115] * (-params.B_2[8]) - rhs[116] * (-params.B_2[14]) -
            rhs[168] * (-params.A_2[2]) - rhs[169] * (-params.A_2[8]) - rhs[170] * (-params.A_2[14]) -
            rhs[171] * (-params.A_2[20]) - rhs[172] * (-params.A_2[26]) - rhs[173] * (-params.A_2[32]) - rhs[176] * (1);
  lhs[15] = -rhs[114] * (-params.B_2[3]) - rhs[115] * (-params.B_2[9]) - rhs[116] * (-params.B_2[15]) -
            rhs[168] * (-params.A_2[3]) - rhs[169] * (-params.A_2[9]) - rhs[170] * (-params.A_2[15]) -
            rhs[171] * (-params.A_2[21]) - rhs[172] * (-params.A_2[27]) - rhs[173] * (-params.A_2[33]) - rhs[177] * (1);
  lhs[16] = -rhs[114] * (-params.B_2[4]) - rhs[115] * (-params.B_2[10]) - rhs[116] * (-params.B_2[16]) -
            rhs[168] * (-params.A_2[4]) - rhs[169] * (-params.A_2[10]) - rhs[170] * (-params.A_2[16]) -
            rhs[171] * (-params.A_2[22]) - rhs[172] * (-params.A_2[28]) - rhs[173] * (-params.A_2[34]) - rhs[178] * (1);
  lhs[17] = -rhs[114] * (-params.B_2[5]) - rhs[115] * (-params.B_2[11]) - rhs[116] * (-params.B_2[17]) -
            rhs[168] * (-params.A_2[5]) - rhs[169] * (-params.A_2[11]) - rhs[170] * (-params.A_2[17]) -
            rhs[171] * (-params.A_2[23]) - rhs[172] * (-params.A_2[29]) - rhs[173] * (-params.A_2[35]) - rhs[179] * (1);
  lhs[18] = -rhs[117] * (-params.B_3[0]) - rhs[118] * (-params.B_3[6]) - rhs[119] * (-params.B_3[12]) -
            rhs[174] * (-params.A_3[0]) - rhs[175] * (-params.A_3[6]) - rhs[176] * (-params.A_3[12]) -
            rhs[177] * (-params.A_3[18]) - rhs[178] * (-params.A_3[24]) - rhs[179] * (-params.A_3[30]) - rhs[180] * (1);
  lhs[19] = -rhs[117] * (-params.B_3[1]) - rhs[118] * (-params.B_3[7]) - rhs[119] * (-params.B_3[13]) -
            rhs[174] * (-params.A_3[1]) - rhs[175] * (-params.A_3[7]) - rhs[176] * (-params.A_3[13]) -
            rhs[177] * (-params.A_3[19]) - rhs[178] * (-params.A_3[25]) - rhs[179] * (-params.A_3[31]) - rhs[181] * (1);
  lhs[20] = -rhs[117] * (-params.B_3[2]) - rhs[118] * (-params.B_3[8]) - rhs[119] * (-params.B_3[14]) -
            rhs[174] * (-params.A_3[2]) - rhs[175] * (-params.A_3[8]) - rhs[176] * (-params.A_3[14]) -
            rhs[177] * (-params.A_3[20]) - rhs[178] * (-params.A_3[26]) - rhs[179] * (-params.A_3[32]) - rhs[182] * (1);
  lhs[21] = -rhs[117] * (-params.B_3[3]) - rhs[118] * (-params.B_3[9]) - rhs[119] * (-params.B_3[15]) -
            rhs[174] * (-params.A_3[3]) - rhs[175] * (-params.A_3[9]) - rhs[176] * (-params.A_3[15]) -
            rhs[177] * (-params.A_3[21]) - rhs[178] * (-params.A_3[27]) - rhs[179] * (-params.A_3[33]) - rhs[183] * (1);
  lhs[22] = -rhs[117] * (-params.B_3[4]) - rhs[118] * (-params.B_3[10]) - rhs[119] * (-params.B_3[16]) -
            rhs[174] * (-params.A_3[4]) - rhs[175] * (-params.A_3[10]) - rhs[176] * (-params.A_3[16]) -
            rhs[177] * (-params.A_3[22]) - rhs[178] * (-params.A_3[28]) - rhs[179] * (-params.A_3[34]) - rhs[184] * (1);
  lhs[23] = -rhs[117] * (-params.B_3[5]) - rhs[118] * (-params.B_3[11]) - rhs[119] * (-params.B_3[17]) -
            rhs[174] * (-params.A_3[5]) - rhs[175] * (-params.A_3[11]) - rhs[176] * (-params.A_3[17]) -
            rhs[177] * (-params.A_3[23]) - rhs[178] * (-params.A_3[29]) - rhs[179] * (-params.A_3[35]) - rhs[185] * (1);
  lhs[24] = -rhs[120] * (-params.B_4[0]) - rhs[121] * (-params.B_4[6]) - rhs[122] * (-params.B_4[12]) -
            rhs[180] * (-params.A_4[0]) - rhs[181] * (-params.A_4[6]) - rhs[182] * (-params.A_4[12]) -
            rhs[183] * (-params.A_4[18]) - rhs[184] * (-params.A_4[24]) - rhs[185] * (-params.A_4[30]) - rhs[186] * (1);
  lhs[25] = -rhs[120] * (-params.B_4[1]) - rhs[121] * (-params.B_4[7]) - rhs[122] * (-params.B_4[13]) -
            rhs[180] * (-params.A_4[1]) - rhs[181] * (-params.A_4[7]) - rhs[182] * (-params.A_4[13]) -
            rhs[183] * (-params.A_4[19]) - rhs[184] * (-params.A_4[25]) - rhs[185] * (-params.A_4[31]) - rhs[187] * (1);
  lhs[26] = -rhs[120] * (-params.B_4[2]) - rhs[121] * (-params.B_4[8]) - rhs[122] * (-params.B_4[14]) -
            rhs[180] * (-params.A_4[2]) - rhs[181] * (-params.A_4[8]) - rhs[182] * (-params.A_4[14]) -
            rhs[183] * (-params.A_4[20]) - rhs[184] * (-params.A_4[26]) - rhs[185] * (-params.A_4[32]) - rhs[188] * (1);
  lhs[27] = -rhs[120] * (-params.B_4[3]) - rhs[121] * (-params.B_4[9]) - rhs[122] * (-params.B_4[15]) -
            rhs[180] * (-params.A_4[3]) - rhs[181] * (-params.A_4[9]) - rhs[182] * (-params.A_4[15]) -
            rhs[183] * (-params.A_4[21]) - rhs[184] * (-params.A_4[27]) - rhs[185] * (-params.A_4[33]) - rhs[189] * (1);
  lhs[28] = -rhs[120] * (-params.B_4[4]) - rhs[121] * (-params.B_4[10]) - rhs[122] * (-params.B_4[16]) -
            rhs[180] * (-params.A_4[4]) - rhs[181] * (-params.A_4[10]) - rhs[182] * (-params.A_4[16]) -
            rhs[183] * (-params.A_4[22]) - rhs[184] * (-params.A_4[28]) - rhs[185] * (-params.A_4[34]) - rhs[190] * (1);
  lhs[29] = -rhs[120] * (-params.B_4[5]) - rhs[121] * (-params.B_4[11]) - rhs[122] * (-params.B_4[17]) -
            rhs[180] * (-params.A_4[5]) - rhs[181] * (-params.A_4[11]) - rhs[182] * (-params.A_4[17]) -
            rhs[183] * (-params.A_4[23]) - rhs[184] * (-params.A_4[29]) - rhs[185] * (-params.A_4[35]) - rhs[191] * (1);
  lhs[30] = -rhs[123] * (-params.B_5[0]) - rhs[124] * (-params.B_5[6]) - rhs[125] * (-params.B_5[12]) -
            rhs[186] * (-params.A_5[0]) - rhs[187] * (-params.A_5[6]) - rhs[188] * (-params.A_5[12]) -
            rhs[189] * (-params.A_5[18]) - rhs[190] * (-params.A_5[24]) - rhs[191] * (-params.A_5[30]) - rhs[192] * (1);
  lhs[31] = -rhs[123] * (-params.B_5[1]) - rhs[124] * (-params.B_5[7]) - rhs[125] * (-params.B_5[13]) -
            rhs[186] * (-params.A_5[1]) - rhs[187] * (-params.A_5[7]) - rhs[188] * (-params.A_5[13]) -
            rhs[189] * (-params.A_5[19]) - rhs[190] * (-params.A_5[25]) - rhs[191] * (-params.A_5[31]) - rhs[193] * (1);
  lhs[32] = -rhs[123] * (-params.B_5[2]) - rhs[124] * (-params.B_5[8]) - rhs[125] * (-params.B_5[14]) -
            rhs[186] * (-params.A_5[2]) - rhs[187] * (-params.A_5[8]) - rhs[188] * (-params.A_5[14]) -
            rhs[189] * (-params.A_5[20]) - rhs[190] * (-params.A_5[26]) - rhs[191] * (-params.A_5[32]) - rhs[194] * (1);
  lhs[33] = -rhs[123] * (-params.B_5[3]) - rhs[124] * (-params.B_5[9]) - rhs[125] * (-params.B_5[15]) -
            rhs[186] * (-params.A_5[3]) - rhs[187] * (-params.A_5[9]) - rhs[188] * (-params.A_5[15]) -
            rhs[189] * (-params.A_5[21]) - rhs[190] * (-params.A_5[27]) - rhs[191] * (-params.A_5[33]) - rhs[195] * (1);
  lhs[34] = -rhs[123] * (-params.B_5[4]) - rhs[124] * (-params.B_5[10]) - rhs[125] * (-params.B_5[16]) -
            rhs[186] * (-params.A_5[4]) - rhs[187] * (-params.A_5[10]) - rhs[188] * (-params.A_5[16]) -
            rhs[189] * (-params.A_5[22]) - rhs[190] * (-params.A_5[28]) - rhs[191] * (-params.A_5[34]) - rhs[196] * (1);
  lhs[35] = -rhs[123] * (-params.B_5[5]) - rhs[124] * (-params.B_5[11]) - rhs[125] * (-params.B_5[17]) -
            rhs[186] * (-params.A_5[5]) - rhs[187] * (-params.A_5[11]) - rhs[188] * (-params.A_5[17]) -
            rhs[189] * (-params.A_5[23]) - rhs[190] * (-params.A_5[29]) - rhs[191] * (-params.A_5[35]) - rhs[197] * (1);
  lhs[36] = -rhs[126] * (-params.B_6[0]) - rhs[127] * (-params.B_6[6]) - rhs[128] * (-params.B_6[12]) -
            rhs[192] * (-params.A_6[0]) - rhs[193] * (-params.A_6[6]) - rhs[194] * (-params.A_6[12]) -
            rhs[195] * (-params.A_6[18]) - rhs[196] * (-params.A_6[24]) - rhs[197] * (-params.A_6[30]) - rhs[198] * (1);
  lhs[37] = -rhs[126] * (-params.B_6[1]) - rhs[127] * (-params.B_6[7]) - rhs[128] * (-params.B_6[13]) -
            rhs[192] * (-params.A_6[1]) - rhs[193] * (-params.A_6[7]) - rhs[194] * (-params.A_6[13]) -
            rhs[195] * (-params.A_6[19]) - rhs[196] * (-params.A_6[25]) - rhs[197] * (-params.A_6[31]) - rhs[199] * (1);
  lhs[38] = -rhs[126] * (-params.B_6[2]) - rhs[127] * (-params.B_6[8]) - rhs[128] * (-params.B_6[14]) -
            rhs[192] * (-params.A_6[2]) - rhs[193] * (-params.A_6[8]) - rhs[194] * (-params.A_6[14]) -
            rhs[195] * (-params.A_6[20]) - rhs[196] * (-params.A_6[26]) - rhs[197] * (-params.A_6[32]) - rhs[200] * (1);
  lhs[39] = -rhs[126] * (-params.B_6[3]) - rhs[127] * (-params.B_6[9]) - rhs[128] * (-params.B_6[15]) -
            rhs[192] * (-params.A_6[3]) - rhs[193] * (-params.A_6[9]) - rhs[194] * (-params.A_6[15]) -
            rhs[195] * (-params.A_6[21]) - rhs[196] * (-params.A_6[27]) - rhs[197] * (-params.A_6[33]) - rhs[201] * (1);
  lhs[40] = -rhs[126] * (-params.B_6[4]) - rhs[127] * (-params.B_6[10]) - rhs[128] * (-params.B_6[16]) -
            rhs[192] * (-params.A_6[4]) - rhs[193] * (-params.A_6[10]) - rhs[194] * (-params.A_6[16]) -
            rhs[195] * (-params.A_6[22]) - rhs[196] * (-params.A_6[28]) - rhs[197] * (-params.A_6[34]) - rhs[202] * (1);
  lhs[41] = -rhs[126] * (-params.B_6[5]) - rhs[127] * (-params.B_6[11]) - rhs[128] * (-params.B_6[17]) -
            rhs[192] * (-params.A_6[5]) - rhs[193] * (-params.A_6[11]) - rhs[194] * (-params.A_6[17]) -
            rhs[195] * (-params.A_6[23]) - rhs[196] * (-params.A_6[29]) - rhs[197] * (-params.A_6[35]) - rhs[203] * (1);
  lhs[42] = -rhs[129] * (-params.B_7[0]) - rhs[130] * (-params.B_7[6]) - rhs[131] * (-params.B_7[12]) -
            rhs[198] * (-params.A_7[0]) - rhs[199] * (-params.A_7[6]) - rhs[200] * (-params.A_7[12]) -
            rhs[201] * (-params.A_7[18]) - rhs[202] * (-params.A_7[24]) - rhs[203] * (-params.A_7[30]) - rhs[204] * (1);
  lhs[43] = -rhs[129] * (-params.B_7[1]) - rhs[130] * (-params.B_7[7]) - rhs[131] * (-params.B_7[13]) -
            rhs[198] * (-params.A_7[1]) - rhs[199] * (-params.A_7[7]) - rhs[200] * (-params.A_7[13]) -
            rhs[201] * (-params.A_7[19]) - rhs[202] * (-params.A_7[25]) - rhs[203] * (-params.A_7[31]) - rhs[205] * (1);
  lhs[44] = -rhs[129] * (-params.B_7[2]) - rhs[130] * (-params.B_7[8]) - rhs[131] * (-params.B_7[14]) -
            rhs[198] * (-params.A_7[2]) - rhs[199] * (-params.A_7[8]) - rhs[200] * (-params.A_7[14]) -
            rhs[201] * (-params.A_7[20]) - rhs[202] * (-params.A_7[26]) - rhs[203] * (-params.A_7[32]) - rhs[206] * (1);
  lhs[45] = -rhs[129] * (-params.B_7[3]) - rhs[130] * (-params.B_7[9]) - rhs[131] * (-params.B_7[15]) -
            rhs[198] * (-params.A_7[3]) - rhs[199] * (-params.A_7[9]) - rhs[200] * (-params.A_7[15]) -
            rhs[201] * (-params.A_7[21]) - rhs[202] * (-params.A_7[27]) - rhs[203] * (-params.A_7[33]) - rhs[207] * (1);
  lhs[46] = -rhs[129] * (-params.B_7[4]) - rhs[130] * (-params.B_7[10]) - rhs[131] * (-params.B_7[16]) -
            rhs[198] * (-params.A_7[4]) - rhs[199] * (-params.A_7[10]) - rhs[200] * (-params.A_7[16]) -
            rhs[201] * (-params.A_7[22]) - rhs[202] * (-params.A_7[28]) - rhs[203] * (-params.A_7[34]) - rhs[208] * (1);
  lhs[47] = -rhs[129] * (-params.B_7[5]) - rhs[130] * (-params.B_7[11]) - rhs[131] * (-params.B_7[17]) -
            rhs[198] * (-params.A_7[5]) - rhs[199] * (-params.A_7[11]) - rhs[200] * (-params.A_7[17]) -
            rhs[201] * (-params.A_7[23]) - rhs[202] * (-params.A_7[29]) - rhs[203] * (-params.A_7[35]) - rhs[209] * (1);
  lhs[48] = -rhs[132] * (-params.B_8[0]) - rhs[133] * (-params.B_8[6]) - rhs[134] * (-params.B_8[12]) -
            rhs[204] * (-params.A_8[0]) - rhs[205] * (-params.A_8[6]) - rhs[206] * (-params.A_8[12]) -
            rhs[207] * (-params.A_8[18]) - rhs[208] * (-params.A_8[24]) - rhs[209] * (-params.A_8[30]) - rhs[210] * (1);
  lhs[49] = -rhs[132] * (-params.B_8[1]) - rhs[133] * (-params.B_8[7]) - rhs[134] * (-params.B_8[13]) -
            rhs[204] * (-params.A_8[1]) - rhs[205] * (-params.A_8[7]) - rhs[206] * (-params.A_8[13]) -
            rhs[207] * (-params.A_8[19]) - rhs[208] * (-params.A_8[25]) - rhs[209] * (-params.A_8[31]) - rhs[211] * (1);
  lhs[50] = -rhs[132] * (-params.B_8[2]) - rhs[133] * (-params.B_8[8]) - rhs[134] * (-params.B_8[14]) -
            rhs[204] * (-params.A_8[2]) - rhs[205] * (-params.A_8[8]) - rhs[206] * (-params.A_8[14]) -
            rhs[207] * (-params.A_8[20]) - rhs[208] * (-params.A_8[26]) - rhs[209] * (-params.A_8[32]) - rhs[212] * (1);
  lhs[51] = -rhs[132] * (-params.B_8[3]) - rhs[133] * (-params.B_8[9]) - rhs[134] * (-params.B_8[15]) -
            rhs[204] * (-params.A_8[3]) - rhs[205] * (-params.A_8[9]) - rhs[206] * (-params.A_8[15]) -
            rhs[207] * (-params.A_8[21]) - rhs[208] * (-params.A_8[27]) - rhs[209] * (-params.A_8[33]) - rhs[213] * (1);
  lhs[52] = -rhs[132] * (-params.B_8[4]) - rhs[133] * (-params.B_8[10]) - rhs[134] * (-params.B_8[16]) -
            rhs[204] * (-params.A_8[4]) - rhs[205] * (-params.A_8[10]) - rhs[206] * (-params.A_8[16]) -
            rhs[207] * (-params.A_8[22]) - rhs[208] * (-params.A_8[28]) - rhs[209] * (-params.A_8[34]) - rhs[214] * (1);
  lhs[53] = -rhs[132] * (-params.B_8[5]) - rhs[133] * (-params.B_8[11]) - rhs[134] * (-params.B_8[17]) -
            rhs[204] * (-params.A_8[5]) - rhs[205] * (-params.A_8[11]) - rhs[206] * (-params.A_8[17]) -
            rhs[207] * (-params.A_8[23]) - rhs[208] * (-params.A_8[29]) - rhs[209] * (-params.A_8[35]) - rhs[215] * (1);
  lhs[54] = -rhs[135] * (-params.B_9[0]) - rhs[136] * (-params.B_9[6]) - rhs[137] * (-params.B_9[12]) -
            rhs[210] * (-params.A_9[0]) - rhs[211] * (-params.A_9[6]) - rhs[212] * (-params.A_9[12]) -
            rhs[213] * (-params.A_9[18]) - rhs[214] * (-params.A_9[24]) - rhs[215] * (-params.A_9[30]) - rhs[216] * (1);
  lhs[55] = -rhs[135] * (-params.B_9[1]) - rhs[136] * (-params.B_9[7]) - rhs[137] * (-params.B_9[13]) -
            rhs[210] * (-params.A_9[1]) - rhs[211] * (-params.A_9[7]) - rhs[212] * (-params.A_9[13]) -
            rhs[213] * (-params.A_9[19]) - rhs[214] * (-params.A_9[25]) - rhs[215] * (-params.A_9[31]) - rhs[217] * (1);
  lhs[56] = -rhs[135] * (-params.B_9[2]) - rhs[136] * (-params.B_9[8]) - rhs[137] * (-params.B_9[14]) -
            rhs[210] * (-params.A_9[2]) - rhs[211] * (-params.A_9[8]) - rhs[212] * (-params.A_9[14]) -
            rhs[213] * (-params.A_9[20]) - rhs[214] * (-params.A_9[26]) - rhs[215] * (-params.A_9[32]) - rhs[218] * (1);
  lhs[57] = -rhs[135] * (-params.B_9[3]) - rhs[136] * (-params.B_9[9]) - rhs[137] * (-params.B_9[15]) -
            rhs[210] * (-params.A_9[3]) - rhs[211] * (-params.A_9[9]) - rhs[212] * (-params.A_9[15]) -
            rhs[213] * (-params.A_9[21]) - rhs[214] * (-params.A_9[27]) - rhs[215] * (-params.A_9[33]) - rhs[219] * (1);
  lhs[58] = -rhs[135] * (-params.B_9[4]) - rhs[136] * (-params.B_9[10]) - rhs[137] * (-params.B_9[16]) -
            rhs[210] * (-params.A_9[4]) - rhs[211] * (-params.A_9[10]) - rhs[212] * (-params.A_9[16]) -
            rhs[213] * (-params.A_9[22]) - rhs[214] * (-params.A_9[28]) - rhs[215] * (-params.A_9[34]) - rhs[220] * (1);
  lhs[59] = -rhs[135] * (-params.B_9[5]) - rhs[136] * (-params.B_9[11]) - rhs[137] * (-params.B_9[17]) -
            rhs[210] * (-params.A_9[5]) - rhs[211] * (-params.A_9[11]) - rhs[212] * (-params.A_9[17]) -
            rhs[213] * (-params.A_9[23]) - rhs[214] * (-params.A_9[29]) - rhs[215] * (-params.A_9[35]) - rhs[221] * (1);
  lhs[60] = -rhs[138] * (-params.B_10[0]) - rhs[139] * (-params.B_10[6]) - rhs[140] * (-params.B_10[12]) -
            rhs[216] * (-params.A_10[0]) - rhs[217] * (-params.A_10[6]) - rhs[218] * (-params.A_10[12]) -
            rhs[219] * (-params.A_10[18]) - rhs[220] * (-params.A_10[24]) - rhs[221] * (-params.A_10[30]) -
            rhs[222] * (1);
  lhs[61] = -rhs[138] * (-params.B_10[1]) - rhs[139] * (-params.B_10[7]) - rhs[140] * (-params.B_10[13]) -
            rhs[216] * (-params.A_10[1]) - rhs[217] * (-params.A_10[7]) - rhs[218] * (-params.A_10[13]) -
            rhs[219] * (-params.A_10[19]) - rhs[220] * (-params.A_10[25]) - rhs[221] * (-params.A_10[31]) -
            rhs[223] * (1);
  lhs[62] = -rhs[138] * (-params.B_10[2]) - rhs[139] * (-params.B_10[8]) - rhs[140] * (-params.B_10[14]) -
            rhs[216] * (-params.A_10[2]) - rhs[217] * (-params.A_10[8]) - rhs[218] * (-params.A_10[14]) -
            rhs[219] * (-params.A_10[20]) - rhs[220] * (-params.A_10[26]) - rhs[221] * (-params.A_10[32]) -
            rhs[224] * (1);
  lhs[63] = -rhs[138] * (-params.B_10[3]) - rhs[139] * (-params.B_10[9]) - rhs[140] * (-params.B_10[15]) -
            rhs[216] * (-params.A_10[3]) - rhs[217] * (-params.A_10[9]) - rhs[218] * (-params.A_10[15]) -
            rhs[219] * (-params.A_10[21]) - rhs[220] * (-params.A_10[27]) - rhs[221] * (-params.A_10[33]) -
            rhs[225] * (1);
  lhs[64] = -rhs[138] * (-params.B_10[4]) - rhs[139] * (-params.B_10[10]) - rhs[140] * (-params.B_10[16]) -
            rhs[216] * (-params.A_10[4]) - rhs[217] * (-params.A_10[10]) - rhs[218] * (-params.A_10[16]) -
            rhs[219] * (-params.A_10[22]) - rhs[220] * (-params.A_10[28]) - rhs[221] * (-params.A_10[34]) -
            rhs[226] * (1);
  lhs[65] = -rhs[138] * (-params.B_10[5]) - rhs[139] * (-params.B_10[11]) - rhs[140] * (-params.B_10[17]) -
            rhs[216] * (-params.A_10[5]) - rhs[217] * (-params.A_10[11]) - rhs[218] * (-params.A_10[17]) -
            rhs[219] * (-params.A_10[23]) - rhs[220] * (-params.A_10[29]) - rhs[221] * (-params.A_10[35]) -
            rhs[227] * (1);
  lhs[66] = -rhs[141] * (-params.B_11[0]) - rhs[142] * (-params.B_11[6]) - rhs[143] * (-params.B_11[12]) -
            rhs[222] * (-params.A_11[0]) - rhs[223] * (-params.A_11[6]) - rhs[224] * (-params.A_11[12]) -
            rhs[225] * (-params.A_11[18]) - rhs[226] * (-params.A_11[24]) - rhs[227] * (-params.A_11[30]) -
            rhs[228] * (1);
  lhs[67] = -rhs[141] * (-params.B_11[1]) - rhs[142] * (-params.B_11[7]) - rhs[143] * (-params.B_11[13]) -
            rhs[222] * (-params.A_11[1]) - rhs[223] * (-params.A_11[7]) - rhs[224] * (-params.A_11[13]) -
            rhs[225] * (-params.A_11[19]) - rhs[226] * (-params.A_11[25]) - rhs[227] * (-params.A_11[31]) -
            rhs[229] * (1);
  lhs[68] = -rhs[141] * (-params.B_11[2]) - rhs[142] * (-params.B_11[8]) - rhs[143] * (-params.B_11[14]) -
            rhs[222] * (-params.A_11[2]) - rhs[223] * (-params.A_11[8]) - rhs[224] * (-params.A_11[14]) -
            rhs[225] * (-params.A_11[20]) - rhs[226] * (-params.A_11[26]) - rhs[227] * (-params.A_11[32]) -
            rhs[230] * (1);
  lhs[69] = -rhs[141] * (-params.B_11[3]) - rhs[142] * (-params.B_11[9]) - rhs[143] * (-params.B_11[15]) -
            rhs[222] * (-params.A_11[3]) - rhs[223] * (-params.A_11[9]) - rhs[224] * (-params.A_11[15]) -
            rhs[225] * (-params.A_11[21]) - rhs[226] * (-params.A_11[27]) - rhs[227] * (-params.A_11[33]) -
            rhs[231] * (1);
  lhs[70] = -rhs[141] * (-params.B_11[4]) - rhs[142] * (-params.B_11[10]) - rhs[143] * (-params.B_11[16]) -
            rhs[222] * (-params.A_11[4]) - rhs[223] * (-params.A_11[10]) - rhs[224] * (-params.A_11[16]) -
            rhs[225] * (-params.A_11[22]) - rhs[226] * (-params.A_11[28]) - rhs[227] * (-params.A_11[34]) -
            rhs[232] * (1);
  lhs[71] = -rhs[141] * (-params.B_11[5]) - rhs[142] * (-params.B_11[11]) - rhs[143] * (-params.B_11[17]) -
            rhs[222] * (-params.A_11[5]) - rhs[223] * (-params.A_11[11]) - rhs[224] * (-params.A_11[17]) -
            rhs[225] * (-params.A_11[23]) - rhs[226] * (-params.A_11[29]) - rhs[227] * (-params.A_11[35]) -
            rhs[233] * (1);
  lhs[72] = -rhs[144] * (-params.B_12[0]) - rhs[145] * (-params.B_12[6]) - rhs[146] * (-params.B_12[12]) -
            rhs[228] * (-params.A_12[0]) - rhs[229] * (-params.A_12[6]) - rhs[230] * (-params.A_12[12]) -
            rhs[231] * (-params.A_12[18]) - rhs[232] * (-params.A_12[24]) - rhs[233] * (-params.A_12[30]) -
            rhs[234] * (1);
  lhs[73] = -rhs[144] * (-params.B_12[1]) - rhs[145] * (-params.B_12[7]) - rhs[146] * (-params.B_12[13]) -
            rhs[228] * (-params.A_12[1]) - rhs[229] * (-params.A_12[7]) - rhs[230] * (-params.A_12[13]) -
            rhs[231] * (-params.A_12[19]) - rhs[232] * (-params.A_12[25]) - rhs[233] * (-params.A_12[31]) -
            rhs[235] * (1);
  lhs[74] = -rhs[144] * (-params.B_12[2]) - rhs[145] * (-params.B_12[8]) - rhs[146] * (-params.B_12[14]) -
            rhs[228] * (-params.A_12[2]) - rhs[229] * (-params.A_12[8]) - rhs[230] * (-params.A_12[14]) -
            rhs[231] * (-params.A_12[20]) - rhs[232] * (-params.A_12[26]) - rhs[233] * (-params.A_12[32]) -
            rhs[236] * (1);
  lhs[75] = -rhs[144] * (-params.B_12[3]) - rhs[145] * (-params.B_12[9]) - rhs[146] * (-params.B_12[15]) -
            rhs[228] * (-params.A_12[3]) - rhs[229] * (-params.A_12[9]) - rhs[230] * (-params.A_12[15]) -
            rhs[231] * (-params.A_12[21]) - rhs[232] * (-params.A_12[27]) - rhs[233] * (-params.A_12[33]) -
            rhs[237] * (1);
  lhs[76] = -rhs[144] * (-params.B_12[4]) - rhs[145] * (-params.B_12[10]) - rhs[146] * (-params.B_12[16]) -
            rhs[228] * (-params.A_12[4]) - rhs[229] * (-params.A_12[10]) - rhs[230] * (-params.A_12[16]) -
            rhs[231] * (-params.A_12[22]) - rhs[232] * (-params.A_12[28]) - rhs[233] * (-params.A_12[34]) -
            rhs[238] * (1);
  lhs[77] = -rhs[144] * (-params.B_12[5]) - rhs[145] * (-params.B_12[11]) - rhs[146] * (-params.B_12[17]) -
            rhs[228] * (-params.A_12[5]) - rhs[229] * (-params.A_12[11]) - rhs[230] * (-params.A_12[17]) -
            rhs[231] * (-params.A_12[23]) - rhs[232] * (-params.A_12[29]) - rhs[233] * (-params.A_12[35]) -
            rhs[239] * (1);
  lhs[78] = -rhs[147] * (-params.B_13[0]) - rhs[148] * (-params.B_13[6]) - rhs[149] * (-params.B_13[12]) -
            rhs[234] * (-params.A_13[0]) - rhs[235] * (-params.A_13[6]) - rhs[236] * (-params.A_13[12]) -
            rhs[237] * (-params.A_13[18]) - rhs[238] * (-params.A_13[24]) - rhs[239] * (-params.A_13[30]) -
            rhs[240] * (1);
  lhs[79] = -rhs[147] * (-params.B_13[1]) - rhs[148] * (-params.B_13[7]) - rhs[149] * (-params.B_13[13]) -
            rhs[234] * (-params.A_13[1]) - rhs[235] * (-params.A_13[7]) - rhs[236] * (-params.A_13[13]) -
            rhs[237] * (-params.A_13[19]) - rhs[238] * (-params.A_13[25]) - rhs[239] * (-params.A_13[31]) -
            rhs[241] * (1);
  lhs[80] = -rhs[147] * (-params.B_13[2]) - rhs[148] * (-params.B_13[8]) - rhs[149] * (-params.B_13[14]) -
            rhs[234] * (-params.A_13[2]) - rhs[235] * (-params.A_13[8]) - rhs[236] * (-params.A_13[14]) -
            rhs[237] * (-params.A_13[20]) - rhs[238] * (-params.A_13[26]) - rhs[239] * (-params.A_13[32]) -
            rhs[242] * (1);
  lhs[81] = -rhs[147] * (-params.B_13[3]) - rhs[148] * (-params.B_13[9]) - rhs[149] * (-params.B_13[15]) -
            rhs[234] * (-params.A_13[3]) - rhs[235] * (-params.A_13[9]) - rhs[236] * (-params.A_13[15]) -
            rhs[237] * (-params.A_13[21]) - rhs[238] * (-params.A_13[27]) - rhs[239] * (-params.A_13[33]) -
            rhs[243] * (1);
  lhs[82] = -rhs[147] * (-params.B_13[4]) - rhs[148] * (-params.B_13[10]) - rhs[149] * (-params.B_13[16]) -
            rhs[234] * (-params.A_13[4]) - rhs[235] * (-params.A_13[10]) - rhs[236] * (-params.A_13[16]) -
            rhs[237] * (-params.A_13[22]) - rhs[238] * (-params.A_13[28]) - rhs[239] * (-params.A_13[34]) -
            rhs[244] * (1);
  lhs[83] = -rhs[147] * (-params.B_13[5]) - rhs[148] * (-params.B_13[11]) - rhs[149] * (-params.B_13[17]) -
            rhs[234] * (-params.A_13[5]) - rhs[235] * (-params.A_13[11]) - rhs[236] * (-params.A_13[17]) -
            rhs[237] * (-params.A_13[23]) - rhs[238] * (-params.A_13[29]) - rhs[239] * (-params.A_13[35]) -
            rhs[245] * (1);
  lhs[84] = -rhs[150] * (-params.B_14[0]) - rhs[151] * (-params.B_14[6]) - rhs[152] * (-params.B_14[12]) -
            rhs[240] * (-params.A_14[0]) - rhs[241] * (-params.A_14[6]) - rhs[242] * (-params.A_14[12]) -
            rhs[243] * (-params.A_14[18]) - rhs[244] * (-params.A_14[24]) - rhs[245] * (-params.A_14[30]) -
            rhs[246] * (1);
  lhs[85] = -rhs[150] * (-params.B_14[1]) - rhs[151] * (-params.B_14[7]) - rhs[152] * (-params.B_14[13]) -
            rhs[240] * (-params.A_14[1]) - rhs[241] * (-params.A_14[7]) - rhs[242] * (-params.A_14[13]) -
            rhs[243] * (-params.A_14[19]) - rhs[244] * (-params.A_14[25]) - rhs[245] * (-params.A_14[31]) -
            rhs[247] * (1);
  lhs[86] = -rhs[150] * (-params.B_14[2]) - rhs[151] * (-params.B_14[8]) - rhs[152] * (-params.B_14[14]) -
            rhs[240] * (-params.A_14[2]) - rhs[241] * (-params.A_14[8]) - rhs[242] * (-params.A_14[14]) -
            rhs[243] * (-params.A_14[20]) - rhs[244] * (-params.A_14[26]) - rhs[245] * (-params.A_14[32]) -
            rhs[248] * (1);
  lhs[87] = -rhs[150] * (-params.B_14[3]) - rhs[151] * (-params.B_14[9]) - rhs[152] * (-params.B_14[15]) -
            rhs[240] * (-params.A_14[3]) - rhs[241] * (-params.A_14[9]) - rhs[242] * (-params.A_14[15]) -
            rhs[243] * (-params.A_14[21]) - rhs[244] * (-params.A_14[27]) - rhs[245] * (-params.A_14[33]) -
            rhs[249] * (1);
  lhs[88] = -rhs[150] * (-params.B_14[4]) - rhs[151] * (-params.B_14[10]) - rhs[152] * (-params.B_14[16]) -
            rhs[240] * (-params.A_14[4]) - rhs[241] * (-params.A_14[10]) - rhs[242] * (-params.A_14[16]) -
            rhs[243] * (-params.A_14[22]) - rhs[244] * (-params.A_14[28]) - rhs[245] * (-params.A_14[34]) -
            rhs[250] * (1);
  lhs[89] = -rhs[150] * (-params.B_14[5]) - rhs[151] * (-params.B_14[11]) - rhs[152] * (-params.B_14[17]) -
            rhs[240] * (-params.A_14[5]) - rhs[241] * (-params.A_14[11]) - rhs[242] * (-params.A_14[17]) -
            rhs[243] * (-params.A_14[23]) - rhs[244] * (-params.A_14[29]) - rhs[245] * (-params.A_14[35]) -
            rhs[251] * (1);
  lhs[90] = -rhs[153] * (-params.B_15[0]) - rhs[154] * (-params.B_15[6]) - rhs[155] * (-params.B_15[12]) -
            rhs[246] * (-params.A_15[0]) - rhs[247] * (-params.A_15[6]) - rhs[248] * (-params.A_15[12]) -
            rhs[249] * (-params.A_15[18]) - rhs[250] * (-params.A_15[24]) - rhs[251] * (-params.A_15[30]) -
            rhs[252] * (1);
  lhs[91] = -rhs[153] * (-params.B_15[1]) - rhs[154] * (-params.B_15[7]) - rhs[155] * (-params.B_15[13]) -
            rhs[246] * (-params.A_15[1]) - rhs[247] * (-params.A_15[7]) - rhs[248] * (-params.A_15[13]) -
            rhs[249] * (-params.A_15[19]) - rhs[250] * (-params.A_15[25]) - rhs[251] * (-params.A_15[31]) -
            rhs[253] * (1);
  lhs[92] = -rhs[153] * (-params.B_15[2]) - rhs[154] * (-params.B_15[8]) - rhs[155] * (-params.B_15[14]) -
            rhs[246] * (-params.A_15[2]) - rhs[247] * (-params.A_15[8]) - rhs[248] * (-params.A_15[14]) -
            rhs[249] * (-params.A_15[20]) - rhs[250] * (-params.A_15[26]) - rhs[251] * (-params.A_15[32]) -
            rhs[254] * (1);
  lhs[93] = -rhs[153] * (-params.B_15[3]) - rhs[154] * (-params.B_15[9]) - rhs[155] * (-params.B_15[15]) -
            rhs[246] * (-params.A_15[3]) - rhs[247] * (-params.A_15[9]) - rhs[248] * (-params.A_15[15]) -
            rhs[249] * (-params.A_15[21]) - rhs[250] * (-params.A_15[27]) - rhs[251] * (-params.A_15[33]) -
            rhs[255] * (1);
  lhs[94] = -rhs[153] * (-params.B_15[4]) - rhs[154] * (-params.B_15[10]) - rhs[155] * (-params.B_15[16]) -
            rhs[246] * (-params.A_15[4]) - rhs[247] * (-params.A_15[10]) - rhs[248] * (-params.A_15[16]) -
            rhs[249] * (-params.A_15[22]) - rhs[250] * (-params.A_15[28]) - rhs[251] * (-params.A_15[34]) -
            rhs[256] * (1);
  lhs[95] = -rhs[153] * (-params.B_15[5]) - rhs[154] * (-params.B_15[11]) - rhs[155] * (-params.B_15[17]) -
            rhs[246] * (-params.A_15[5]) - rhs[247] * (-params.A_15[11]) - rhs[248] * (-params.A_15[17]) -
            rhs[249] * (-params.A_15[23]) - rhs[250] * (-params.A_15[29]) - rhs[251] * (-params.A_15[35]) -
            rhs[257] * (1);
  lhs[96] = -rhs[156] * (-params.B_16[0]) - rhs[157] * (-params.B_16[6]) - rhs[158] * (-params.B_16[12]) -
            rhs[252] * (-params.A_16[0]) - rhs[253] * (-params.A_16[6]) - rhs[254] * (-params.A_16[12]) -
            rhs[255] * (-params.A_16[18]) - rhs[256] * (-params.A_16[24]) - rhs[257] * (-params.A_16[30]) -
            rhs[258] * (1);
  lhs[97] = -rhs[156] * (-params.B_16[1]) - rhs[157] * (-params.B_16[7]) - rhs[158] * (-params.B_16[13]) -
            rhs[252] * (-params.A_16[1]) - rhs[253] * (-params.A_16[7]) - rhs[254] * (-params.A_16[13]) -
            rhs[255] * (-params.A_16[19]) - rhs[256] * (-params.A_16[25]) - rhs[257] * (-params.A_16[31]) -
            rhs[259] * (1);
  lhs[98] = -rhs[156] * (-params.B_16[2]) - rhs[157] * (-params.B_16[8]) - rhs[158] * (-params.B_16[14]) -
            rhs[252] * (-params.A_16[2]) - rhs[253] * (-params.A_16[8]) - rhs[254] * (-params.A_16[14]) -
            rhs[255] * (-params.A_16[20]) - rhs[256] * (-params.A_16[26]) - rhs[257] * (-params.A_16[32]) -
            rhs[260] * (1);
  lhs[99] = -rhs[156] * (-params.B_16[3]) - rhs[157] * (-params.B_16[9]) - rhs[158] * (-params.B_16[15]) -
            rhs[252] * (-params.A_16[3]) - rhs[253] * (-params.A_16[9]) - rhs[254] * (-params.A_16[15]) -
            rhs[255] * (-params.A_16[21]) - rhs[256] * (-params.A_16[27]) - rhs[257] * (-params.A_16[33]) -
            rhs[261] * (1);
  lhs[100] = -rhs[156] * (-params.B_16[4]) - rhs[157] * (-params.B_16[10]) - rhs[158] * (-params.B_16[16]) -
             rhs[252] * (-params.A_16[4]) - rhs[253] * (-params.A_16[10]) - rhs[254] * (-params.A_16[16]) -
             rhs[255] * (-params.A_16[22]) - rhs[256] * (-params.A_16[28]) - rhs[257] * (-params.A_16[34]) -
             rhs[262] * (1);
  lhs[101] = -rhs[156] * (-params.B_16[5]) - rhs[157] * (-params.B_16[11]) - rhs[158] * (-params.B_16[17]) -
             rhs[252] * (-params.A_16[5]) - rhs[253] * (-params.A_16[11]) - rhs[254] * (-params.A_16[17]) -
             rhs[255] * (-params.A_16[23]) - rhs[256] * (-params.A_16[29]) - rhs[257] * (-params.A_16[35]) -
             rhs[263] * (1);
  lhs[102] = -rhs[159] * (-params.B_17[0]) - rhs[160] * (-params.B_17[6]) - rhs[161] * (-params.B_17[12]) -
             rhs[258] * (-params.A_17[0]) - rhs[259] * (-params.A_17[6]) - rhs[260] * (-params.A_17[12]) -
             rhs[261] * (-params.A_17[18]) - rhs[262] * (-params.A_17[24]) - rhs[263] * (-params.A_17[30]) -
             rhs[264] * (1);
  lhs[103] = -rhs[159] * (-params.B_17[1]) - rhs[160] * (-params.B_17[7]) - rhs[161] * (-params.B_17[13]) -
             rhs[258] * (-params.A_17[1]) - rhs[259] * (-params.A_17[7]) - rhs[260] * (-params.A_17[13]) -
             rhs[261] * (-params.A_17[19]) - rhs[262] * (-params.A_17[25]) - rhs[263] * (-params.A_17[31]) -
             rhs[265] * (1);
  lhs[104] = -rhs[159] * (-params.B_17[2]) - rhs[160] * (-params.B_17[8]) - rhs[161] * (-params.B_17[14]) -
             rhs[258] * (-params.A_17[2]) - rhs[259] * (-params.A_17[8]) - rhs[260] * (-params.A_17[14]) -
             rhs[261] * (-params.A_17[20]) - rhs[262] * (-params.A_17[26]) - rhs[263] * (-params.A_17[32]) -
             rhs[266] * (1);
  lhs[105] = -rhs[159] * (-params.B_17[3]) - rhs[160] * (-params.B_17[9]) - rhs[161] * (-params.B_17[15]) -
             rhs[258] * (-params.A_17[3]) - rhs[259] * (-params.A_17[9]) - rhs[260] * (-params.A_17[15]) -
             rhs[261] * (-params.A_17[21]) - rhs[262] * (-params.A_17[27]) - rhs[263] * (-params.A_17[33]) -
             rhs[267] * (1);
  lhs[106] = -rhs[159] * (-params.B_17[4]) - rhs[160] * (-params.B_17[10]) - rhs[161] * (-params.B_17[16]) -
             rhs[258] * (-params.A_17[4]) - rhs[259] * (-params.A_17[10]) - rhs[260] * (-params.A_17[16]) -
             rhs[261] * (-params.A_17[22]) - rhs[262] * (-params.A_17[28]) - rhs[263] * (-params.A_17[34]) -
             rhs[268] * (1);
  lhs[107] = -rhs[159] * (-params.B_17[5]) - rhs[160] * (-params.B_17[11]) - rhs[161] * (-params.B_17[17]) -
             rhs[258] * (-params.A_17[5]) - rhs[259] * (-params.A_17[11]) - rhs[260] * (-params.A_17[17]) -
             rhs[261] * (-params.A_17[23]) - rhs[262] * (-params.A_17[29]) - rhs[263] * (-params.A_17[35]) -
             rhs[269] * (1);
}
void multbymAT(double* lhs, double* rhs)
{
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = 0;
  lhs[33] = 0;
  lhs[34] = 0;
  lhs[35] = 0;
  lhs[36] = 0;
  lhs[37] = 0;
  lhs[38] = 0;
  lhs[39] = 0;
  lhs[40] = 0;
  lhs[41] = 0;
  lhs[42] = 0;
  lhs[43] = 0;
  lhs[44] = 0;
  lhs[45] = 0;
  lhs[46] = 0;
  lhs[47] = 0;
  lhs[48] = 0;
  lhs[49] = 0;
  lhs[50] = 0;
  lhs[51] = 0;
  lhs[52] = 0;
  lhs[53] = 0;
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = 0;
  lhs[92] = 0;
  lhs[93] = 0;
  lhs[94] = 0;
  lhs[95] = 0;
  lhs[96] = 0;
  lhs[97] = 0;
  lhs[98] = 0;
  lhs[99] = 0;
  lhs[100] = 0;
  lhs[101] = 0;
  lhs[102] = 0;
  lhs[103] = 0;
  lhs[104] = 0;
  lhs[105] = 0;
  lhs[106] = 0;
  lhs[107] = 0;
  lhs[108] = -rhs[0] * (-params.B_0[0]) - rhs[1] * (-params.B_0[1]) - rhs[2] * (-params.B_0[2]) -
             rhs[3] * (-params.B_0[3]) - rhs[4] * (-params.B_0[4]) - rhs[5] * (-params.B_0[5]);
  lhs[109] = -rhs[0] * (-params.B_0[6]) - rhs[1] * (-params.B_0[7]) - rhs[2] * (-params.B_0[8]) -
             rhs[3] * (-params.B_0[9]) - rhs[4] * (-params.B_0[10]) - rhs[5] * (-params.B_0[11]);
  lhs[110] = -rhs[0] * (-params.B_0[12]) - rhs[1] * (-params.B_0[13]) - rhs[2] * (-params.B_0[14]) -
             rhs[3] * (-params.B_0[15]) - rhs[4] * (-params.B_0[16]) - rhs[5] * (-params.B_0[17]);
  lhs[111] = -rhs[6] * (-params.B_1[0]) - rhs[7] * (-params.B_1[1]) - rhs[8] * (-params.B_1[2]) -
             rhs[9] * (-params.B_1[3]) - rhs[10] * (-params.B_1[4]) - rhs[11] * (-params.B_1[5]);
  lhs[112] = -rhs[6] * (-params.B_1[6]) - rhs[7] * (-params.B_1[7]) - rhs[8] * (-params.B_1[8]) -
             rhs[9] * (-params.B_1[9]) - rhs[10] * (-params.B_1[10]) - rhs[11] * (-params.B_1[11]);
  lhs[113] = -rhs[6] * (-params.B_1[12]) - rhs[7] * (-params.B_1[13]) - rhs[8] * (-params.B_1[14]) -
             rhs[9] * (-params.B_1[15]) - rhs[10] * (-params.B_1[16]) - rhs[11] * (-params.B_1[17]);
  lhs[114] = -rhs[12] * (-params.B_2[0]) - rhs[13] * (-params.B_2[1]) - rhs[14] * (-params.B_2[2]) -
             rhs[15] * (-params.B_2[3]) - rhs[16] * (-params.B_2[4]) - rhs[17] * (-params.B_2[5]);
  lhs[115] = -rhs[12] * (-params.B_2[6]) - rhs[13] * (-params.B_2[7]) - rhs[14] * (-params.B_2[8]) -
             rhs[15] * (-params.B_2[9]) - rhs[16] * (-params.B_2[10]) - rhs[17] * (-params.B_2[11]);
  lhs[116] = -rhs[12] * (-params.B_2[12]) - rhs[13] * (-params.B_2[13]) - rhs[14] * (-params.B_2[14]) -
             rhs[15] * (-params.B_2[15]) - rhs[16] * (-params.B_2[16]) - rhs[17] * (-params.B_2[17]);
  lhs[117] = -rhs[18] * (-params.B_3[0]) - rhs[19] * (-params.B_3[1]) - rhs[20] * (-params.B_3[2]) -
             rhs[21] * (-params.B_3[3]) - rhs[22] * (-params.B_3[4]) - rhs[23] * (-params.B_3[5]);
  lhs[118] = -rhs[18] * (-params.B_3[6]) - rhs[19] * (-params.B_3[7]) - rhs[20] * (-params.B_3[8]) -
             rhs[21] * (-params.B_3[9]) - rhs[22] * (-params.B_3[10]) - rhs[23] * (-params.B_3[11]);
  lhs[119] = -rhs[18] * (-params.B_3[12]) - rhs[19] * (-params.B_3[13]) - rhs[20] * (-params.B_3[14]) -
             rhs[21] * (-params.B_3[15]) - rhs[22] * (-params.B_3[16]) - rhs[23] * (-params.B_3[17]);
  lhs[120] = -rhs[24] * (-params.B_4[0]) - rhs[25] * (-params.B_4[1]) - rhs[26] * (-params.B_4[2]) -
             rhs[27] * (-params.B_4[3]) - rhs[28] * (-params.B_4[4]) - rhs[29] * (-params.B_4[5]);
  lhs[121] = -rhs[24] * (-params.B_4[6]) - rhs[25] * (-params.B_4[7]) - rhs[26] * (-params.B_4[8]) -
             rhs[27] * (-params.B_4[9]) - rhs[28] * (-params.B_4[10]) - rhs[29] * (-params.B_4[11]);
  lhs[122] = -rhs[24] * (-params.B_4[12]) - rhs[25] * (-params.B_4[13]) - rhs[26] * (-params.B_4[14]) -
             rhs[27] * (-params.B_4[15]) - rhs[28] * (-params.B_4[16]) - rhs[29] * (-params.B_4[17]);
  lhs[123] = -rhs[30] * (-params.B_5[0]) - rhs[31] * (-params.B_5[1]) - rhs[32] * (-params.B_5[2]) -
             rhs[33] * (-params.B_5[3]) - rhs[34] * (-params.B_5[4]) - rhs[35] * (-params.B_5[5]);
  lhs[124] = -rhs[30] * (-params.B_5[6]) - rhs[31] * (-params.B_5[7]) - rhs[32] * (-params.B_5[8]) -
             rhs[33] * (-params.B_5[9]) - rhs[34] * (-params.B_5[10]) - rhs[35] * (-params.B_5[11]);
  lhs[125] = -rhs[30] * (-params.B_5[12]) - rhs[31] * (-params.B_5[13]) - rhs[32] * (-params.B_5[14]) -
             rhs[33] * (-params.B_5[15]) - rhs[34] * (-params.B_5[16]) - rhs[35] * (-params.B_5[17]);
  lhs[126] = -rhs[36] * (-params.B_6[0]) - rhs[37] * (-params.B_6[1]) - rhs[38] * (-params.B_6[2]) -
             rhs[39] * (-params.B_6[3]) - rhs[40] * (-params.B_6[4]) - rhs[41] * (-params.B_6[5]);
  lhs[127] = -rhs[36] * (-params.B_6[6]) - rhs[37] * (-params.B_6[7]) - rhs[38] * (-params.B_6[8]) -
             rhs[39] * (-params.B_6[9]) - rhs[40] * (-params.B_6[10]) - rhs[41] * (-params.B_6[11]);
  lhs[128] = -rhs[36] * (-params.B_6[12]) - rhs[37] * (-params.B_6[13]) - rhs[38] * (-params.B_6[14]) -
             rhs[39] * (-params.B_6[15]) - rhs[40] * (-params.B_6[16]) - rhs[41] * (-params.B_6[17]);
  lhs[129] = -rhs[42] * (-params.B_7[0]) - rhs[43] * (-params.B_7[1]) - rhs[44] * (-params.B_7[2]) -
             rhs[45] * (-params.B_7[3]) - rhs[46] * (-params.B_7[4]) - rhs[47] * (-params.B_7[5]);
  lhs[130] = -rhs[42] * (-params.B_7[6]) - rhs[43] * (-params.B_7[7]) - rhs[44] * (-params.B_7[8]) -
             rhs[45] * (-params.B_7[9]) - rhs[46] * (-params.B_7[10]) - rhs[47] * (-params.B_7[11]);
  lhs[131] = -rhs[42] * (-params.B_7[12]) - rhs[43] * (-params.B_7[13]) - rhs[44] * (-params.B_7[14]) -
             rhs[45] * (-params.B_7[15]) - rhs[46] * (-params.B_7[16]) - rhs[47] * (-params.B_7[17]);
  lhs[132] = -rhs[48] * (-params.B_8[0]) - rhs[49] * (-params.B_8[1]) - rhs[50] * (-params.B_8[2]) -
             rhs[51] * (-params.B_8[3]) - rhs[52] * (-params.B_8[4]) - rhs[53] * (-params.B_8[5]);
  lhs[133] = -rhs[48] * (-params.B_8[6]) - rhs[49] * (-params.B_8[7]) - rhs[50] * (-params.B_8[8]) -
             rhs[51] * (-params.B_8[9]) - rhs[52] * (-params.B_8[10]) - rhs[53] * (-params.B_8[11]);
  lhs[134] = -rhs[48] * (-params.B_8[12]) - rhs[49] * (-params.B_8[13]) - rhs[50] * (-params.B_8[14]) -
             rhs[51] * (-params.B_8[15]) - rhs[52] * (-params.B_8[16]) - rhs[53] * (-params.B_8[17]);
  lhs[135] = -rhs[54] * (-params.B_9[0]) - rhs[55] * (-params.B_9[1]) - rhs[56] * (-params.B_9[2]) -
             rhs[57] * (-params.B_9[3]) - rhs[58] * (-params.B_9[4]) - rhs[59] * (-params.B_9[5]);
  lhs[136] = -rhs[54] * (-params.B_9[6]) - rhs[55] * (-params.B_9[7]) - rhs[56] * (-params.B_9[8]) -
             rhs[57] * (-params.B_9[9]) - rhs[58] * (-params.B_9[10]) - rhs[59] * (-params.B_9[11]);
  lhs[137] = -rhs[54] * (-params.B_9[12]) - rhs[55] * (-params.B_9[13]) - rhs[56] * (-params.B_9[14]) -
             rhs[57] * (-params.B_9[15]) - rhs[58] * (-params.B_9[16]) - rhs[59] * (-params.B_9[17]);
  lhs[138] = -rhs[60] * (-params.B_10[0]) - rhs[61] * (-params.B_10[1]) - rhs[62] * (-params.B_10[2]) -
             rhs[63] * (-params.B_10[3]) - rhs[64] * (-params.B_10[4]) - rhs[65] * (-params.B_10[5]);
  lhs[139] = -rhs[60] * (-params.B_10[6]) - rhs[61] * (-params.B_10[7]) - rhs[62] * (-params.B_10[8]) -
             rhs[63] * (-params.B_10[9]) - rhs[64] * (-params.B_10[10]) - rhs[65] * (-params.B_10[11]);
  lhs[140] = -rhs[60] * (-params.B_10[12]) - rhs[61] * (-params.B_10[13]) - rhs[62] * (-params.B_10[14]) -
             rhs[63] * (-params.B_10[15]) - rhs[64] * (-params.B_10[16]) - rhs[65] * (-params.B_10[17]);
  lhs[141] = -rhs[66] * (-params.B_11[0]) - rhs[67] * (-params.B_11[1]) - rhs[68] * (-params.B_11[2]) -
             rhs[69] * (-params.B_11[3]) - rhs[70] * (-params.B_11[4]) - rhs[71] * (-params.B_11[5]);
  lhs[142] = -rhs[66] * (-params.B_11[6]) - rhs[67] * (-params.B_11[7]) - rhs[68] * (-params.B_11[8]) -
             rhs[69] * (-params.B_11[9]) - rhs[70] * (-params.B_11[10]) - rhs[71] * (-params.B_11[11]);
  lhs[143] = -rhs[66] * (-params.B_11[12]) - rhs[67] * (-params.B_11[13]) - rhs[68] * (-params.B_11[14]) -
             rhs[69] * (-params.B_11[15]) - rhs[70] * (-params.B_11[16]) - rhs[71] * (-params.B_11[17]);
  lhs[144] = -rhs[72] * (-params.B_12[0]) - rhs[73] * (-params.B_12[1]) - rhs[74] * (-params.B_12[2]) -
             rhs[75] * (-params.B_12[3]) - rhs[76] * (-params.B_12[4]) - rhs[77] * (-params.B_12[5]);
  lhs[145] = -rhs[72] * (-params.B_12[6]) - rhs[73] * (-params.B_12[7]) - rhs[74] * (-params.B_12[8]) -
             rhs[75] * (-params.B_12[9]) - rhs[76] * (-params.B_12[10]) - rhs[77] * (-params.B_12[11]);
  lhs[146] = -rhs[72] * (-params.B_12[12]) - rhs[73] * (-params.B_12[13]) - rhs[74] * (-params.B_12[14]) -
             rhs[75] * (-params.B_12[15]) - rhs[76] * (-params.B_12[16]) - rhs[77] * (-params.B_12[17]);
  lhs[147] = -rhs[78] * (-params.B_13[0]) - rhs[79] * (-params.B_13[1]) - rhs[80] * (-params.B_13[2]) -
             rhs[81] * (-params.B_13[3]) - rhs[82] * (-params.B_13[4]) - rhs[83] * (-params.B_13[5]);
  lhs[148] = -rhs[78] * (-params.B_13[6]) - rhs[79] * (-params.B_13[7]) - rhs[80] * (-params.B_13[8]) -
             rhs[81] * (-params.B_13[9]) - rhs[82] * (-params.B_13[10]) - rhs[83] * (-params.B_13[11]);
  lhs[149] = -rhs[78] * (-params.B_13[12]) - rhs[79] * (-params.B_13[13]) - rhs[80] * (-params.B_13[14]) -
             rhs[81] * (-params.B_13[15]) - rhs[82] * (-params.B_13[16]) - rhs[83] * (-params.B_13[17]);
  lhs[150] = -rhs[84] * (-params.B_14[0]) - rhs[85] * (-params.B_14[1]) - rhs[86] * (-params.B_14[2]) -
             rhs[87] * (-params.B_14[3]) - rhs[88] * (-params.B_14[4]) - rhs[89] * (-params.B_14[5]);
  lhs[151] = -rhs[84] * (-params.B_14[6]) - rhs[85] * (-params.B_14[7]) - rhs[86] * (-params.B_14[8]) -
             rhs[87] * (-params.B_14[9]) - rhs[88] * (-params.B_14[10]) - rhs[89] * (-params.B_14[11]);
  lhs[152] = -rhs[84] * (-params.B_14[12]) - rhs[85] * (-params.B_14[13]) - rhs[86] * (-params.B_14[14]) -
             rhs[87] * (-params.B_14[15]) - rhs[88] * (-params.B_14[16]) - rhs[89] * (-params.B_14[17]);
  lhs[153] = -rhs[90] * (-params.B_15[0]) - rhs[91] * (-params.B_15[1]) - rhs[92] * (-params.B_15[2]) -
             rhs[93] * (-params.B_15[3]) - rhs[94] * (-params.B_15[4]) - rhs[95] * (-params.B_15[5]);
  lhs[154] = -rhs[90] * (-params.B_15[6]) - rhs[91] * (-params.B_15[7]) - rhs[92] * (-params.B_15[8]) -
             rhs[93] * (-params.B_15[9]) - rhs[94] * (-params.B_15[10]) - rhs[95] * (-params.B_15[11]);
  lhs[155] = -rhs[90] * (-params.B_15[12]) - rhs[91] * (-params.B_15[13]) - rhs[92] * (-params.B_15[14]) -
             rhs[93] * (-params.B_15[15]) - rhs[94] * (-params.B_15[16]) - rhs[95] * (-params.B_15[17]);
  lhs[156] = -rhs[96] * (-params.B_16[0]) - rhs[97] * (-params.B_16[1]) - rhs[98] * (-params.B_16[2]) -
             rhs[99] * (-params.B_16[3]) - rhs[100] * (-params.B_16[4]) - rhs[101] * (-params.B_16[5]);
  lhs[157] = -rhs[96] * (-params.B_16[6]) - rhs[97] * (-params.B_16[7]) - rhs[98] * (-params.B_16[8]) -
             rhs[99] * (-params.B_16[9]) - rhs[100] * (-params.B_16[10]) - rhs[101] * (-params.B_16[11]);
  lhs[158] = -rhs[96] * (-params.B_16[12]) - rhs[97] * (-params.B_16[13]) - rhs[98] * (-params.B_16[14]) -
             rhs[99] * (-params.B_16[15]) - rhs[100] * (-params.B_16[16]) - rhs[101] * (-params.B_16[17]);
  lhs[159] = -rhs[102] * (-params.B_17[0]) - rhs[103] * (-params.B_17[1]) - rhs[104] * (-params.B_17[2]) -
             rhs[105] * (-params.B_17[3]) - rhs[106] * (-params.B_17[4]) - rhs[107] * (-params.B_17[5]);
  lhs[160] = -rhs[102] * (-params.B_17[6]) - rhs[103] * (-params.B_17[7]) - rhs[104] * (-params.B_17[8]) -
             rhs[105] * (-params.B_17[9]) - rhs[106] * (-params.B_17[10]) - rhs[107] * (-params.B_17[11]);
  lhs[161] = -rhs[102] * (-params.B_17[12]) - rhs[103] * (-params.B_17[13]) - rhs[104] * (-params.B_17[14]) -
             rhs[105] * (-params.B_17[15]) - rhs[106] * (-params.B_17[16]) - rhs[107] * (-params.B_17[17]);
  lhs[162] = -rhs[0] * (1) - rhs[6] * (-params.A_1[0]) - rhs[7] * (-params.A_1[1]) - rhs[8] * (-params.A_1[2]) -
             rhs[9] * (-params.A_1[3]) - rhs[10] * (-params.A_1[4]) - rhs[11] * (-params.A_1[5]);
  lhs[163] = -rhs[1] * (1) - rhs[6] * (-params.A_1[6]) - rhs[7] * (-params.A_1[7]) - rhs[8] * (-params.A_1[8]) -
             rhs[9] * (-params.A_1[9]) - rhs[10] * (-params.A_1[10]) - rhs[11] * (-params.A_1[11]);
  lhs[164] = -rhs[2] * (1) - rhs[6] * (-params.A_1[12]) - rhs[7] * (-params.A_1[13]) - rhs[8] * (-params.A_1[14]) -
             rhs[9] * (-params.A_1[15]) - rhs[10] * (-params.A_1[16]) - rhs[11] * (-params.A_1[17]);
  lhs[165] = -rhs[3] * (1) - rhs[6] * (-params.A_1[18]) - rhs[7] * (-params.A_1[19]) - rhs[8] * (-params.A_1[20]) -
             rhs[9] * (-params.A_1[21]) - rhs[10] * (-params.A_1[22]) - rhs[11] * (-params.A_1[23]);
  lhs[166] = -rhs[4] * (1) - rhs[6] * (-params.A_1[24]) - rhs[7] * (-params.A_1[25]) - rhs[8] * (-params.A_1[26]) -
             rhs[9] * (-params.A_1[27]) - rhs[10] * (-params.A_1[28]) - rhs[11] * (-params.A_1[29]);
  lhs[167] = -rhs[5] * (1) - rhs[6] * (-params.A_1[30]) - rhs[7] * (-params.A_1[31]) - rhs[8] * (-params.A_1[32]) -
             rhs[9] * (-params.A_1[33]) - rhs[10] * (-params.A_1[34]) - rhs[11] * (-params.A_1[35]);
  lhs[168] = -rhs[6] * (1) - rhs[12] * (-params.A_2[0]) - rhs[13] * (-params.A_2[1]) - rhs[14] * (-params.A_2[2]) -
             rhs[15] * (-params.A_2[3]) - rhs[16] * (-params.A_2[4]) - rhs[17] * (-params.A_2[5]);
  lhs[169] = -rhs[7] * (1) - rhs[12] * (-params.A_2[6]) - rhs[13] * (-params.A_2[7]) - rhs[14] * (-params.A_2[8]) -
             rhs[15] * (-params.A_2[9]) - rhs[16] * (-params.A_2[10]) - rhs[17] * (-params.A_2[11]);
  lhs[170] = -rhs[8] * (1) - rhs[12] * (-params.A_2[12]) - rhs[13] * (-params.A_2[13]) - rhs[14] * (-params.A_2[14]) -
             rhs[15] * (-params.A_2[15]) - rhs[16] * (-params.A_2[16]) - rhs[17] * (-params.A_2[17]);
  lhs[171] = -rhs[9] * (1) - rhs[12] * (-params.A_2[18]) - rhs[13] * (-params.A_2[19]) - rhs[14] * (-params.A_2[20]) -
             rhs[15] * (-params.A_2[21]) - rhs[16] * (-params.A_2[22]) - rhs[17] * (-params.A_2[23]);
  lhs[172] = -rhs[10] * (1) - rhs[12] * (-params.A_2[24]) - rhs[13] * (-params.A_2[25]) - rhs[14] * (-params.A_2[26]) -
             rhs[15] * (-params.A_2[27]) - rhs[16] * (-params.A_2[28]) - rhs[17] * (-params.A_2[29]);
  lhs[173] = -rhs[11] * (1) - rhs[12] * (-params.A_2[30]) - rhs[13] * (-params.A_2[31]) - rhs[14] * (-params.A_2[32]) -
             rhs[15] * (-params.A_2[33]) - rhs[16] * (-params.A_2[34]) - rhs[17] * (-params.A_2[35]);
  lhs[174] = -rhs[12] * (1) - rhs[18] * (-params.A_3[0]) - rhs[19] * (-params.A_3[1]) - rhs[20] * (-params.A_3[2]) -
             rhs[21] * (-params.A_3[3]) - rhs[22] * (-params.A_3[4]) - rhs[23] * (-params.A_3[5]);
  lhs[175] = -rhs[13] * (1) - rhs[18] * (-params.A_3[6]) - rhs[19] * (-params.A_3[7]) - rhs[20] * (-params.A_3[8]) -
             rhs[21] * (-params.A_3[9]) - rhs[22] * (-params.A_3[10]) - rhs[23] * (-params.A_3[11]);
  lhs[176] = -rhs[14] * (1) - rhs[18] * (-params.A_3[12]) - rhs[19] * (-params.A_3[13]) - rhs[20] * (-params.A_3[14]) -
             rhs[21] * (-params.A_3[15]) - rhs[22] * (-params.A_3[16]) - rhs[23] * (-params.A_3[17]);
  lhs[177] = -rhs[15] * (1) - rhs[18] * (-params.A_3[18]) - rhs[19] * (-params.A_3[19]) - rhs[20] * (-params.A_3[20]) -
             rhs[21] * (-params.A_3[21]) - rhs[22] * (-params.A_3[22]) - rhs[23] * (-params.A_3[23]);
  lhs[178] = -rhs[16] * (1) - rhs[18] * (-params.A_3[24]) - rhs[19] * (-params.A_3[25]) - rhs[20] * (-params.A_3[26]) -
             rhs[21] * (-params.A_3[27]) - rhs[22] * (-params.A_3[28]) - rhs[23] * (-params.A_3[29]);
  lhs[179] = -rhs[17] * (1) - rhs[18] * (-params.A_3[30]) - rhs[19] * (-params.A_3[31]) - rhs[20] * (-params.A_3[32]) -
             rhs[21] * (-params.A_3[33]) - rhs[22] * (-params.A_3[34]) - rhs[23] * (-params.A_3[35]);
  lhs[180] = -rhs[18] * (1) - rhs[24] * (-params.A_4[0]) - rhs[25] * (-params.A_4[1]) - rhs[26] * (-params.A_4[2]) -
             rhs[27] * (-params.A_4[3]) - rhs[28] * (-params.A_4[4]) - rhs[29] * (-params.A_4[5]);
  lhs[181] = -rhs[19] * (1) - rhs[24] * (-params.A_4[6]) - rhs[25] * (-params.A_4[7]) - rhs[26] * (-params.A_4[8]) -
             rhs[27] * (-params.A_4[9]) - rhs[28] * (-params.A_4[10]) - rhs[29] * (-params.A_4[11]);
  lhs[182] = -rhs[20] * (1) - rhs[24] * (-params.A_4[12]) - rhs[25] * (-params.A_4[13]) - rhs[26] * (-params.A_4[14]) -
             rhs[27] * (-params.A_4[15]) - rhs[28] * (-params.A_4[16]) - rhs[29] * (-params.A_4[17]);
  lhs[183] = -rhs[21] * (1) - rhs[24] * (-params.A_4[18]) - rhs[25] * (-params.A_4[19]) - rhs[26] * (-params.A_4[20]) -
             rhs[27] * (-params.A_4[21]) - rhs[28] * (-params.A_4[22]) - rhs[29] * (-params.A_4[23]);
  lhs[184] = -rhs[22] * (1) - rhs[24] * (-params.A_4[24]) - rhs[25] * (-params.A_4[25]) - rhs[26] * (-params.A_4[26]) -
             rhs[27] * (-params.A_4[27]) - rhs[28] * (-params.A_4[28]) - rhs[29] * (-params.A_4[29]);
  lhs[185] = -rhs[23] * (1) - rhs[24] * (-params.A_4[30]) - rhs[25] * (-params.A_4[31]) - rhs[26] * (-params.A_4[32]) -
             rhs[27] * (-params.A_4[33]) - rhs[28] * (-params.A_4[34]) - rhs[29] * (-params.A_4[35]);
  lhs[186] = -rhs[24] * (1) - rhs[30] * (-params.A_5[0]) - rhs[31] * (-params.A_5[1]) - rhs[32] * (-params.A_5[2]) -
             rhs[33] * (-params.A_5[3]) - rhs[34] * (-params.A_5[4]) - rhs[35] * (-params.A_5[5]);
  lhs[187] = -rhs[25] * (1) - rhs[30] * (-params.A_5[6]) - rhs[31] * (-params.A_5[7]) - rhs[32] * (-params.A_5[8]) -
             rhs[33] * (-params.A_5[9]) - rhs[34] * (-params.A_5[10]) - rhs[35] * (-params.A_5[11]);
  lhs[188] = -rhs[26] * (1) - rhs[30] * (-params.A_5[12]) - rhs[31] * (-params.A_5[13]) - rhs[32] * (-params.A_5[14]) -
             rhs[33] * (-params.A_5[15]) - rhs[34] * (-params.A_5[16]) - rhs[35] * (-params.A_5[17]);
  lhs[189] = -rhs[27] * (1) - rhs[30] * (-params.A_5[18]) - rhs[31] * (-params.A_5[19]) - rhs[32] * (-params.A_5[20]) -
             rhs[33] * (-params.A_5[21]) - rhs[34] * (-params.A_5[22]) - rhs[35] * (-params.A_5[23]);
  lhs[190] = -rhs[28] * (1) - rhs[30] * (-params.A_5[24]) - rhs[31] * (-params.A_5[25]) - rhs[32] * (-params.A_5[26]) -
             rhs[33] * (-params.A_5[27]) - rhs[34] * (-params.A_5[28]) - rhs[35] * (-params.A_5[29]);
  lhs[191] = -rhs[29] * (1) - rhs[30] * (-params.A_5[30]) - rhs[31] * (-params.A_5[31]) - rhs[32] * (-params.A_5[32]) -
             rhs[33] * (-params.A_5[33]) - rhs[34] * (-params.A_5[34]) - rhs[35] * (-params.A_5[35]);
  lhs[192] = -rhs[30] * (1) - rhs[36] * (-params.A_6[0]) - rhs[37] * (-params.A_6[1]) - rhs[38] * (-params.A_6[2]) -
             rhs[39] * (-params.A_6[3]) - rhs[40] * (-params.A_6[4]) - rhs[41] * (-params.A_6[5]);
  lhs[193] = -rhs[31] * (1) - rhs[36] * (-params.A_6[6]) - rhs[37] * (-params.A_6[7]) - rhs[38] * (-params.A_6[8]) -
             rhs[39] * (-params.A_6[9]) - rhs[40] * (-params.A_6[10]) - rhs[41] * (-params.A_6[11]);
  lhs[194] = -rhs[32] * (1) - rhs[36] * (-params.A_6[12]) - rhs[37] * (-params.A_6[13]) - rhs[38] * (-params.A_6[14]) -
             rhs[39] * (-params.A_6[15]) - rhs[40] * (-params.A_6[16]) - rhs[41] * (-params.A_6[17]);
  lhs[195] = -rhs[33] * (1) - rhs[36] * (-params.A_6[18]) - rhs[37] * (-params.A_6[19]) - rhs[38] * (-params.A_6[20]) -
             rhs[39] * (-params.A_6[21]) - rhs[40] * (-params.A_6[22]) - rhs[41] * (-params.A_6[23]);
  lhs[196] = -rhs[34] * (1) - rhs[36] * (-params.A_6[24]) - rhs[37] * (-params.A_6[25]) - rhs[38] * (-params.A_6[26]) -
             rhs[39] * (-params.A_6[27]) - rhs[40] * (-params.A_6[28]) - rhs[41] * (-params.A_6[29]);
  lhs[197] = -rhs[35] * (1) - rhs[36] * (-params.A_6[30]) - rhs[37] * (-params.A_6[31]) - rhs[38] * (-params.A_6[32]) -
             rhs[39] * (-params.A_6[33]) - rhs[40] * (-params.A_6[34]) - rhs[41] * (-params.A_6[35]);
  lhs[198] = -rhs[36] * (1) - rhs[42] * (-params.A_7[0]) - rhs[43] * (-params.A_7[1]) - rhs[44] * (-params.A_7[2]) -
             rhs[45] * (-params.A_7[3]) - rhs[46] * (-params.A_7[4]) - rhs[47] * (-params.A_7[5]);
  lhs[199] = -rhs[37] * (1) - rhs[42] * (-params.A_7[6]) - rhs[43] * (-params.A_7[7]) - rhs[44] * (-params.A_7[8]) -
             rhs[45] * (-params.A_7[9]) - rhs[46] * (-params.A_7[10]) - rhs[47] * (-params.A_7[11]);
  lhs[200] = -rhs[38] * (1) - rhs[42] * (-params.A_7[12]) - rhs[43] * (-params.A_7[13]) - rhs[44] * (-params.A_7[14]) -
             rhs[45] * (-params.A_7[15]) - rhs[46] * (-params.A_7[16]) - rhs[47] * (-params.A_7[17]);
  lhs[201] = -rhs[39] * (1) - rhs[42] * (-params.A_7[18]) - rhs[43] * (-params.A_7[19]) - rhs[44] * (-params.A_7[20]) -
             rhs[45] * (-params.A_7[21]) - rhs[46] * (-params.A_7[22]) - rhs[47] * (-params.A_7[23]);
  lhs[202] = -rhs[40] * (1) - rhs[42] * (-params.A_7[24]) - rhs[43] * (-params.A_7[25]) - rhs[44] * (-params.A_7[26]) -
             rhs[45] * (-params.A_7[27]) - rhs[46] * (-params.A_7[28]) - rhs[47] * (-params.A_7[29]);
  lhs[203] = -rhs[41] * (1) - rhs[42] * (-params.A_7[30]) - rhs[43] * (-params.A_7[31]) - rhs[44] * (-params.A_7[32]) -
             rhs[45] * (-params.A_7[33]) - rhs[46] * (-params.A_7[34]) - rhs[47] * (-params.A_7[35]);
  lhs[204] = -rhs[42] * (1) - rhs[48] * (-params.A_8[0]) - rhs[49] * (-params.A_8[1]) - rhs[50] * (-params.A_8[2]) -
             rhs[51] * (-params.A_8[3]) - rhs[52] * (-params.A_8[4]) - rhs[53] * (-params.A_8[5]);
  lhs[205] = -rhs[43] * (1) - rhs[48] * (-params.A_8[6]) - rhs[49] * (-params.A_8[7]) - rhs[50] * (-params.A_8[8]) -
             rhs[51] * (-params.A_8[9]) - rhs[52] * (-params.A_8[10]) - rhs[53] * (-params.A_8[11]);
  lhs[206] = -rhs[44] * (1) - rhs[48] * (-params.A_8[12]) - rhs[49] * (-params.A_8[13]) - rhs[50] * (-params.A_8[14]) -
             rhs[51] * (-params.A_8[15]) - rhs[52] * (-params.A_8[16]) - rhs[53] * (-params.A_8[17]);
  lhs[207] = -rhs[45] * (1) - rhs[48] * (-params.A_8[18]) - rhs[49] * (-params.A_8[19]) - rhs[50] * (-params.A_8[20]) -
             rhs[51] * (-params.A_8[21]) - rhs[52] * (-params.A_8[22]) - rhs[53] * (-params.A_8[23]);
  lhs[208] = -rhs[46] * (1) - rhs[48] * (-params.A_8[24]) - rhs[49] * (-params.A_8[25]) - rhs[50] * (-params.A_8[26]) -
             rhs[51] * (-params.A_8[27]) - rhs[52] * (-params.A_8[28]) - rhs[53] * (-params.A_8[29]);
  lhs[209] = -rhs[47] * (1) - rhs[48] * (-params.A_8[30]) - rhs[49] * (-params.A_8[31]) - rhs[50] * (-params.A_8[32]) -
             rhs[51] * (-params.A_8[33]) - rhs[52] * (-params.A_8[34]) - rhs[53] * (-params.A_8[35]);
  lhs[210] = -rhs[48] * (1) - rhs[54] * (-params.A_9[0]) - rhs[55] * (-params.A_9[1]) - rhs[56] * (-params.A_9[2]) -
             rhs[57] * (-params.A_9[3]) - rhs[58] * (-params.A_9[4]) - rhs[59] * (-params.A_9[5]);
  lhs[211] = -rhs[49] * (1) - rhs[54] * (-params.A_9[6]) - rhs[55] * (-params.A_9[7]) - rhs[56] * (-params.A_9[8]) -
             rhs[57] * (-params.A_9[9]) - rhs[58] * (-params.A_9[10]) - rhs[59] * (-params.A_9[11]);
  lhs[212] = -rhs[50] * (1) - rhs[54] * (-params.A_9[12]) - rhs[55] * (-params.A_9[13]) - rhs[56] * (-params.A_9[14]) -
             rhs[57] * (-params.A_9[15]) - rhs[58] * (-params.A_9[16]) - rhs[59] * (-params.A_9[17]);
  lhs[213] = -rhs[51] * (1) - rhs[54] * (-params.A_9[18]) - rhs[55] * (-params.A_9[19]) - rhs[56] * (-params.A_9[20]) -
             rhs[57] * (-params.A_9[21]) - rhs[58] * (-params.A_9[22]) - rhs[59] * (-params.A_9[23]);
  lhs[214] = -rhs[52] * (1) - rhs[54] * (-params.A_9[24]) - rhs[55] * (-params.A_9[25]) - rhs[56] * (-params.A_9[26]) -
             rhs[57] * (-params.A_9[27]) - rhs[58] * (-params.A_9[28]) - rhs[59] * (-params.A_9[29]);
  lhs[215] = -rhs[53] * (1) - rhs[54] * (-params.A_9[30]) - rhs[55] * (-params.A_9[31]) - rhs[56] * (-params.A_9[32]) -
             rhs[57] * (-params.A_9[33]) - rhs[58] * (-params.A_9[34]) - rhs[59] * (-params.A_9[35]);
  lhs[216] = -rhs[54] * (1) - rhs[60] * (-params.A_10[0]) - rhs[61] * (-params.A_10[1]) - rhs[62] * (-params.A_10[2]) -
             rhs[63] * (-params.A_10[3]) - rhs[64] * (-params.A_10[4]) - rhs[65] * (-params.A_10[5]);
  lhs[217] = -rhs[55] * (1) - rhs[60] * (-params.A_10[6]) - rhs[61] * (-params.A_10[7]) - rhs[62] * (-params.A_10[8]) -
             rhs[63] * (-params.A_10[9]) - rhs[64] * (-params.A_10[10]) - rhs[65] * (-params.A_10[11]);
  lhs[218] = -rhs[56] * (1) - rhs[60] * (-params.A_10[12]) - rhs[61] * (-params.A_10[13]) -
             rhs[62] * (-params.A_10[14]) - rhs[63] * (-params.A_10[15]) - rhs[64] * (-params.A_10[16]) -
             rhs[65] * (-params.A_10[17]);
  lhs[219] = -rhs[57] * (1) - rhs[60] * (-params.A_10[18]) - rhs[61] * (-params.A_10[19]) -
             rhs[62] * (-params.A_10[20]) - rhs[63] * (-params.A_10[21]) - rhs[64] * (-params.A_10[22]) -
             rhs[65] * (-params.A_10[23]);
  lhs[220] = -rhs[58] * (1) - rhs[60] * (-params.A_10[24]) - rhs[61] * (-params.A_10[25]) -
             rhs[62] * (-params.A_10[26]) - rhs[63] * (-params.A_10[27]) - rhs[64] * (-params.A_10[28]) -
             rhs[65] * (-params.A_10[29]);
  lhs[221] = -rhs[59] * (1) - rhs[60] * (-params.A_10[30]) - rhs[61] * (-params.A_10[31]) -
             rhs[62] * (-params.A_10[32]) - rhs[63] * (-params.A_10[33]) - rhs[64] * (-params.A_10[34]) -
             rhs[65] * (-params.A_10[35]);
  lhs[222] = -rhs[60] * (1) - rhs[66] * (-params.A_11[0]) - rhs[67] * (-params.A_11[1]) - rhs[68] * (-params.A_11[2]) -
             rhs[69] * (-params.A_11[3]) - rhs[70] * (-params.A_11[4]) - rhs[71] * (-params.A_11[5]);
  lhs[223] = -rhs[61] * (1) - rhs[66] * (-params.A_11[6]) - rhs[67] * (-params.A_11[7]) - rhs[68] * (-params.A_11[8]) -
             rhs[69] * (-params.A_11[9]) - rhs[70] * (-params.A_11[10]) - rhs[71] * (-params.A_11[11]);
  lhs[224] = -rhs[62] * (1) - rhs[66] * (-params.A_11[12]) - rhs[67] * (-params.A_11[13]) -
             rhs[68] * (-params.A_11[14]) - rhs[69] * (-params.A_11[15]) - rhs[70] * (-params.A_11[16]) -
             rhs[71] * (-params.A_11[17]);
  lhs[225] = -rhs[63] * (1) - rhs[66] * (-params.A_11[18]) - rhs[67] * (-params.A_11[19]) -
             rhs[68] * (-params.A_11[20]) - rhs[69] * (-params.A_11[21]) - rhs[70] * (-params.A_11[22]) -
             rhs[71] * (-params.A_11[23]);
  lhs[226] = -rhs[64] * (1) - rhs[66] * (-params.A_11[24]) - rhs[67] * (-params.A_11[25]) -
             rhs[68] * (-params.A_11[26]) - rhs[69] * (-params.A_11[27]) - rhs[70] * (-params.A_11[28]) -
             rhs[71] * (-params.A_11[29]);
  lhs[227] = -rhs[65] * (1) - rhs[66] * (-params.A_11[30]) - rhs[67] * (-params.A_11[31]) -
             rhs[68] * (-params.A_11[32]) - rhs[69] * (-params.A_11[33]) - rhs[70] * (-params.A_11[34]) -
             rhs[71] * (-params.A_11[35]);
  lhs[228] = -rhs[66] * (1) - rhs[72] * (-params.A_12[0]) - rhs[73] * (-params.A_12[1]) - rhs[74] * (-params.A_12[2]) -
             rhs[75] * (-params.A_12[3]) - rhs[76] * (-params.A_12[4]) - rhs[77] * (-params.A_12[5]);
  lhs[229] = -rhs[67] * (1) - rhs[72] * (-params.A_12[6]) - rhs[73] * (-params.A_12[7]) - rhs[74] * (-params.A_12[8]) -
             rhs[75] * (-params.A_12[9]) - rhs[76] * (-params.A_12[10]) - rhs[77] * (-params.A_12[11]);
  lhs[230] = -rhs[68] * (1) - rhs[72] * (-params.A_12[12]) - rhs[73] * (-params.A_12[13]) -
             rhs[74] * (-params.A_12[14]) - rhs[75] * (-params.A_12[15]) - rhs[76] * (-params.A_12[16]) -
             rhs[77] * (-params.A_12[17]);
  lhs[231] = -rhs[69] * (1) - rhs[72] * (-params.A_12[18]) - rhs[73] * (-params.A_12[19]) -
             rhs[74] * (-params.A_12[20]) - rhs[75] * (-params.A_12[21]) - rhs[76] * (-params.A_12[22]) -
             rhs[77] * (-params.A_12[23]);
  lhs[232] = -rhs[70] * (1) - rhs[72] * (-params.A_12[24]) - rhs[73] * (-params.A_12[25]) -
             rhs[74] * (-params.A_12[26]) - rhs[75] * (-params.A_12[27]) - rhs[76] * (-params.A_12[28]) -
             rhs[77] * (-params.A_12[29]);
  lhs[233] = -rhs[71] * (1) - rhs[72] * (-params.A_12[30]) - rhs[73] * (-params.A_12[31]) -
             rhs[74] * (-params.A_12[32]) - rhs[75] * (-params.A_12[33]) - rhs[76] * (-params.A_12[34]) -
             rhs[77] * (-params.A_12[35]);
  lhs[234] = -rhs[72] * (1) - rhs[78] * (-params.A_13[0]) - rhs[79] * (-params.A_13[1]) - rhs[80] * (-params.A_13[2]) -
             rhs[81] * (-params.A_13[3]) - rhs[82] * (-params.A_13[4]) - rhs[83] * (-params.A_13[5]);
  lhs[235] = -rhs[73] * (1) - rhs[78] * (-params.A_13[6]) - rhs[79] * (-params.A_13[7]) - rhs[80] * (-params.A_13[8]) -
             rhs[81] * (-params.A_13[9]) - rhs[82] * (-params.A_13[10]) - rhs[83] * (-params.A_13[11]);
  lhs[236] = -rhs[74] * (1) - rhs[78] * (-params.A_13[12]) - rhs[79] * (-params.A_13[13]) -
             rhs[80] * (-params.A_13[14]) - rhs[81] * (-params.A_13[15]) - rhs[82] * (-params.A_13[16]) -
             rhs[83] * (-params.A_13[17]);
  lhs[237] = -rhs[75] * (1) - rhs[78] * (-params.A_13[18]) - rhs[79] * (-params.A_13[19]) -
             rhs[80] * (-params.A_13[20]) - rhs[81] * (-params.A_13[21]) - rhs[82] * (-params.A_13[22]) -
             rhs[83] * (-params.A_13[23]);
  lhs[238] = -rhs[76] * (1) - rhs[78] * (-params.A_13[24]) - rhs[79] * (-params.A_13[25]) -
             rhs[80] * (-params.A_13[26]) - rhs[81] * (-params.A_13[27]) - rhs[82] * (-params.A_13[28]) -
             rhs[83] * (-params.A_13[29]);
  lhs[239] = -rhs[77] * (1) - rhs[78] * (-params.A_13[30]) - rhs[79] * (-params.A_13[31]) -
             rhs[80] * (-params.A_13[32]) - rhs[81] * (-params.A_13[33]) - rhs[82] * (-params.A_13[34]) -
             rhs[83] * (-params.A_13[35]);
  lhs[240] = -rhs[78] * (1) - rhs[84] * (-params.A_14[0]) - rhs[85] * (-params.A_14[1]) - rhs[86] * (-params.A_14[2]) -
             rhs[87] * (-params.A_14[3]) - rhs[88] * (-params.A_14[4]) - rhs[89] * (-params.A_14[5]);
  lhs[241] = -rhs[79] * (1) - rhs[84] * (-params.A_14[6]) - rhs[85] * (-params.A_14[7]) - rhs[86] * (-params.A_14[8]) -
             rhs[87] * (-params.A_14[9]) - rhs[88] * (-params.A_14[10]) - rhs[89] * (-params.A_14[11]);
  lhs[242] = -rhs[80] * (1) - rhs[84] * (-params.A_14[12]) - rhs[85] * (-params.A_14[13]) -
             rhs[86] * (-params.A_14[14]) - rhs[87] * (-params.A_14[15]) - rhs[88] * (-params.A_14[16]) -
             rhs[89] * (-params.A_14[17]);
  lhs[243] = -rhs[81] * (1) - rhs[84] * (-params.A_14[18]) - rhs[85] * (-params.A_14[19]) -
             rhs[86] * (-params.A_14[20]) - rhs[87] * (-params.A_14[21]) - rhs[88] * (-params.A_14[22]) -
             rhs[89] * (-params.A_14[23]);
  lhs[244] = -rhs[82] * (1) - rhs[84] * (-params.A_14[24]) - rhs[85] * (-params.A_14[25]) -
             rhs[86] * (-params.A_14[26]) - rhs[87] * (-params.A_14[27]) - rhs[88] * (-params.A_14[28]) -
             rhs[89] * (-params.A_14[29]);
  lhs[245] = -rhs[83] * (1) - rhs[84] * (-params.A_14[30]) - rhs[85] * (-params.A_14[31]) -
             rhs[86] * (-params.A_14[32]) - rhs[87] * (-params.A_14[33]) - rhs[88] * (-params.A_14[34]) -
             rhs[89] * (-params.A_14[35]);
  lhs[246] = -rhs[84] * (1) - rhs[90] * (-params.A_15[0]) - rhs[91] * (-params.A_15[1]) - rhs[92] * (-params.A_15[2]) -
             rhs[93] * (-params.A_15[3]) - rhs[94] * (-params.A_15[4]) - rhs[95] * (-params.A_15[5]);
  lhs[247] = -rhs[85] * (1) - rhs[90] * (-params.A_15[6]) - rhs[91] * (-params.A_15[7]) - rhs[92] * (-params.A_15[8]) -
             rhs[93] * (-params.A_15[9]) - rhs[94] * (-params.A_15[10]) - rhs[95] * (-params.A_15[11]);
  lhs[248] = -rhs[86] * (1) - rhs[90] * (-params.A_15[12]) - rhs[91] * (-params.A_15[13]) -
             rhs[92] * (-params.A_15[14]) - rhs[93] * (-params.A_15[15]) - rhs[94] * (-params.A_15[16]) -
             rhs[95] * (-params.A_15[17]);
  lhs[249] = -rhs[87] * (1) - rhs[90] * (-params.A_15[18]) - rhs[91] * (-params.A_15[19]) -
             rhs[92] * (-params.A_15[20]) - rhs[93] * (-params.A_15[21]) - rhs[94] * (-params.A_15[22]) -
             rhs[95] * (-params.A_15[23]);
  lhs[250] = -rhs[88] * (1) - rhs[90] * (-params.A_15[24]) - rhs[91] * (-params.A_15[25]) -
             rhs[92] * (-params.A_15[26]) - rhs[93] * (-params.A_15[27]) - rhs[94] * (-params.A_15[28]) -
             rhs[95] * (-params.A_15[29]);
  lhs[251] = -rhs[89] * (1) - rhs[90] * (-params.A_15[30]) - rhs[91] * (-params.A_15[31]) -
             rhs[92] * (-params.A_15[32]) - rhs[93] * (-params.A_15[33]) - rhs[94] * (-params.A_15[34]) -
             rhs[95] * (-params.A_15[35]);
  lhs[252] = -rhs[90] * (1) - rhs[96] * (-params.A_16[0]) - rhs[97] * (-params.A_16[1]) - rhs[98] * (-params.A_16[2]) -
             rhs[99] * (-params.A_16[3]) - rhs[100] * (-params.A_16[4]) - rhs[101] * (-params.A_16[5]);
  lhs[253] = -rhs[91] * (1) - rhs[96] * (-params.A_16[6]) - rhs[97] * (-params.A_16[7]) - rhs[98] * (-params.A_16[8]) -
             rhs[99] * (-params.A_16[9]) - rhs[100] * (-params.A_16[10]) - rhs[101] * (-params.A_16[11]);
  lhs[254] = -rhs[92] * (1) - rhs[96] * (-params.A_16[12]) - rhs[97] * (-params.A_16[13]) -
             rhs[98] * (-params.A_16[14]) - rhs[99] * (-params.A_16[15]) - rhs[100] * (-params.A_16[16]) -
             rhs[101] * (-params.A_16[17]);
  lhs[255] = -rhs[93] * (1) - rhs[96] * (-params.A_16[18]) - rhs[97] * (-params.A_16[19]) -
             rhs[98] * (-params.A_16[20]) - rhs[99] * (-params.A_16[21]) - rhs[100] * (-params.A_16[22]) -
             rhs[101] * (-params.A_16[23]);
  lhs[256] = -rhs[94] * (1) - rhs[96] * (-params.A_16[24]) - rhs[97] * (-params.A_16[25]) -
             rhs[98] * (-params.A_16[26]) - rhs[99] * (-params.A_16[27]) - rhs[100] * (-params.A_16[28]) -
             rhs[101] * (-params.A_16[29]);
  lhs[257] = -rhs[95] * (1) - rhs[96] * (-params.A_16[30]) - rhs[97] * (-params.A_16[31]) -
             rhs[98] * (-params.A_16[32]) - rhs[99] * (-params.A_16[33]) - rhs[100] * (-params.A_16[34]) -
             rhs[101] * (-params.A_16[35]);
  lhs[258] = -rhs[96] * (1) - rhs[102] * (-params.A_17[0]) - rhs[103] * (-params.A_17[1]) -
             rhs[104] * (-params.A_17[2]) - rhs[105] * (-params.A_17[3]) - rhs[106] * (-params.A_17[4]) -
             rhs[107] * (-params.A_17[5]);
  lhs[259] = -rhs[97] * (1) - rhs[102] * (-params.A_17[6]) - rhs[103] * (-params.A_17[7]) -
             rhs[104] * (-params.A_17[8]) - rhs[105] * (-params.A_17[9]) - rhs[106] * (-params.A_17[10]) -
             rhs[107] * (-params.A_17[11]);
  lhs[260] = -rhs[98] * (1) - rhs[102] * (-params.A_17[12]) - rhs[103] * (-params.A_17[13]) -
             rhs[104] * (-params.A_17[14]) - rhs[105] * (-params.A_17[15]) - rhs[106] * (-params.A_17[16]) -
             rhs[107] * (-params.A_17[17]);
  lhs[261] = -rhs[99] * (1) - rhs[102] * (-params.A_17[18]) - rhs[103] * (-params.A_17[19]) -
             rhs[104] * (-params.A_17[20]) - rhs[105] * (-params.A_17[21]) - rhs[106] * (-params.A_17[22]) -
             rhs[107] * (-params.A_17[23]);
  lhs[262] = -rhs[100] * (1) - rhs[102] * (-params.A_17[24]) - rhs[103] * (-params.A_17[25]) -
             rhs[104] * (-params.A_17[26]) - rhs[105] * (-params.A_17[27]) - rhs[106] * (-params.A_17[28]) -
             rhs[107] * (-params.A_17[29]);
  lhs[263] = -rhs[101] * (1) - rhs[102] * (-params.A_17[30]) - rhs[103] * (-params.A_17[31]) -
             rhs[104] * (-params.A_17[32]) - rhs[105] * (-params.A_17[33]) - rhs[106] * (-params.A_17[34]) -
             rhs[107] * (-params.A_17[35]);
  lhs[264] = -rhs[102] * (1);
  lhs[265] = -rhs[103] * (1);
  lhs[266] = -rhs[104] * (1);
  lhs[267] = -rhs[105] * (1);
  lhs[268] = -rhs[106] * (1);
  lhs[269] = -rhs[107] * (1);
}
void multbymG(double* lhs, double* rhs)
{
  lhs[0] = -rhs[0] * (1);
  lhs[1] = -rhs[0] * (-1) - rhs[164] * (1);
  lhs[2] = -rhs[0] * (-1) - rhs[164] * (-1);
  lhs[3] = -rhs[1] * (1);
  lhs[4] = -rhs[1] * (-1) - rhs[170] * (1);
  lhs[5] = -rhs[1] * (-1) - rhs[170] * (-1);
  lhs[6] = -rhs[2] * (1);
  lhs[7] = -rhs[2] * (-1) - rhs[176] * (1);
  lhs[8] = -rhs[2] * (-1) - rhs[176] * (-1);
  lhs[9] = -rhs[3] * (1);
  lhs[10] = -rhs[3] * (-1) - rhs[182] * (1);
  lhs[11] = -rhs[3] * (-1) - rhs[182] * (-1);
  lhs[12] = -rhs[4] * (1);
  lhs[13] = -rhs[4] * (-1) - rhs[188] * (1);
  lhs[14] = -rhs[4] * (-1) - rhs[188] * (-1);
  lhs[15] = -rhs[5] * (1);
  lhs[16] = -rhs[5] * (-1) - rhs[194] * (1);
  lhs[17] = -rhs[5] * (-1) - rhs[194] * (-1);
  lhs[18] = -rhs[6] * (1);
  lhs[19] = -rhs[6] * (-1) - rhs[200] * (1);
  lhs[20] = -rhs[6] * (-1) - rhs[200] * (-1);
  lhs[21] = -rhs[7] * (1);
  lhs[22] = -rhs[7] * (-1) - rhs[206] * (1);
  lhs[23] = -rhs[7] * (-1) - rhs[206] * (-1);
  lhs[24] = -rhs[8] * (1);
  lhs[25] = -rhs[8] * (-1) - rhs[212] * (1);
  lhs[26] = -rhs[8] * (-1) - rhs[212] * (-1);
  lhs[27] = -rhs[9] * (1);
  lhs[28] = -rhs[9] * (-1) - rhs[218] * (1);
  lhs[29] = -rhs[9] * (-1) - rhs[218] * (-1);
  lhs[30] = -rhs[10] * (1);
  lhs[31] = -rhs[10] * (-1) - rhs[224] * (1);
  lhs[32] = -rhs[10] * (-1) - rhs[224] * (-1);
  lhs[33] = -rhs[11] * (1);
  lhs[34] = -rhs[11] * (-1) - rhs[230] * (1);
  lhs[35] = -rhs[11] * (-1) - rhs[230] * (-1);
  lhs[36] = -rhs[12] * (1);
  lhs[37] = -rhs[12] * (-1) - rhs[236] * (1);
  lhs[38] = -rhs[12] * (-1) - rhs[236] * (-1);
  lhs[39] = -rhs[13] * (1);
  lhs[40] = -rhs[13] * (-1) - rhs[242] * (1);
  lhs[41] = -rhs[13] * (-1) - rhs[242] * (-1);
  lhs[42] = -rhs[14] * (1);
  lhs[43] = -rhs[14] * (-1) - rhs[248] * (1);
  lhs[44] = -rhs[14] * (-1) - rhs[248] * (-1);
  lhs[45] = -rhs[15] * (1);
  lhs[46] = -rhs[15] * (-1) - rhs[254] * (1);
  lhs[47] = -rhs[15] * (-1) - rhs[254] * (-1);
  lhs[48] = -rhs[16] * (1);
  lhs[49] = -rhs[16] * (-1) - rhs[260] * (1);
  lhs[50] = -rhs[16] * (-1) - rhs[260] * (-1);
  lhs[51] = -rhs[17] * (1);
  lhs[52] = -rhs[17] * (-1) - rhs[266] * (1);
  lhs[53] = -rhs[17] * (-1) - rhs[266] * (-1);
  lhs[54] = -rhs[18] * (1);
  lhs[55] = -rhs[18] * (-1) - rhs[165] * (1);
  lhs[56] = -rhs[18] * (-1) - rhs[165] * (-1);
  lhs[57] = -rhs[19] * (1);
  lhs[58] = -rhs[19] * (-1) - rhs[171] * (1);
  lhs[59] = -rhs[19] * (-1) - rhs[171] * (-1);
  lhs[60] = -rhs[20] * (1);
  lhs[61] = -rhs[20] * (-1) - rhs[177] * (1);
  lhs[62] = -rhs[20] * (-1) - rhs[177] * (-1);
  lhs[63] = -rhs[21] * (1);
  lhs[64] = -rhs[21] * (-1) - rhs[183] * (1);
  lhs[65] = -rhs[21] * (-1) - rhs[183] * (-1);
  lhs[66] = -rhs[22] * (1);
  lhs[67] = -rhs[22] * (-1) - rhs[189] * (1);
  lhs[68] = -rhs[22] * (-1) - rhs[189] * (-1);
  lhs[69] = -rhs[23] * (1);
  lhs[70] = -rhs[23] * (-1) - rhs[195] * (1);
  lhs[71] = -rhs[23] * (-1) - rhs[195] * (-1);
  lhs[72] = -rhs[24] * (1);
  lhs[73] = -rhs[24] * (-1) - rhs[201] * (1);
  lhs[74] = -rhs[24] * (-1) - rhs[201] * (-1);
  lhs[75] = -rhs[25] * (1);
  lhs[76] = -rhs[25] * (-1) - rhs[207] * (1);
  lhs[77] = -rhs[25] * (-1) - rhs[207] * (-1);
  lhs[78] = -rhs[26] * (1);
  lhs[79] = -rhs[26] * (-1) - rhs[213] * (1);
  lhs[80] = -rhs[26] * (-1) - rhs[213] * (-1);
  lhs[81] = -rhs[27] * (1);
  lhs[82] = -rhs[27] * (-1) - rhs[219] * (1);
  lhs[83] = -rhs[27] * (-1) - rhs[219] * (-1);
  lhs[84] = -rhs[28] * (1);
  lhs[85] = -rhs[28] * (-1) - rhs[225] * (1);
  lhs[86] = -rhs[28] * (-1) - rhs[225] * (-1);
  lhs[87] = -rhs[29] * (1);
  lhs[88] = -rhs[29] * (-1) - rhs[231] * (1);
  lhs[89] = -rhs[29] * (-1) - rhs[231] * (-1);
  lhs[90] = -rhs[30] * (1);
  lhs[91] = -rhs[30] * (-1) - rhs[237] * (1);
  lhs[92] = -rhs[30] * (-1) - rhs[237] * (-1);
  lhs[93] = -rhs[31] * (1);
  lhs[94] = -rhs[31] * (-1) - rhs[243] * (1);
  lhs[95] = -rhs[31] * (-1) - rhs[243] * (-1);
  lhs[96] = -rhs[32] * (1);
  lhs[97] = -rhs[32] * (-1) - rhs[249] * (1);
  lhs[98] = -rhs[32] * (-1) - rhs[249] * (-1);
  lhs[99] = -rhs[33] * (1);
  lhs[100] = -rhs[33] * (-1) - rhs[255] * (1);
  lhs[101] = -rhs[33] * (-1) - rhs[255] * (-1);
  lhs[102] = -rhs[34] * (1);
  lhs[103] = -rhs[34] * (-1) - rhs[261] * (1);
  lhs[104] = -rhs[34] * (-1) - rhs[261] * (-1);
  lhs[105] = -rhs[35] * (1);
  lhs[106] = -rhs[35] * (-1) - rhs[267] * (1);
  lhs[107] = -rhs[35] * (-1) - rhs[267] * (-1);
  lhs[108] = -rhs[36] * (1);
  lhs[109] = -rhs[36] * (-1) - rhs[166] * (1);
  lhs[110] = -rhs[36] * (-1) - rhs[166] * (-1);
  lhs[111] = -rhs[37] * (1);
  lhs[112] = -rhs[37] * (-1) - rhs[172] * (1);
  lhs[113] = -rhs[37] * (-1) - rhs[172] * (-1);
  lhs[114] = -rhs[38] * (1);
  lhs[115] = -rhs[38] * (-1) - rhs[178] * (1);
  lhs[116] = -rhs[38] * (-1) - rhs[178] * (-1);
  lhs[117] = -rhs[39] * (1);
  lhs[118] = -rhs[39] * (-1) - rhs[184] * (1);
  lhs[119] = -rhs[39] * (-1) - rhs[184] * (-1);
  lhs[120] = -rhs[40] * (1);
  lhs[121] = -rhs[40] * (-1) - rhs[190] * (1);
  lhs[122] = -rhs[40] * (-1) - rhs[190] * (-1);
  lhs[123] = -rhs[41] * (1);
  lhs[124] = -rhs[41] * (-1) - rhs[196] * (1);
  lhs[125] = -rhs[41] * (-1) - rhs[196] * (-1);
  lhs[126] = -rhs[42] * (1);
  lhs[127] = -rhs[42] * (-1) - rhs[202] * (1);
  lhs[128] = -rhs[42] * (-1) - rhs[202] * (-1);
  lhs[129] = -rhs[43] * (1);
  lhs[130] = -rhs[43] * (-1) - rhs[208] * (1);
  lhs[131] = -rhs[43] * (-1) - rhs[208] * (-1);
  lhs[132] = -rhs[44] * (1);
  lhs[133] = -rhs[44] * (-1) - rhs[214] * (1);
  lhs[134] = -rhs[44] * (-1) - rhs[214] * (-1);
  lhs[135] = -rhs[45] * (1);
  lhs[136] = -rhs[45] * (-1) - rhs[220] * (1);
  lhs[137] = -rhs[45] * (-1) - rhs[220] * (-1);
  lhs[138] = -rhs[46] * (1);
  lhs[139] = -rhs[46] * (-1) - rhs[226] * (1);
  lhs[140] = -rhs[46] * (-1) - rhs[226] * (-1);
  lhs[141] = -rhs[47] * (1);
  lhs[142] = -rhs[47] * (-1) - rhs[232] * (1);
  lhs[143] = -rhs[47] * (-1) - rhs[232] * (-1);
  lhs[144] = -rhs[48] * (1);
  lhs[145] = -rhs[48] * (-1) - rhs[238] * (1);
  lhs[146] = -rhs[48] * (-1) - rhs[238] * (-1);
  lhs[147] = -rhs[49] * (1);
  lhs[148] = -rhs[49] * (-1) - rhs[244] * (1);
  lhs[149] = -rhs[49] * (-1) - rhs[244] * (-1);
  lhs[150] = -rhs[50] * (1);
  lhs[151] = -rhs[50] * (-1) - rhs[250] * (1);
  lhs[152] = -rhs[50] * (-1) - rhs[250] * (-1);
  lhs[153] = -rhs[51] * (1);
  lhs[154] = -rhs[51] * (-1) - rhs[256] * (1);
  lhs[155] = -rhs[51] * (-1) - rhs[256] * (-1);
  lhs[156] = -rhs[52] * (1);
  lhs[157] = -rhs[52] * (-1) - rhs[262] * (1);
  lhs[158] = -rhs[52] * (-1) - rhs[262] * (-1);
  lhs[159] = -rhs[53] * (1);
  lhs[160] = -rhs[53] * (-1) - rhs[268] * (1);
  lhs[161] = -rhs[53] * (-1) - rhs[268] * (-1);
  lhs[162] = -rhs[54] * (1);
  lhs[163] = -rhs[55] * (1);
  lhs[164] = -rhs[56] * (1);
  lhs[165] = -rhs[54] * (-1) - rhs[108] * (1);
  lhs[166] = -rhs[55] * (-1) - rhs[109] * (1);
  lhs[167] = -rhs[56] * (-1) - rhs[110] * (1);
  lhs[168] = -rhs[54] * (-1) - rhs[108] * (-1);
  lhs[169] = -rhs[55] * (-1) - rhs[109] * (-1);
  lhs[170] = -rhs[56] * (-1) - rhs[110] * (-1);
  lhs[171] = -rhs[57] * (1);
  lhs[172] = -rhs[58] * (1);
  lhs[173] = -rhs[59] * (1);
  lhs[174] = -rhs[57] * (-1) - rhs[111] * (1);
  lhs[175] = -rhs[58] * (-1) - rhs[112] * (1);
  lhs[176] = -rhs[59] * (-1) - rhs[113] * (1);
  lhs[177] = -rhs[57] * (-1) - rhs[111] * (-1);
  lhs[178] = -rhs[58] * (-1) - rhs[112] * (-1);
  lhs[179] = -rhs[59] * (-1) - rhs[113] * (-1);
  lhs[180] = -rhs[60] * (1);
  lhs[181] = -rhs[61] * (1);
  lhs[182] = -rhs[62] * (1);
  lhs[183] = -rhs[60] * (-1) - rhs[114] * (1);
  lhs[184] = -rhs[61] * (-1) - rhs[115] * (1);
  lhs[185] = -rhs[62] * (-1) - rhs[116] * (1);
  lhs[186] = -rhs[60] * (-1) - rhs[114] * (-1);
  lhs[187] = -rhs[61] * (-1) - rhs[115] * (-1);
  lhs[188] = -rhs[62] * (-1) - rhs[116] * (-1);
  lhs[189] = -rhs[63] * (1);
  lhs[190] = -rhs[64] * (1);
  lhs[191] = -rhs[65] * (1);
  lhs[192] = -rhs[63] * (-1) - rhs[117] * (1);
  lhs[193] = -rhs[64] * (-1) - rhs[118] * (1);
  lhs[194] = -rhs[65] * (-1) - rhs[119] * (1);
  lhs[195] = -rhs[63] * (-1) - rhs[117] * (-1);
  lhs[196] = -rhs[64] * (-1) - rhs[118] * (-1);
  lhs[197] = -rhs[65] * (-1) - rhs[119] * (-1);
  lhs[198] = -rhs[66] * (1);
  lhs[199] = -rhs[67] * (1);
  lhs[200] = -rhs[68] * (1);
  lhs[201] = -rhs[66] * (-1) - rhs[120] * (1);
  lhs[202] = -rhs[67] * (-1) - rhs[121] * (1);
  lhs[203] = -rhs[68] * (-1) - rhs[122] * (1);
  lhs[204] = -rhs[66] * (-1) - rhs[120] * (-1);
  lhs[205] = -rhs[67] * (-1) - rhs[121] * (-1);
  lhs[206] = -rhs[68] * (-1) - rhs[122] * (-1);
  lhs[207] = -rhs[69] * (1);
  lhs[208] = -rhs[70] * (1);
  lhs[209] = -rhs[71] * (1);
  lhs[210] = -rhs[69] * (-1) - rhs[123] * (1);
  lhs[211] = -rhs[70] * (-1) - rhs[124] * (1);
  lhs[212] = -rhs[71] * (-1) - rhs[125] * (1);
  lhs[213] = -rhs[69] * (-1) - rhs[123] * (-1);
  lhs[214] = -rhs[70] * (-1) - rhs[124] * (-1);
  lhs[215] = -rhs[71] * (-1) - rhs[125] * (-1);
  lhs[216] = -rhs[72] * (1);
  lhs[217] = -rhs[73] * (1);
  lhs[218] = -rhs[74] * (1);
  lhs[219] = -rhs[72] * (-1) - rhs[126] * (1);
  lhs[220] = -rhs[73] * (-1) - rhs[127] * (1);
  lhs[221] = -rhs[74] * (-1) - rhs[128] * (1);
  lhs[222] = -rhs[72] * (-1) - rhs[126] * (-1);
  lhs[223] = -rhs[73] * (-1) - rhs[127] * (-1);
  lhs[224] = -rhs[74] * (-1) - rhs[128] * (-1);
  lhs[225] = -rhs[75] * (1);
  lhs[226] = -rhs[76] * (1);
  lhs[227] = -rhs[77] * (1);
  lhs[228] = -rhs[75] * (-1) - rhs[129] * (1);
  lhs[229] = -rhs[76] * (-1) - rhs[130] * (1);
  lhs[230] = -rhs[77] * (-1) - rhs[131] * (1);
  lhs[231] = -rhs[75] * (-1) - rhs[129] * (-1);
  lhs[232] = -rhs[76] * (-1) - rhs[130] * (-1);
  lhs[233] = -rhs[77] * (-1) - rhs[131] * (-1);
  lhs[234] = -rhs[78] * (1);
  lhs[235] = -rhs[79] * (1);
  lhs[236] = -rhs[80] * (1);
  lhs[237] = -rhs[78] * (-1) - rhs[132] * (1);
  lhs[238] = -rhs[79] * (-1) - rhs[133] * (1);
  lhs[239] = -rhs[80] * (-1) - rhs[134] * (1);
  lhs[240] = -rhs[78] * (-1) - rhs[132] * (-1);
  lhs[241] = -rhs[79] * (-1) - rhs[133] * (-1);
  lhs[242] = -rhs[80] * (-1) - rhs[134] * (-1);
  lhs[243] = -rhs[81] * (1);
  lhs[244] = -rhs[82] * (1);
  lhs[245] = -rhs[83] * (1);
  lhs[246] = -rhs[81] * (-1) - rhs[135] * (1);
  lhs[247] = -rhs[82] * (-1) - rhs[136] * (1);
  lhs[248] = -rhs[83] * (-1) - rhs[137] * (1);
  lhs[249] = -rhs[81] * (-1) - rhs[135] * (-1);
  lhs[250] = -rhs[82] * (-1) - rhs[136] * (-1);
  lhs[251] = -rhs[83] * (-1) - rhs[137] * (-1);
  lhs[252] = -rhs[84] * (1);
  lhs[253] = -rhs[85] * (1);
  lhs[254] = -rhs[86] * (1);
  lhs[255] = -rhs[84] * (-1) - rhs[138] * (1);
  lhs[256] = -rhs[85] * (-1) - rhs[139] * (1);
  lhs[257] = -rhs[86] * (-1) - rhs[140] * (1);
  lhs[258] = -rhs[84] * (-1) - rhs[138] * (-1);
  lhs[259] = -rhs[85] * (-1) - rhs[139] * (-1);
  lhs[260] = -rhs[86] * (-1) - rhs[140] * (-1);
  lhs[261] = -rhs[87] * (1);
  lhs[262] = -rhs[88] * (1);
  lhs[263] = -rhs[89] * (1);
  lhs[264] = -rhs[87] * (-1) - rhs[141] * (1);
  lhs[265] = -rhs[88] * (-1) - rhs[142] * (1);
  lhs[266] = -rhs[89] * (-1) - rhs[143] * (1);
  lhs[267] = -rhs[87] * (-1) - rhs[141] * (-1);
  lhs[268] = -rhs[88] * (-1) - rhs[142] * (-1);
  lhs[269] = -rhs[89] * (-1) - rhs[143] * (-1);
  lhs[270] = -rhs[90] * (1);
  lhs[271] = -rhs[91] * (1);
  lhs[272] = -rhs[92] * (1);
  lhs[273] = -rhs[90] * (-1) - rhs[144] * (1);
  lhs[274] = -rhs[91] * (-1) - rhs[145] * (1);
  lhs[275] = -rhs[92] * (-1) - rhs[146] * (1);
  lhs[276] = -rhs[90] * (-1) - rhs[144] * (-1);
  lhs[277] = -rhs[91] * (-1) - rhs[145] * (-1);
  lhs[278] = -rhs[92] * (-1) - rhs[146] * (-1);
  lhs[279] = -rhs[93] * (1);
  lhs[280] = -rhs[94] * (1);
  lhs[281] = -rhs[95] * (1);
  lhs[282] = -rhs[93] * (-1) - rhs[147] * (1);
  lhs[283] = -rhs[94] * (-1) - rhs[148] * (1);
  lhs[284] = -rhs[95] * (-1) - rhs[149] * (1);
  lhs[285] = -rhs[93] * (-1) - rhs[147] * (-1);
  lhs[286] = -rhs[94] * (-1) - rhs[148] * (-1);
  lhs[287] = -rhs[95] * (-1) - rhs[149] * (-1);
  lhs[288] = -rhs[96] * (1);
  lhs[289] = -rhs[97] * (1);
  lhs[290] = -rhs[98] * (1);
  lhs[291] = -rhs[96] * (-1) - rhs[150] * (1);
  lhs[292] = -rhs[97] * (-1) - rhs[151] * (1);
  lhs[293] = -rhs[98] * (-1) - rhs[152] * (1);
  lhs[294] = -rhs[96] * (-1) - rhs[150] * (-1);
  lhs[295] = -rhs[97] * (-1) - rhs[151] * (-1);
  lhs[296] = -rhs[98] * (-1) - rhs[152] * (-1);
  lhs[297] = -rhs[99] * (1);
  lhs[298] = -rhs[100] * (1);
  lhs[299] = -rhs[101] * (1);
  lhs[300] = -rhs[99] * (-1) - rhs[153] * (1);
  lhs[301] = -rhs[100] * (-1) - rhs[154] * (1);
  lhs[302] = -rhs[101] * (-1) - rhs[155] * (1);
  lhs[303] = -rhs[99] * (-1) - rhs[153] * (-1);
  lhs[304] = -rhs[100] * (-1) - rhs[154] * (-1);
  lhs[305] = -rhs[101] * (-1) - rhs[155] * (-1);
  lhs[306] = -rhs[102] * (1);
  lhs[307] = -rhs[103] * (1);
  lhs[308] = -rhs[104] * (1);
  lhs[309] = -rhs[102] * (-1) - rhs[156] * (1);
  lhs[310] = -rhs[103] * (-1) - rhs[157] * (1);
  lhs[311] = -rhs[104] * (-1) - rhs[158] * (1);
  lhs[312] = -rhs[102] * (-1) - rhs[156] * (-1);
  lhs[313] = -rhs[103] * (-1) - rhs[157] * (-1);
  lhs[314] = -rhs[104] * (-1) - rhs[158] * (-1);
  lhs[315] = -rhs[105] * (1);
  lhs[316] = -rhs[106] * (1);
  lhs[317] = -rhs[107] * (1);
  lhs[318] = -rhs[105] * (-1) - rhs[159] * (1);
  lhs[319] = -rhs[106] * (-1) - rhs[160] * (1);
  lhs[320] = -rhs[107] * (-1) - rhs[161] * (1);
  lhs[321] = -rhs[105] * (-1) - rhs[159] * (-1);
  lhs[322] = -rhs[106] * (-1) - rhs[160] * (-1);
  lhs[323] = -rhs[107] * (-1) - rhs[161] * (-1);
}
void multbymGT(double* lhs, double* rhs)
{
  lhs[0] = -rhs[0] * (1) - rhs[1] * (-1) - rhs[2] * (-1);
  lhs[1] = -rhs[3] * (1) - rhs[4] * (-1) - rhs[5] * (-1);
  lhs[2] = -rhs[6] * (1) - rhs[7] * (-1) - rhs[8] * (-1);
  lhs[3] = -rhs[9] * (1) - rhs[10] * (-1) - rhs[11] * (-1);
  lhs[4] = -rhs[12] * (1) - rhs[13] * (-1) - rhs[14] * (-1);
  lhs[5] = -rhs[15] * (1) - rhs[16] * (-1) - rhs[17] * (-1);
  lhs[6] = -rhs[18] * (1) - rhs[19] * (-1) - rhs[20] * (-1);
  lhs[7] = -rhs[21] * (1) - rhs[22] * (-1) - rhs[23] * (-1);
  lhs[8] = -rhs[24] * (1) - rhs[25] * (-1) - rhs[26] * (-1);
  lhs[9] = -rhs[27] * (1) - rhs[28] * (-1) - rhs[29] * (-1);
  lhs[10] = -rhs[30] * (1) - rhs[31] * (-1) - rhs[32] * (-1);
  lhs[11] = -rhs[33] * (1) - rhs[34] * (-1) - rhs[35] * (-1);
  lhs[12] = -rhs[36] * (1) - rhs[37] * (-1) - rhs[38] * (-1);
  lhs[13] = -rhs[39] * (1) - rhs[40] * (-1) - rhs[41] * (-1);
  lhs[14] = -rhs[42] * (1) - rhs[43] * (-1) - rhs[44] * (-1);
  lhs[15] = -rhs[45] * (1) - rhs[46] * (-1) - rhs[47] * (-1);
  lhs[16] = -rhs[48] * (1) - rhs[49] * (-1) - rhs[50] * (-1);
  lhs[17] = -rhs[51] * (1) - rhs[52] * (-1) - rhs[53] * (-1);
  lhs[18] = -rhs[54] * (1) - rhs[55] * (-1) - rhs[56] * (-1);
  lhs[19] = -rhs[57] * (1) - rhs[58] * (-1) - rhs[59] * (-1);
  lhs[20] = -rhs[60] * (1) - rhs[61] * (-1) - rhs[62] * (-1);
  lhs[21] = -rhs[63] * (1) - rhs[64] * (-1) - rhs[65] * (-1);
  lhs[22] = -rhs[66] * (1) - rhs[67] * (-1) - rhs[68] * (-1);
  lhs[23] = -rhs[69] * (1) - rhs[70] * (-1) - rhs[71] * (-1);
  lhs[24] = -rhs[72] * (1) - rhs[73] * (-1) - rhs[74] * (-1);
  lhs[25] = -rhs[75] * (1) - rhs[76] * (-1) - rhs[77] * (-1);
  lhs[26] = -rhs[78] * (1) - rhs[79] * (-1) - rhs[80] * (-1);
  lhs[27] = -rhs[81] * (1) - rhs[82] * (-1) - rhs[83] * (-1);
  lhs[28] = -rhs[84] * (1) - rhs[85] * (-1) - rhs[86] * (-1);
  lhs[29] = -rhs[87] * (1) - rhs[88] * (-1) - rhs[89] * (-1);
  lhs[30] = -rhs[90] * (1) - rhs[91] * (-1) - rhs[92] * (-1);
  lhs[31] = -rhs[93] * (1) - rhs[94] * (-1) - rhs[95] * (-1);
  lhs[32] = -rhs[96] * (1) - rhs[97] * (-1) - rhs[98] * (-1);
  lhs[33] = -rhs[99] * (1) - rhs[100] * (-1) - rhs[101] * (-1);
  lhs[34] = -rhs[102] * (1) - rhs[103] * (-1) - rhs[104] * (-1);
  lhs[35] = -rhs[105] * (1) - rhs[106] * (-1) - rhs[107] * (-1);
  lhs[36] = -rhs[108] * (1) - rhs[109] * (-1) - rhs[110] * (-1);
  lhs[37] = -rhs[111] * (1) - rhs[112] * (-1) - rhs[113] * (-1);
  lhs[38] = -rhs[114] * (1) - rhs[115] * (-1) - rhs[116] * (-1);
  lhs[39] = -rhs[117] * (1) - rhs[118] * (-1) - rhs[119] * (-1);
  lhs[40] = -rhs[120] * (1) - rhs[121] * (-1) - rhs[122] * (-1);
  lhs[41] = -rhs[123] * (1) - rhs[124] * (-1) - rhs[125] * (-1);
  lhs[42] = -rhs[126] * (1) - rhs[127] * (-1) - rhs[128] * (-1);
  lhs[43] = -rhs[129] * (1) - rhs[130] * (-1) - rhs[131] * (-1);
  lhs[44] = -rhs[132] * (1) - rhs[133] * (-1) - rhs[134] * (-1);
  lhs[45] = -rhs[135] * (1) - rhs[136] * (-1) - rhs[137] * (-1);
  lhs[46] = -rhs[138] * (1) - rhs[139] * (-1) - rhs[140] * (-1);
  lhs[47] = -rhs[141] * (1) - rhs[142] * (-1) - rhs[143] * (-1);
  lhs[48] = -rhs[144] * (1) - rhs[145] * (-1) - rhs[146] * (-1);
  lhs[49] = -rhs[147] * (1) - rhs[148] * (-1) - rhs[149] * (-1);
  lhs[50] = -rhs[150] * (1) - rhs[151] * (-1) - rhs[152] * (-1);
  lhs[51] = -rhs[153] * (1) - rhs[154] * (-1) - rhs[155] * (-1);
  lhs[52] = -rhs[156] * (1) - rhs[157] * (-1) - rhs[158] * (-1);
  lhs[53] = -rhs[159] * (1) - rhs[160] * (-1) - rhs[161] * (-1);
  lhs[54] = -rhs[162] * (1) - rhs[165] * (-1) - rhs[168] * (-1);
  lhs[55] = -rhs[163] * (1) - rhs[166] * (-1) - rhs[169] * (-1);
  lhs[56] = -rhs[164] * (1) - rhs[167] * (-1) - rhs[170] * (-1);
  lhs[57] = -rhs[171] * (1) - rhs[174] * (-1) - rhs[177] * (-1);
  lhs[58] = -rhs[172] * (1) - rhs[175] * (-1) - rhs[178] * (-1);
  lhs[59] = -rhs[173] * (1) - rhs[176] * (-1) - rhs[179] * (-1);
  lhs[60] = -rhs[180] * (1) - rhs[183] * (-1) - rhs[186] * (-1);
  lhs[61] = -rhs[181] * (1) - rhs[184] * (-1) - rhs[187] * (-1);
  lhs[62] = -rhs[182] * (1) - rhs[185] * (-1) - rhs[188] * (-1);
  lhs[63] = -rhs[189] * (1) - rhs[192] * (-1) - rhs[195] * (-1);
  lhs[64] = -rhs[190] * (1) - rhs[193] * (-1) - rhs[196] * (-1);
  lhs[65] = -rhs[191] * (1) - rhs[194] * (-1) - rhs[197] * (-1);
  lhs[66] = -rhs[198] * (1) - rhs[201] * (-1) - rhs[204] * (-1);
  lhs[67] = -rhs[199] * (1) - rhs[202] * (-1) - rhs[205] * (-1);
  lhs[68] = -rhs[200] * (1) - rhs[203] * (-1) - rhs[206] * (-1);
  lhs[69] = -rhs[207] * (1) - rhs[210] * (-1) - rhs[213] * (-1);
  lhs[70] = -rhs[208] * (1) - rhs[211] * (-1) - rhs[214] * (-1);
  lhs[71] = -rhs[209] * (1) - rhs[212] * (-1) - rhs[215] * (-1);
  lhs[72] = -rhs[216] * (1) - rhs[219] * (-1) - rhs[222] * (-1);
  lhs[73] = -rhs[217] * (1) - rhs[220] * (-1) - rhs[223] * (-1);
  lhs[74] = -rhs[218] * (1) - rhs[221] * (-1) - rhs[224] * (-1);
  lhs[75] = -rhs[225] * (1) - rhs[228] * (-1) - rhs[231] * (-1);
  lhs[76] = -rhs[226] * (1) - rhs[229] * (-1) - rhs[232] * (-1);
  lhs[77] = -rhs[227] * (1) - rhs[230] * (-1) - rhs[233] * (-1);
  lhs[78] = -rhs[234] * (1) - rhs[237] * (-1) - rhs[240] * (-1);
  lhs[79] = -rhs[235] * (1) - rhs[238] * (-1) - rhs[241] * (-1);
  lhs[80] = -rhs[236] * (1) - rhs[239] * (-1) - rhs[242] * (-1);
  lhs[81] = -rhs[243] * (1) - rhs[246] * (-1) - rhs[249] * (-1);
  lhs[82] = -rhs[244] * (1) - rhs[247] * (-1) - rhs[250] * (-1);
  lhs[83] = -rhs[245] * (1) - rhs[248] * (-1) - rhs[251] * (-1);
  lhs[84] = -rhs[252] * (1) - rhs[255] * (-1) - rhs[258] * (-1);
  lhs[85] = -rhs[253] * (1) - rhs[256] * (-1) - rhs[259] * (-1);
  lhs[86] = -rhs[254] * (1) - rhs[257] * (-1) - rhs[260] * (-1);
  lhs[87] = -rhs[261] * (1) - rhs[264] * (-1) - rhs[267] * (-1);
  lhs[88] = -rhs[262] * (1) - rhs[265] * (-1) - rhs[268] * (-1);
  lhs[89] = -rhs[263] * (1) - rhs[266] * (-1) - rhs[269] * (-1);
  lhs[90] = -rhs[270] * (1) - rhs[273] * (-1) - rhs[276] * (-1);
  lhs[91] = -rhs[271] * (1) - rhs[274] * (-1) - rhs[277] * (-1);
  lhs[92] = -rhs[272] * (1) - rhs[275] * (-1) - rhs[278] * (-1);
  lhs[93] = -rhs[279] * (1) - rhs[282] * (-1) - rhs[285] * (-1);
  lhs[94] = -rhs[280] * (1) - rhs[283] * (-1) - rhs[286] * (-1);
  lhs[95] = -rhs[281] * (1) - rhs[284] * (-1) - rhs[287] * (-1);
  lhs[96] = -rhs[288] * (1) - rhs[291] * (-1) - rhs[294] * (-1);
  lhs[97] = -rhs[289] * (1) - rhs[292] * (-1) - rhs[295] * (-1);
  lhs[98] = -rhs[290] * (1) - rhs[293] * (-1) - rhs[296] * (-1);
  lhs[99] = -rhs[297] * (1) - rhs[300] * (-1) - rhs[303] * (-1);
  lhs[100] = -rhs[298] * (1) - rhs[301] * (-1) - rhs[304] * (-1);
  lhs[101] = -rhs[299] * (1) - rhs[302] * (-1) - rhs[305] * (-1);
  lhs[102] = -rhs[306] * (1) - rhs[309] * (-1) - rhs[312] * (-1);
  lhs[103] = -rhs[307] * (1) - rhs[310] * (-1) - rhs[313] * (-1);
  lhs[104] = -rhs[308] * (1) - rhs[311] * (-1) - rhs[314] * (-1);
  lhs[105] = -rhs[315] * (1) - rhs[318] * (-1) - rhs[321] * (-1);
  lhs[106] = -rhs[316] * (1) - rhs[319] * (-1) - rhs[322] * (-1);
  lhs[107] = -rhs[317] * (1) - rhs[320] * (-1) - rhs[323] * (-1);
  lhs[108] = -rhs[165] * (1) - rhs[168] * (-1);
  lhs[109] = -rhs[166] * (1) - rhs[169] * (-1);
  lhs[110] = -rhs[167] * (1) - rhs[170] * (-1);
  lhs[111] = -rhs[174] * (1) - rhs[177] * (-1);
  lhs[112] = -rhs[175] * (1) - rhs[178] * (-1);
  lhs[113] = -rhs[176] * (1) - rhs[179] * (-1);
  lhs[114] = -rhs[183] * (1) - rhs[186] * (-1);
  lhs[115] = -rhs[184] * (1) - rhs[187] * (-1);
  lhs[116] = -rhs[185] * (1) - rhs[188] * (-1);
  lhs[117] = -rhs[192] * (1) - rhs[195] * (-1);
  lhs[118] = -rhs[193] * (1) - rhs[196] * (-1);
  lhs[119] = -rhs[194] * (1) - rhs[197] * (-1);
  lhs[120] = -rhs[201] * (1) - rhs[204] * (-1);
  lhs[121] = -rhs[202] * (1) - rhs[205] * (-1);
  lhs[122] = -rhs[203] * (1) - rhs[206] * (-1);
  lhs[123] = -rhs[210] * (1) - rhs[213] * (-1);
  lhs[124] = -rhs[211] * (1) - rhs[214] * (-1);
  lhs[125] = -rhs[212] * (1) - rhs[215] * (-1);
  lhs[126] = -rhs[219] * (1) - rhs[222] * (-1);
  lhs[127] = -rhs[220] * (1) - rhs[223] * (-1);
  lhs[128] = -rhs[221] * (1) - rhs[224] * (-1);
  lhs[129] = -rhs[228] * (1) - rhs[231] * (-1);
  lhs[130] = -rhs[229] * (1) - rhs[232] * (-1);
  lhs[131] = -rhs[230] * (1) - rhs[233] * (-1);
  lhs[132] = -rhs[237] * (1) - rhs[240] * (-1);
  lhs[133] = -rhs[238] * (1) - rhs[241] * (-1);
  lhs[134] = -rhs[239] * (1) - rhs[242] * (-1);
  lhs[135] = -rhs[246] * (1) - rhs[249] * (-1);
  lhs[136] = -rhs[247] * (1) - rhs[250] * (-1);
  lhs[137] = -rhs[248] * (1) - rhs[251] * (-1);
  lhs[138] = -rhs[255] * (1) - rhs[258] * (-1);
  lhs[139] = -rhs[256] * (1) - rhs[259] * (-1);
  lhs[140] = -rhs[257] * (1) - rhs[260] * (-1);
  lhs[141] = -rhs[264] * (1) - rhs[267] * (-1);
  lhs[142] = -rhs[265] * (1) - rhs[268] * (-1);
  lhs[143] = -rhs[266] * (1) - rhs[269] * (-1);
  lhs[144] = -rhs[273] * (1) - rhs[276] * (-1);
  lhs[145] = -rhs[274] * (1) - rhs[277] * (-1);
  lhs[146] = -rhs[275] * (1) - rhs[278] * (-1);
  lhs[147] = -rhs[282] * (1) - rhs[285] * (-1);
  lhs[148] = -rhs[283] * (1) - rhs[286] * (-1);
  lhs[149] = -rhs[284] * (1) - rhs[287] * (-1);
  lhs[150] = -rhs[291] * (1) - rhs[294] * (-1);
  lhs[151] = -rhs[292] * (1) - rhs[295] * (-1);
  lhs[152] = -rhs[293] * (1) - rhs[296] * (-1);
  lhs[153] = -rhs[300] * (1) - rhs[303] * (-1);
  lhs[154] = -rhs[301] * (1) - rhs[304] * (-1);
  lhs[155] = -rhs[302] * (1) - rhs[305] * (-1);
  lhs[156] = -rhs[309] * (1) - rhs[312] * (-1);
  lhs[157] = -rhs[310] * (1) - rhs[313] * (-1);
  lhs[158] = -rhs[311] * (1) - rhs[314] * (-1);
  lhs[159] = -rhs[318] * (1) - rhs[321] * (-1);
  lhs[160] = -rhs[319] * (1) - rhs[322] * (-1);
  lhs[161] = -rhs[320] * (1) - rhs[323] * (-1);
  lhs[162] = 0;
  lhs[163] = 0;
  lhs[164] = -rhs[1] * (1) - rhs[2] * (-1);
  lhs[165] = -rhs[55] * (1) - rhs[56] * (-1);
  lhs[166] = -rhs[109] * (1) - rhs[110] * (-1);
  lhs[167] = 0;
  lhs[168] = 0;
  lhs[169] = 0;
  lhs[170] = -rhs[4] * (1) - rhs[5] * (-1);
  lhs[171] = -rhs[58] * (1) - rhs[59] * (-1);
  lhs[172] = -rhs[112] * (1) - rhs[113] * (-1);
  lhs[173] = 0;
  lhs[174] = 0;
  lhs[175] = 0;
  lhs[176] = -rhs[7] * (1) - rhs[8] * (-1);
  lhs[177] = -rhs[61] * (1) - rhs[62] * (-1);
  lhs[178] = -rhs[115] * (1) - rhs[116] * (-1);
  lhs[179] = 0;
  lhs[180] = 0;
  lhs[181] = 0;
  lhs[182] = -rhs[10] * (1) - rhs[11] * (-1);
  lhs[183] = -rhs[64] * (1) - rhs[65] * (-1);
  lhs[184] = -rhs[118] * (1) - rhs[119] * (-1);
  lhs[185] = 0;
  lhs[186] = 0;
  lhs[187] = 0;
  lhs[188] = -rhs[13] * (1) - rhs[14] * (-1);
  lhs[189] = -rhs[67] * (1) - rhs[68] * (-1);
  lhs[190] = -rhs[121] * (1) - rhs[122] * (-1);
  lhs[191] = 0;
  lhs[192] = 0;
  lhs[193] = 0;
  lhs[194] = -rhs[16] * (1) - rhs[17] * (-1);
  lhs[195] = -rhs[70] * (1) - rhs[71] * (-1);
  lhs[196] = -rhs[124] * (1) - rhs[125] * (-1);
  lhs[197] = 0;
  lhs[198] = 0;
  lhs[199] = 0;
  lhs[200] = -rhs[19] * (1) - rhs[20] * (-1);
  lhs[201] = -rhs[73] * (1) - rhs[74] * (-1);
  lhs[202] = -rhs[127] * (1) - rhs[128] * (-1);
  lhs[203] = 0;
  lhs[204] = 0;
  lhs[205] = 0;
  lhs[206] = -rhs[22] * (1) - rhs[23] * (-1);
  lhs[207] = -rhs[76] * (1) - rhs[77] * (-1);
  lhs[208] = -rhs[130] * (1) - rhs[131] * (-1);
  lhs[209] = 0;
  lhs[210] = 0;
  lhs[211] = 0;
  lhs[212] = -rhs[25] * (1) - rhs[26] * (-1);
  lhs[213] = -rhs[79] * (1) - rhs[80] * (-1);
  lhs[214] = -rhs[133] * (1) - rhs[134] * (-1);
  lhs[215] = 0;
  lhs[216] = 0;
  lhs[217] = 0;
  lhs[218] = -rhs[28] * (1) - rhs[29] * (-1);
  lhs[219] = -rhs[82] * (1) - rhs[83] * (-1);
  lhs[220] = -rhs[136] * (1) - rhs[137] * (-1);
  lhs[221] = 0;
  lhs[222] = 0;
  lhs[223] = 0;
  lhs[224] = -rhs[31] * (1) - rhs[32] * (-1);
  lhs[225] = -rhs[85] * (1) - rhs[86] * (-1);
  lhs[226] = -rhs[139] * (1) - rhs[140] * (-1);
  lhs[227] = 0;
  lhs[228] = 0;
  lhs[229] = 0;
  lhs[230] = -rhs[34] * (1) - rhs[35] * (-1);
  lhs[231] = -rhs[88] * (1) - rhs[89] * (-1);
  lhs[232] = -rhs[142] * (1) - rhs[143] * (-1);
  lhs[233] = 0;
  lhs[234] = 0;
  lhs[235] = 0;
  lhs[236] = -rhs[37] * (1) - rhs[38] * (-1);
  lhs[237] = -rhs[91] * (1) - rhs[92] * (-1);
  lhs[238] = -rhs[145] * (1) - rhs[146] * (-1);
  lhs[239] = 0;
  lhs[240] = 0;
  lhs[241] = 0;
  lhs[242] = -rhs[40] * (1) - rhs[41] * (-1);
  lhs[243] = -rhs[94] * (1) - rhs[95] * (-1);
  lhs[244] = -rhs[148] * (1) - rhs[149] * (-1);
  lhs[245] = 0;
  lhs[246] = 0;
  lhs[247] = 0;
  lhs[248] = -rhs[43] * (1) - rhs[44] * (-1);
  lhs[249] = -rhs[97] * (1) - rhs[98] * (-1);
  lhs[250] = -rhs[151] * (1) - rhs[152] * (-1);
  lhs[251] = 0;
  lhs[252] = 0;
  lhs[253] = 0;
  lhs[254] = -rhs[46] * (1) - rhs[47] * (-1);
  lhs[255] = -rhs[100] * (1) - rhs[101] * (-1);
  lhs[256] = -rhs[154] * (1) - rhs[155] * (-1);
  lhs[257] = 0;
  lhs[258] = 0;
  lhs[259] = 0;
  lhs[260] = -rhs[49] * (1) - rhs[50] * (-1);
  lhs[261] = -rhs[103] * (1) - rhs[104] * (-1);
  lhs[262] = -rhs[157] * (1) - rhs[158] * (-1);
  lhs[263] = 0;
  lhs[264] = 0;
  lhs[265] = 0;
  lhs[266] = -rhs[52] * (1) - rhs[53] * (-1);
  lhs[267] = -rhs[106] * (1) - rhs[107] * (-1);
  lhs[268] = -rhs[160] * (1) - rhs[161] * (-1);
  lhs[269] = 0;
}
void multbyP(double* lhs, double* rhs)
{
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = 0;
  lhs[33] = 0;
  lhs[34] = 0;
  lhs[35] = 0;
  lhs[36] = 0;
  lhs[37] = 0;
  lhs[38] = 0;
  lhs[39] = 0;
  lhs[40] = 0;
  lhs[41] = 0;
  lhs[42] = 0;
  lhs[43] = 0;
  lhs[44] = 0;
  lhs[45] = 0;
  lhs[46] = 0;
  lhs[47] = 0;
  lhs[48] = 0;
  lhs[49] = 0;
  lhs[50] = 0;
  lhs[51] = 0;
  lhs[52] = 0;
  lhs[53] = 0;
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = 0;
  lhs[92] = 0;
  lhs[93] = 0;
  lhs[94] = 0;
  lhs[95] = 0;
  lhs[96] = 0;
  lhs[97] = 0;
  lhs[98] = 0;
  lhs[99] = 0;
  lhs[100] = 0;
  lhs[101] = 0;
  lhs[102] = 0;
  lhs[103] = 0;
  lhs[104] = 0;
  lhs[105] = 0;
  lhs[106] = 0;
  lhs[107] = 0;
  lhs[108] = 0;
  lhs[109] = 0;
  lhs[110] = 0;
  lhs[111] = 0;
  lhs[112] = 0;
  lhs[113] = 0;
  lhs[114] = 0;
  lhs[115] = 0;
  lhs[116] = 0;
  lhs[117] = 0;
  lhs[118] = 0;
  lhs[119] = 0;
  lhs[120] = 0;
  lhs[121] = 0;
  lhs[122] = 0;
  lhs[123] = 0;
  lhs[124] = 0;
  lhs[125] = 0;
  lhs[126] = 0;
  lhs[127] = 0;
  lhs[128] = 0;
  lhs[129] = 0;
  lhs[130] = 0;
  lhs[131] = 0;
  lhs[132] = 0;
  lhs[133] = 0;
  lhs[134] = 0;
  lhs[135] = 0;
  lhs[136] = 0;
  lhs[137] = 0;
  lhs[138] = 0;
  lhs[139] = 0;
  lhs[140] = 0;
  lhs[141] = 0;
  lhs[142] = 0;
  lhs[143] = 0;
  lhs[144] = 0;
  lhs[145] = 0;
  lhs[146] = 0;
  lhs[147] = 0;
  lhs[148] = 0;
  lhs[149] = 0;
  lhs[150] = 0;
  lhs[151] = 0;
  lhs[152] = 0;
  lhs[153] = 0;
  lhs[154] = 0;
  lhs[155] = 0;
  lhs[156] = 0;
  lhs[157] = 0;
  lhs[158] = 0;
  lhs[159] = 0;
  lhs[160] = 0;
  lhs[161] = 0;
  lhs[162] = 0;
  lhs[163] = 0;
  lhs[164] = 0;
  lhs[165] = 0;
  lhs[166] = 0;
  lhs[167] = 0;
  lhs[168] = 0;
  lhs[169] = 0;
  lhs[170] = 0;
  lhs[171] = 0;
  lhs[172] = 0;
  lhs[173] = 0;
  lhs[174] = 0;
  lhs[175] = 0;
  lhs[176] = 0;
  lhs[177] = 0;
  lhs[178] = 0;
  lhs[179] = 0;
  lhs[180] = 0;
  lhs[181] = 0;
  lhs[182] = 0;
  lhs[183] = 0;
  lhs[184] = 0;
  lhs[185] = 0;
  lhs[186] = 0;
  lhs[187] = 0;
  lhs[188] = 0;
  lhs[189] = 0;
  lhs[190] = 0;
  lhs[191] = 0;
  lhs[192] = 0;
  lhs[193] = 0;
  lhs[194] = 0;
  lhs[195] = 0;
  lhs[196] = 0;
  lhs[197] = 0;
  lhs[198] = 0;
  lhs[199] = 0;
  lhs[200] = 0;
  lhs[201] = 0;
  lhs[202] = 0;
  lhs[203] = 0;
  lhs[204] = 0;
  lhs[205] = 0;
  lhs[206] = 0;
  lhs[207] = 0;
  lhs[208] = 0;
  lhs[209] = 0;
  lhs[210] = 0;
  lhs[211] = 0;
  lhs[212] = 0;
  lhs[213] = 0;
  lhs[214] = 0;
  lhs[215] = 0;
  lhs[216] = 0;
  lhs[217] = 0;
  lhs[218] = 0;
  lhs[219] = 0;
  lhs[220] = 0;
  lhs[221] = 0;
  lhs[222] = 0;
  lhs[223] = 0;
  lhs[224] = 0;
  lhs[225] = 0;
  lhs[226] = 0;
  lhs[227] = 0;
  lhs[228] = 0;
  lhs[229] = 0;
  lhs[230] = 0;
  lhs[231] = 0;
  lhs[232] = 0;
  lhs[233] = 0;
  lhs[234] = 0;
  lhs[235] = 0;
  lhs[236] = 0;
  lhs[237] = 0;
  lhs[238] = 0;
  lhs[239] = 0;
  lhs[240] = 0;
  lhs[241] = 0;
  lhs[242] = 0;
  lhs[243] = 0;
  lhs[244] = 0;
  lhs[245] = 0;
  lhs[246] = 0;
  lhs[247] = 0;
  lhs[248] = 0;
  lhs[249] = 0;
  lhs[250] = 0;
  lhs[251] = 0;
  lhs[252] = 0;
  lhs[253] = 0;
  lhs[254] = 0;
  lhs[255] = 0;
  lhs[256] = 0;
  lhs[257] = 0;
  lhs[258] = 0;
  lhs[259] = 0;
  lhs[260] = 0;
  lhs[261] = 0;
  lhs[262] = 0;
  lhs[263] = 0;
  lhs[264] = rhs[264] *
             (2 * (params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] +
                   params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] +
                   params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0] +
                   params.Q_final[0] + params.Q_final[0] + params.Q_final[0] + params.Q_final[0]));
  lhs[265] = rhs[265] *
             (2 * (params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] +
                   params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] +
                   params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1] +
                   params.Q_final[1] + params.Q_final[1] + params.Q_final[1] + params.Q_final[1]));
  lhs[266] = rhs[266] *
             (2 * (params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] +
                   params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] +
                   params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2] +
                   params.Q_final[2] + params.Q_final[2] + params.Q_final[2] + params.Q_final[2]));
  lhs[267] = rhs[267] *
             (2 * (params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] +
                   params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] +
                   params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3] +
                   params.Q_final[3] + params.Q_final[3] + params.Q_final[3] + params.Q_final[3]));
  lhs[268] = rhs[268] *
             (2 * (params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] +
                   params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] +
                   params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4] +
                   params.Q_final[4] + params.Q_final[4] + params.Q_final[4] + params.Q_final[4]));
  lhs[269] = rhs[269] *
             (2 * (params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] +
                   params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] +
                   params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5] +
                   params.Q_final[5] + params.Q_final[5] + params.Q_final[5] + params.Q_final[5]));
}
void fillq(void)
{
  work.q[0] = 0;
  work.q[1] = 0;
  work.q[2] = 0;
  work.q[3] = 0;
  work.q[4] = 0;
  work.q[5] = 0;
  work.q[6] = 0;
  work.q[7] = 0;
  work.q[8] = 0;
  work.q[9] = 0;
  work.q[10] = 0;
  work.q[11] = 0;
  work.q[12] = 0;
  work.q[13] = 0;
  work.q[14] = 0;
  work.q[15] = 0;
  work.q[16] = 0;
  work.q[17] = 0;
  work.q[18] = 0;
  work.q[19] = 0;
  work.q[20] = 0;
  work.q[21] = 0;
  work.q[22] = 0;
  work.q[23] = 0;
  work.q[24] = 0;
  work.q[25] = 0;
  work.q[26] = 0;
  work.q[27] = 0;
  work.q[28] = 0;
  work.q[29] = 0;
  work.q[30] = 0;
  work.q[31] = 0;
  work.q[32] = 0;
  work.q[33] = 0;
  work.q[34] = 0;
  work.q[35] = 0;
  work.q[36] = 0;
  work.q[37] = 0;
  work.q[38] = 0;
  work.q[39] = 0;
  work.q[40] = 0;
  work.q[41] = 0;
  work.q[42] = 0;
  work.q[43] = 0;
  work.q[44] = 0;
  work.q[45] = 0;
  work.q[46] = 0;
  work.q[47] = 0;
  work.q[48] = 0;
  work.q[49] = 0;
  work.q[50] = 0;
  work.q[51] = 0;
  work.q[52] = 0;
  work.q[53] = 0;
  work.q[54] = 0;
  work.q[55] = 0;
  work.q[56] = 0;
  work.q[57] = 0;
  work.q[58] = 0;
  work.q[59] = 0;
  work.q[60] = 0;
  work.q[61] = 0;
  work.q[62] = 0;
  work.q[63] = 0;
  work.q[64] = 0;
  work.q[65] = 0;
  work.q[66] = 0;
  work.q[67] = 0;
  work.q[68] = 0;
  work.q[69] = 0;
  work.q[70] = 0;
  work.q[71] = 0;
  work.q[72] = 0;
  work.q[73] = 0;
  work.q[74] = 0;
  work.q[75] = 0;
  work.q[76] = 0;
  work.q[77] = 0;
  work.q[78] = 0;
  work.q[79] = 0;
  work.q[80] = 0;
  work.q[81] = 0;
  work.q[82] = 0;
  work.q[83] = 0;
  work.q[84] = 0;
  work.q[85] = 0;
  work.q[86] = 0;
  work.q[87] = 0;
  work.q[88] = 0;
  work.q[89] = 0;
  work.q[90] = 0;
  work.q[91] = 0;
  work.q[92] = 0;
  work.q[93] = 0;
  work.q[94] = 0;
  work.q[95] = 0;
  work.q[96] = 0;
  work.q[97] = 0;
  work.q[98] = 0;
  work.q[99] = 0;
  work.q[100] = 0;
  work.q[101] = 0;
  work.q[102] = 0;
  work.q[103] = 0;
  work.q[104] = 0;
  work.q[105] = 0;
  work.q[106] = 0;
  work.q[107] = 0;
  work.q[108] = 0;
  work.q[109] = 0;
  work.q[110] = 0;
  work.q[111] = 0;
  work.q[112] = 0;
  work.q[113] = 0;
  work.q[114] = 0;
  work.q[115] = 0;
  work.q[116] = 0;
  work.q[117] = 0;
  work.q[118] = 0;
  work.q[119] = 0;
  work.q[120] = 0;
  work.q[121] = 0;
  work.q[122] = 0;
  work.q[123] = 0;
  work.q[124] = 0;
  work.q[125] = 0;
  work.q[126] = 0;
  work.q[127] = 0;
  work.q[128] = 0;
  work.q[129] = 0;
  work.q[130] = 0;
  work.q[131] = 0;
  work.q[132] = 0;
  work.q[133] = 0;
  work.q[134] = 0;
  work.q[135] = 0;
  work.q[136] = 0;
  work.q[137] = 0;
  work.q[138] = 0;
  work.q[139] = 0;
  work.q[140] = 0;
  work.q[141] = 0;
  work.q[142] = 0;
  work.q[143] = 0;
  work.q[144] = 0;
  work.q[145] = 0;
  work.q[146] = 0;
  work.q[147] = 0;
  work.q[148] = 0;
  work.q[149] = 0;
  work.q[150] = 0;
  work.q[151] = 0;
  work.q[152] = 0;
  work.q[153] = 0;
  work.q[154] = 0;
  work.q[155] = 0;
  work.q[156] = 0;
  work.q[157] = 0;
  work.q[158] = 0;
  work.q[159] = 0;
  work.q[160] = 0;
  work.q[161] = 0;
  work.q[162] = 0;
  work.q[163] = 0;
  work.q[164] = 0;
  work.q[165] = 0;
  work.q[166] = 0;
  work.q[167] = 0;
  work.q[168] = 0;
  work.q[169] = 0;
  work.q[170] = 0;
  work.q[171] = 0;
  work.q[172] = 0;
  work.q[173] = 0;
  work.q[174] = 0;
  work.q[175] = 0;
  work.q[176] = 0;
  work.q[177] = 0;
  work.q[178] = 0;
  work.q[179] = 0;
  work.q[180] = 0;
  work.q[181] = 0;
  work.q[182] = 0;
  work.q[183] = 0;
  work.q[184] = 0;
  work.q[185] = 0;
  work.q[186] = 0;
  work.q[187] = 0;
  work.q[188] = 0;
  work.q[189] = 0;
  work.q[190] = 0;
  work.q[191] = 0;
  work.q[192] = 0;
  work.q[193] = 0;
  work.q[194] = 0;
  work.q[195] = 0;
  work.q[196] = 0;
  work.q[197] = 0;
  work.q[198] = 0;
  work.q[199] = 0;
  work.q[200] = 0;
  work.q[201] = 0;
  work.q[202] = 0;
  work.q[203] = 0;
  work.q[204] = 0;
  work.q[205] = 0;
  work.q[206] = 0;
  work.q[207] = 0;
  work.q[208] = 0;
  work.q[209] = 0;
  work.q[210] = 0;
  work.q[211] = 0;
  work.q[212] = 0;
  work.q[213] = 0;
  work.q[214] = 0;
  work.q[215] = 0;
  work.q[216] = 0;
  work.q[217] = 0;
  work.q[218] = 0;
  work.q[219] = 0;
  work.q[220] = 0;
  work.q[221] = 0;
  work.q[222] = 0;
  work.q[223] = 0;
  work.q[224] = 0;
  work.q[225] = 0;
  work.q[226] = 0;
  work.q[227] = 0;
  work.q[228] = 0;
  work.q[229] = 0;
  work.q[230] = 0;
  work.q[231] = 0;
  work.q[232] = 0;
  work.q[233] = 0;
  work.q[234] = 0;
  work.q[235] = 0;
  work.q[236] = 0;
  work.q[237] = 0;
  work.q[238] = 0;
  work.q[239] = 0;
  work.q[240] = 0;
  work.q[241] = 0;
  work.q[242] = 0;
  work.q[243] = 0;
  work.q[244] = 0;
  work.q[245] = 0;
  work.q[246] = 0;
  work.q[247] = 0;
  work.q[248] = 0;
  work.q[249] = 0;
  work.q[250] = 0;
  work.q[251] = 0;
  work.q[252] = 0;
  work.q[253] = 0;
  work.q[254] = 0;
  work.q[255] = 0;
  work.q[256] = 0;
  work.q[257] = 0;
  work.q[258] = 0;
  work.q[259] = 0;
  work.q[260] = 0;
  work.q[261] = 0;
  work.q[262] = 0;
  work.q[263] = 0;
  work.q[264] = 0;
  work.q[265] = 0;
  work.q[266] = 0;
  work.q[267] = 0;
  work.q[268] = 0;
  work.q[269] = 0;
}
void fillh(void)
{
  work.h[0] = params.xdot_max[0];
  work.h[1] = 0;
  work.h[2] = 0;
  work.h[3] = params.xdot_max[0];
  work.h[4] = 0;
  work.h[5] = 0;
  work.h[6] = params.xdot_max[0];
  work.h[7] = 0;
  work.h[8] = 0;
  work.h[9] = params.xdot_max[0];
  work.h[10] = 0;
  work.h[11] = 0;
  work.h[12] = params.xdot_max[0];
  work.h[13] = 0;
  work.h[14] = 0;
  work.h[15] = params.xdot_max[0];
  work.h[16] = 0;
  work.h[17] = 0;
  work.h[18] = params.xdot_max[0];
  work.h[19] = 0;
  work.h[20] = 0;
  work.h[21] = params.xdot_max[0];
  work.h[22] = 0;
  work.h[23] = 0;
  work.h[24] = params.xdot_max[0];
  work.h[25] = 0;
  work.h[26] = 0;
  work.h[27] = params.xdot_max[0];
  work.h[28] = 0;
  work.h[29] = 0;
  work.h[30] = params.xdot_max[0];
  work.h[31] = 0;
  work.h[32] = 0;
  work.h[33] = params.xdot_max[0];
  work.h[34] = 0;
  work.h[35] = 0;
  work.h[36] = params.xdot_max[0];
  work.h[37] = 0;
  work.h[38] = 0;
  work.h[39] = params.xdot_max[0];
  work.h[40] = 0;
  work.h[41] = 0;
  work.h[42] = params.xdot_max[0];
  work.h[43] = 0;
  work.h[44] = 0;
  work.h[45] = params.xdot_max[0];
  work.h[46] = 0;
  work.h[47] = 0;
  work.h[48] = params.xdot_max[0];
  work.h[49] = 0;
  work.h[50] = 0;
  work.h[51] = params.xdot_max[0];
  work.h[52] = 0;
  work.h[53] = 0;
  work.h[54] = params.xdot_max[0];
  work.h[55] = 0;
  work.h[56] = 0;
  work.h[57] = params.xdot_max[0];
  work.h[58] = 0;
  work.h[59] = 0;
  work.h[60] = params.xdot_max[0];
  work.h[61] = 0;
  work.h[62] = 0;
  work.h[63] = params.xdot_max[0];
  work.h[64] = 0;
  work.h[65] = 0;
  work.h[66] = params.xdot_max[0];
  work.h[67] = 0;
  work.h[68] = 0;
  work.h[69] = params.xdot_max[0];
  work.h[70] = 0;
  work.h[71] = 0;
  work.h[72] = params.xdot_max[0];
  work.h[73] = 0;
  work.h[74] = 0;
  work.h[75] = params.xdot_max[0];
  work.h[76] = 0;
  work.h[77] = 0;
  work.h[78] = params.xdot_max[0];
  work.h[79] = 0;
  work.h[80] = 0;
  work.h[81] = params.xdot_max[0];
  work.h[82] = 0;
  work.h[83] = 0;
  work.h[84] = params.xdot_max[0];
  work.h[85] = 0;
  work.h[86] = 0;
  work.h[87] = params.xdot_max[0];
  work.h[88] = 0;
  work.h[89] = 0;
  work.h[90] = params.xdot_max[0];
  work.h[91] = 0;
  work.h[92] = 0;
  work.h[93] = params.xdot_max[0];
  work.h[94] = 0;
  work.h[95] = 0;
  work.h[96] = params.xdot_max[0];
  work.h[97] = 0;
  work.h[98] = 0;
  work.h[99] = params.xdot_max[0];
  work.h[100] = 0;
  work.h[101] = 0;
  work.h[102] = params.xdot_max[0];
  work.h[103] = 0;
  work.h[104] = 0;
  work.h[105] = params.xdot_max[0];
  work.h[106] = 0;
  work.h[107] = 0;
  work.h[108] = params.xdot_max[0];
  work.h[109] = 0;
  work.h[110] = 0;
  work.h[111] = params.xdot_max[0];
  work.h[112] = 0;
  work.h[113] = 0;
  work.h[114] = params.xdot_max[0];
  work.h[115] = 0;
  work.h[116] = 0;
  work.h[117] = params.xdot_max[0];
  work.h[118] = 0;
  work.h[119] = 0;
  work.h[120] = params.xdot_max[0];
  work.h[121] = 0;
  work.h[122] = 0;
  work.h[123] = params.xdot_max[0];
  work.h[124] = 0;
  work.h[125] = 0;
  work.h[126] = params.xdot_max[0];
  work.h[127] = 0;
  work.h[128] = 0;
  work.h[129] = params.xdot_max[0];
  work.h[130] = 0;
  work.h[131] = 0;
  work.h[132] = params.xdot_max[0];
  work.h[133] = 0;
  work.h[134] = 0;
  work.h[135] = params.xdot_max[0];
  work.h[136] = 0;
  work.h[137] = 0;
  work.h[138] = params.xdot_max[0];
  work.h[139] = 0;
  work.h[140] = 0;
  work.h[141] = params.xdot_max[0];
  work.h[142] = 0;
  work.h[143] = 0;
  work.h[144] = params.xdot_max[0];
  work.h[145] = 0;
  work.h[146] = 0;
  work.h[147] = params.xdot_max[0];
  work.h[148] = 0;
  work.h[149] = 0;
  work.h[150] = params.xdot_max[0];
  work.h[151] = 0;
  work.h[152] = 0;
  work.h[153] = params.xdot_max[0];
  work.h[154] = 0;
  work.h[155] = 0;
  work.h[156] = params.xdot_max[0];
  work.h[157] = 0;
  work.h[158] = 0;
  work.h[159] = params.xdot_max[0];
  work.h[160] = 0;
  work.h[161] = 0;
  work.h[162] = params.u_max[0];
  work.h[163] = params.u_max[0];
  work.h[164] = params.u_max[0];
  work.h[165] = 0;
  work.h[166] = 0;
  work.h[167] = 0;
  work.h[168] = 0;
  work.h[169] = 0;
  work.h[170] = 0;
  work.h[171] = params.u_max[0];
  work.h[172] = params.u_max[0];
  work.h[173] = params.u_max[0];
  work.h[174] = 0;
  work.h[175] = 0;
  work.h[176] = 0;
  work.h[177] = 0;
  work.h[178] = 0;
  work.h[179] = 0;
  work.h[180] = params.u_max[0];
  work.h[181] = params.u_max[0];
  work.h[182] = params.u_max[0];
  work.h[183] = 0;
  work.h[184] = 0;
  work.h[185] = 0;
  work.h[186] = 0;
  work.h[187] = 0;
  work.h[188] = 0;
  work.h[189] = params.u_max[0];
  work.h[190] = params.u_max[0];
  work.h[191] = params.u_max[0];
  work.h[192] = 0;
  work.h[193] = 0;
  work.h[194] = 0;
  work.h[195] = 0;
  work.h[196] = 0;
  work.h[197] = 0;
  work.h[198] = params.u_max[0];
  work.h[199] = params.u_max[0];
  work.h[200] = params.u_max[0];
  work.h[201] = 0;
  work.h[202] = 0;
  work.h[203] = 0;
  work.h[204] = 0;
  work.h[205] = 0;
  work.h[206] = 0;
  work.h[207] = params.u_max[0];
  work.h[208] = params.u_max[0];
  work.h[209] = params.u_max[0];
  work.h[210] = 0;
  work.h[211] = 0;
  work.h[212] = 0;
  work.h[213] = 0;
  work.h[214] = 0;
  work.h[215] = 0;
  work.h[216] = params.u_max[0];
  work.h[217] = params.u_max[0];
  work.h[218] = params.u_max[0];
  work.h[219] = 0;
  work.h[220] = 0;
  work.h[221] = 0;
  work.h[222] = 0;
  work.h[223] = 0;
  work.h[224] = 0;
  work.h[225] = params.u_max[0];
  work.h[226] = params.u_max[0];
  work.h[227] = params.u_max[0];
  work.h[228] = 0;
  work.h[229] = 0;
  work.h[230] = 0;
  work.h[231] = 0;
  work.h[232] = 0;
  work.h[233] = 0;
  work.h[234] = params.u_max[0];
  work.h[235] = params.u_max[0];
  work.h[236] = params.u_max[0];
  work.h[237] = 0;
  work.h[238] = 0;
  work.h[239] = 0;
  work.h[240] = 0;
  work.h[241] = 0;
  work.h[242] = 0;
  work.h[243] = params.u_max[0];
  work.h[244] = params.u_max[0];
  work.h[245] = params.u_max[0];
  work.h[246] = 0;
  work.h[247] = 0;
  work.h[248] = 0;
  work.h[249] = 0;
  work.h[250] = 0;
  work.h[251] = 0;
  work.h[252] = params.u_max[0];
  work.h[253] = params.u_max[0];
  work.h[254] = params.u_max[0];
  work.h[255] = 0;
  work.h[256] = 0;
  work.h[257] = 0;
  work.h[258] = 0;
  work.h[259] = 0;
  work.h[260] = 0;
  work.h[261] = params.u_max[0];
  work.h[262] = params.u_max[0];
  work.h[263] = params.u_max[0];
  work.h[264] = 0;
  work.h[265] = 0;
  work.h[266] = 0;
  work.h[267] = 0;
  work.h[268] = 0;
  work.h[269] = 0;
  work.h[270] = params.u_max[0];
  work.h[271] = params.u_max[0];
  work.h[272] = params.u_max[0];
  work.h[273] = 0;
  work.h[274] = 0;
  work.h[275] = 0;
  work.h[276] = 0;
  work.h[277] = 0;
  work.h[278] = 0;
  work.h[279] = params.u_max[0];
  work.h[280] = params.u_max[0];
  work.h[281] = params.u_max[0];
  work.h[282] = 0;
  work.h[283] = 0;
  work.h[284] = 0;
  work.h[285] = 0;
  work.h[286] = 0;
  work.h[287] = 0;
  work.h[288] = params.u_max[0];
  work.h[289] = params.u_max[0];
  work.h[290] = params.u_max[0];
  work.h[291] = 0;
  work.h[292] = 0;
  work.h[293] = 0;
  work.h[294] = 0;
  work.h[295] = 0;
  work.h[296] = 0;
  work.h[297] = params.u_max[0];
  work.h[298] = params.u_max[0];
  work.h[299] = params.u_max[0];
  work.h[300] = 0;
  work.h[301] = 0;
  work.h[302] = 0;
  work.h[303] = 0;
  work.h[304] = 0;
  work.h[305] = 0;
  work.h[306] = params.u_max[0];
  work.h[307] = params.u_max[0];
  work.h[308] = params.u_max[0];
  work.h[309] = 0;
  work.h[310] = 0;
  work.h[311] = 0;
  work.h[312] = 0;
  work.h[313] = 0;
  work.h[314] = 0;
  work.h[315] = params.u_max[0];
  work.h[316] = params.u_max[0];
  work.h[317] = params.u_max[0];
  work.h[318] = 0;
  work.h[319] = 0;
  work.h[320] = 0;
  work.h[321] = 0;
  work.h[322] = 0;
  work.h[323] = 0;
}
void fillb(void)
{
  work.b[0] = params.A_0[0] * params.x_0[0] + params.A_0[6] * params.x_0[1] + params.A_0[12] * params.x_0[2] +
              params.A_0[18] * params.x_0[3] + params.A_0[24] * params.x_0[4] + params.A_0[30] * params.x_0[5];
  work.b[1] = params.A_0[1] * params.x_0[0] + params.A_0[7] * params.x_0[1] + params.A_0[13] * params.x_0[2] +
              params.A_0[19] * params.x_0[3] + params.A_0[25] * params.x_0[4] + params.A_0[31] * params.x_0[5];
  work.b[2] = params.A_0[2] * params.x_0[0] + params.A_0[8] * params.x_0[1] + params.A_0[14] * params.x_0[2] +
              params.A_0[20] * params.x_0[3] + params.A_0[26] * params.x_0[4] + params.A_0[32] * params.x_0[5];
  work.b[3] = params.A_0[3] * params.x_0[0] + params.A_0[9] * params.x_0[1] + params.A_0[15] * params.x_0[2] +
              params.A_0[21] * params.x_0[3] + params.A_0[27] * params.x_0[4] + params.A_0[33] * params.x_0[5];
  work.b[4] = params.A_0[4] * params.x_0[0] + params.A_0[10] * params.x_0[1] + params.A_0[16] * params.x_0[2] +
              params.A_0[22] * params.x_0[3] + params.A_0[28] * params.x_0[4] + params.A_0[34] * params.x_0[5];
  work.b[5] = params.A_0[5] * params.x_0[0] + params.A_0[11] * params.x_0[1] + params.A_0[17] * params.x_0[2] +
              params.A_0[23] * params.x_0[3] + params.A_0[29] * params.x_0[4] + params.A_0[35] * params.x_0[5];
  work.b[6] = 0;
  work.b[7] = 0;
  work.b[8] = 0;
  work.b[9] = 0;
  work.b[10] = 0;
  work.b[11] = 0;
  work.b[12] = 0;
  work.b[13] = 0;
  work.b[14] = 0;
  work.b[15] = 0;
  work.b[16] = 0;
  work.b[17] = 0;
  work.b[18] = 0;
  work.b[19] = 0;
  work.b[20] = 0;
  work.b[21] = 0;
  work.b[22] = 0;
  work.b[23] = 0;
  work.b[24] = 0;
  work.b[25] = 0;
  work.b[26] = 0;
  work.b[27] = 0;
  work.b[28] = 0;
  work.b[29] = 0;
  work.b[30] = 0;
  work.b[31] = 0;
  work.b[32] = 0;
  work.b[33] = 0;
  work.b[34] = 0;
  work.b[35] = 0;
  work.b[36] = 0;
  work.b[37] = 0;
  work.b[38] = 0;
  work.b[39] = 0;
  work.b[40] = 0;
  work.b[41] = 0;
  work.b[42] = 0;
  work.b[43] = 0;
  work.b[44] = 0;
  work.b[45] = 0;
  work.b[46] = 0;
  work.b[47] = 0;
  work.b[48] = 0;
  work.b[49] = 0;
  work.b[50] = 0;
  work.b[51] = 0;
  work.b[52] = 0;
  work.b[53] = 0;
  work.b[54] = 0;
  work.b[55] = 0;
  work.b[56] = 0;
  work.b[57] = 0;
  work.b[58] = 0;
  work.b[59] = 0;
  work.b[60] = 0;
  work.b[61] = 0;
  work.b[62] = 0;
  work.b[63] = 0;
  work.b[64] = 0;
  work.b[65] = 0;
  work.b[66] = 0;
  work.b[67] = 0;
  work.b[68] = 0;
  work.b[69] = 0;
  work.b[70] = 0;
  work.b[71] = 0;
  work.b[72] = 0;
  work.b[73] = 0;
  work.b[74] = 0;
  work.b[75] = 0;
  work.b[76] = 0;
  work.b[77] = 0;
  work.b[78] = 0;
  work.b[79] = 0;
  work.b[80] = 0;
  work.b[81] = 0;
  work.b[82] = 0;
  work.b[83] = 0;
  work.b[84] = 0;
  work.b[85] = 0;
  work.b[86] = 0;
  work.b[87] = 0;
  work.b[88] = 0;
  work.b[89] = 0;
  work.b[90] = 0;
  work.b[91] = 0;
  work.b[92] = 0;
  work.b[93] = 0;
  work.b[94] = 0;
  work.b[95] = 0;
  work.b[96] = 0;
  work.b[97] = 0;
  work.b[98] = 0;
  work.b[99] = 0;
  work.b[100] = 0;
  work.b[101] = 0;
  work.b[102] = 0;
  work.b[103] = 0;
  work.b[104] = 0;
  work.b[105] = 0;
  work.b[106] = 0;
  work.b[107] = 0;
}
void pre_ops(void)
{
}
