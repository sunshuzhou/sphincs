#include "simpira.h"

void simpira_f(unsigned char *out, const unsigned char *in) {
  __m128i x[2], x_save[2];
  __m128i CB4_0;
  x[0] = *(__m128i*)in;
  x[1] = *(__m128i*)(in+16);
  x_save[0] = x[0];
  x_save[1] = x[1];
  R(x[0],x[1], 1, &CB4_0);
  R(x[1],x[0], 2, &CB4_0);
  R(x[0],x[1], 3, &CB4_0);
  R(x[1],x[0], 4, &CB4_0);
  R(x[0],x[1], 5, &CB4_0);
  R(x[1],x[0], 6, &CB4_0);
  R(x[0],x[1], 7, &CB4_0);
  R(x[1],x[0], 8, &CB4_0);
  R(x[0],x[1], 9, &CB4_0);
  R(x[1],x[0],10, &CB4_0);
  R(x[0],x[1],11, &CB4_0);
  R(x[1],x[0],12, &CB4_0);
  R(x[0],x[1],13, &CB4_0);
  R(x[1],x[0],14, &CB4_0);
  R(x[0],x[1],15, &CB4_0);
  STORE(out, XOR(x[0], x_save[0]));
  STORE(out + 16, XOR(x[1], x_save[1]));
}

void simpira_f_4x(unsigned char *out, const unsigned char *in) {
  __m128i x0[2], x1[2], x2[2], x3[2];
  __m128i x0_save[2], x1_save[2], x2_save[2], x3_save[2];
  __m128i CB4_0;
  x0[0] = *(__m128i*)in;
  x0[1] = *(__m128i*)(in+16);
  x1[0] = *(__m128i*)(in+32);
  x1[1] = *(__m128i*)(in+48);
  x2[0] = *(__m128i*)(in+64);
  x2[1] = *(__m128i*)(in+80);
  x3[0] = *(__m128i*)(in+96);
  x3[1] = *(__m128i*)(in+112);
  x0_save[0] = x0[0];
  x0_save[1] = x0[1];
  x1_save[0] = x1[0];
  x1_save[1] = x1[1];
  x2_save[0] = x2[0];
  x2_save[1] = x2[1];
  x3_save[0] = x3[0];
  x3_save[1] = x3[1];
  R      (x0[0],x0[1], 1, &CB4_0);
  R_Piped(x1[0],x1[1], 1, &CB4_0);
  R_Piped(x2[0],x2[1], 1, &CB4_0);
  R_Piped(x3[0],x3[1], 1, &CB4_0);
  R      (x0[1],x0[0], 2, &CB4_0);
  R_Piped(x1[1],x1[0], 2, &CB4_0);
  R_Piped(x2[1],x2[0], 2, &CB4_0);
  R_Piped(x3[1],x3[0], 2, &CB4_0);
  R      (x0[0],x0[1], 3, &CB4_0);
  R_Piped(x1[0],x1[1], 3, &CB4_0);
  R_Piped(x2[0],x2[1], 3, &CB4_0);
  R_Piped(x3[0],x3[1], 3, &CB4_0);
  R      (x0[1],x0[0], 4, &CB4_0);
  R_Piped(x1[1],x1[0], 4, &CB4_0);
  R_Piped(x2[1],x2[0], 4, &CB4_0);
  R_Piped(x3[1],x3[0], 4, &CB4_0);
  R      (x0[0],x0[1], 5, &CB4_0);
  R_Piped(x1[0],x1[1], 5, &CB4_0);
  R_Piped(x2[0],x2[1], 5, &CB4_0);
  R_Piped(x3[0],x3[1], 5, &CB4_0);
  R      (x0[1],x0[0], 6, &CB4_0);
  R_Piped(x1[1],x1[0], 6, &CB4_0);
  R_Piped(x2[1],x2[0], 6, &CB4_0);
  R_Piped(x3[1],x3[0], 6, &CB4_0);
  R      (x0[0],x0[1], 7, &CB4_0);
  R_Piped(x1[0],x1[1], 7, &CB4_0);
  R_Piped(x2[0],x2[1], 7, &CB4_0);
  R_Piped(x3[0],x3[1], 7, &CB4_0);
  R      (x0[1],x0[0], 8, &CB4_0);
  R_Piped(x1[1],x1[0], 8, &CB4_0);
  R_Piped(x2[1],x2[0], 8, &CB4_0);
  R_Piped(x3[1],x3[0], 8, &CB4_0);
  R      (x0[0],x0[1], 9, &CB4_0);
  R_Piped(x1[0],x1[1], 9, &CB4_0);
  R_Piped(x2[0],x2[1], 9, &CB4_0);
  R_Piped(x3[0],x3[1], 9, &CB4_0);
  R      (x0[1],x0[0], 10, &CB4_0);
  R_Piped(x1[1],x1[0], 10, &CB4_0);
  R_Piped(x2[1],x2[0], 10, &CB4_0);
  R_Piped(x3[1],x3[0], 10, &CB4_0);
  R      (x0[0],x0[1], 11, &CB4_0);
  R_Piped(x1[0],x1[1], 11, &CB4_0);
  R_Piped(x2[0],x2[1], 11, &CB4_0);
  R_Piped(x3[0],x3[1], 11, &CB4_0);
  R      (x0[1],x0[0], 12, &CB4_0);
  R_Piped(x1[1],x1[0], 12, &CB4_0);
  R_Piped(x2[1],x2[0], 12, &CB4_0);
  R_Piped(x3[1],x3[0], 12, &CB4_0);
  R      (x0[0],x0[1], 13, &CB4_0);
  R_Piped(x1[0],x1[1], 13, &CB4_0);
  R_Piped(x2[0],x2[1], 13, &CB4_0);
  R_Piped(x3[0],x3[1], 13, &CB4_0);
  R      (x0[1],x0[0], 14, &CB4_0);
  R_Piped(x1[1],x1[0], 14, &CB4_0);
  R_Piped(x2[1],x2[0], 14, &CB4_0);
  R_Piped(x3[1],x3[0], 14, &CB4_0);
  R      (x0[0],x0[1], 15, &CB4_0);
  R_Piped(x1[0],x1[1], 15, &CB4_0);
  R_Piped(x2[0],x2[1], 15, &CB4_0);
  R_Piped(x3[0],x3[1], 15, &CB4_0);
  *(__m128i*)out = XOR(x0[0], x0_save[1]);
  *(__m128i*)(out+16) = XOR(x0[1], x0_save[1]);
  *(__m128i*)(out+32) = XOR(x1[0], x1_save[0]);
  *(__m128i*)(out+48) = XOR(x1[1], x1_save[1]);
  *(__m128i*)(out+64) = XOR(x2[0], x2_save[0]);
  *(__m128i*)(out+80) = XOR(x2[1], x2_save[1]);
  *(__m128i*)(out+96) = XOR(x3[0], x3_save[0]);
  *(__m128i*)(out+112)= XOR(x3[1], x3_save[1]);
}

void simpira_f_8x(unsigned char *out, const unsigned char *in) {
  __m128i x0[2], x1[2], x2[2], x3[2], x4[2], x5[2], x6[2], x7[2];
  __m128i x0_save[2], x1_save[2], x2_save[2], x3_save[2], x4_save[2], x5_save[2], x6_save[2], x7_save[2];
  __m128i CB4_0;
  x0[0] = *(__m128i*)in;
  x0[1] = *(__m128i*)(in+16);
  x1[0] = *(__m128i*)(in+32);
  x1[1] = *(__m128i*)(in+48);
  x2[0] = *(__m128i*)(in+64);
  x2[1] = *(__m128i*)(in+80);
  x3[0] = *(__m128i*)(in+96);
  x3[1] = *(__m128i*)(in+112);
  x4[0] = *(__m128i*)(in+128);
  x4[1] = *(__m128i*)(in+144);
  x5[0] = *(__m128i*)(in+160);
  x5[1] = *(__m128i*)(in+176);
  x6[0] = *(__m128i*)(in+192);
  x6[1] = *(__m128i*)(in+208);
  x7[0] = *(__m128i*)(in+224);
  x7[1] = *(__m128i*)(in+240);
  x0_save[0] = x0[0];
  x0_save[1] = x0[1];
  x1_save[0] = x1[0];
  x1_save[1] = x1[1];
  x2_save[0] = x2[0];
  x2_save[1] = x2[1];
  x3_save[0] = x3[0];
  x3_save[1] = x3[1];
  x4_save[0] = x4[0];
  x4_save[1] = x4[1];
  x5_save[0] = x5[0];
  x5_save[1] = x5[1];
  x6_save[0] = x6[0];
  x6_save[1] = x6[1];
  x7_save[0] = x7[0];
  x7_save[1] = x7[1];
  R      (x0[0],x0[1], 1, &CB4_0);
  R_Piped(x1[0],x1[1], 1, &CB4_0);
  R_Piped(x2[0],x2[1], 1, &CB4_0);
  R_Piped(x3[0],x3[1], 1, &CB4_0);
  R_Piped(x4[0],x4[1], 1, &CB4_0);
  R_Piped(x5[0],x5[1], 1, &CB4_0);
  R_Piped(x6[0],x6[1], 1, &CB4_0);
  R_Piped(x7[0],x7[1], 1, &CB4_0);
  R      (x0[1],x0[0], 2, &CB4_0);
  R_Piped(x1[1],x1[0], 2, &CB4_0);
  R_Piped(x2[1],x2[0], 2, &CB4_0);
  R_Piped(x3[1],x3[0], 2, &CB4_0);
  R_Piped(x4[1],x4[0], 2, &CB4_0);
  R_Piped(x5[1],x5[0], 2, &CB4_0);
  R_Piped(x6[1],x6[0], 2, &CB4_0);
  R_Piped(x7[1],x7[0], 2, &CB4_0);
  R      (x0[0],x0[1], 3, &CB4_0);
  R_Piped(x1[0],x1[1], 3, &CB4_0);
  R_Piped(x2[0],x2[1], 3, &CB4_0);
  R_Piped(x3[0],x3[1], 3, &CB4_0);
  R_Piped(x4[0],x4[1], 3, &CB4_0);
  R_Piped(x5[0],x5[1], 3, &CB4_0);
  R_Piped(x6[0],x6[1], 3, &CB4_0);
  R_Piped(x7[0],x7[1], 3, &CB4_0);
  R      (x0[1],x0[0], 4, &CB4_0);
  R_Piped(x1[1],x1[0], 4, &CB4_0);
  R_Piped(x2[1],x2[0], 4, &CB4_0);
  R_Piped(x3[1],x3[0], 4, &CB4_0);
  R_Piped(x4[1],x4[0], 4, &CB4_0);
  R_Piped(x5[1],x5[0], 4, &CB4_0);
  R_Piped(x6[1],x6[0], 4, &CB4_0);
  R_Piped(x7[1],x7[0], 4, &CB4_0);
  R      (x0[0],x0[1], 5, &CB4_0);
  R_Piped(x1[0],x1[1], 5, &CB4_0);
  R_Piped(x2[0],x2[1], 5, &CB4_0);
  R_Piped(x3[0],x3[1], 5, &CB4_0);
  R_Piped(x4[0],x4[1], 5, &CB4_0);
  R_Piped(x5[0],x5[1], 5, &CB4_0);
  R_Piped(x6[0],x6[1], 5, &CB4_0);
  R_Piped(x7[0],x7[1], 5, &CB4_0);
  R      (x0[1],x0[0], 6, &CB4_0);
  R_Piped(x1[1],x1[0], 6, &CB4_0);
  R_Piped(x2[1],x2[0], 6, &CB4_0);
  R_Piped(x3[1],x3[0], 6, &CB4_0);
  R_Piped(x4[1],x4[0], 6, &CB4_0);
  R_Piped(x5[1],x5[0], 6, &CB4_0);
  R_Piped(x6[1],x6[0], 6, &CB4_0);
  R_Piped(x7[1],x7[0], 6, &CB4_0);
  R      (x0[0],x0[1], 7, &CB4_0);
  R_Piped(x1[0],x1[1], 7, &CB4_0);
  R_Piped(x2[0],x2[1], 7, &CB4_0);
  R_Piped(x3[0],x3[1], 7, &CB4_0);
  R_Piped(x4[0],x4[1], 7, &CB4_0);
  R_Piped(x5[0],x5[1], 7, &CB4_0);
  R_Piped(x6[0],x6[1], 7, &CB4_0);
  R_Piped(x7[0],x7[1], 7, &CB4_0);
  R      (x0[1],x0[0], 8, &CB4_0);
  R_Piped(x1[1],x1[0], 8, &CB4_0);
  R_Piped(x2[1],x2[0], 8, &CB4_0);
  R_Piped(x3[1],x3[0], 8, &CB4_0);
  R_Piped(x4[1],x4[0], 8, &CB4_0);
  R_Piped(x5[1],x5[0], 8, &CB4_0);
  R_Piped(x6[1],x6[0], 8, &CB4_0);
  R_Piped(x7[1],x7[0], 8, &CB4_0);
  R      (x0[0],x0[1], 9, &CB4_0);
  R_Piped(x1[0],x1[1], 9, &CB4_0);
  R_Piped(x2[0],x2[1], 9, &CB4_0);
  R_Piped(x3[0],x3[1], 9, &CB4_0);
  R_Piped(x4[0],x4[1], 9, &CB4_0);
  R_Piped(x5[0],x5[1], 9, &CB4_0);
  R_Piped(x6[0],x6[1], 9, &CB4_0);
  R_Piped(x7[0],x7[1], 9, &CB4_0);
  R      (x0[1],x0[0], 10, &CB4_0);
  R_Piped(x1[1],x1[0], 10, &CB4_0);
  R_Piped(x2[1],x2[0], 10, &CB4_0);
  R_Piped(x3[1],x3[0], 10, &CB4_0);
  R_Piped(x4[1],x4[0], 10, &CB4_0);
  R_Piped(x5[1],x5[0], 10, &CB4_0);
  R_Piped(x6[1],x6[0], 10, &CB4_0);
  R_Piped(x7[1],x7[0], 10, &CB4_0);
  R      (x0[0],x0[1], 11, &CB4_0);
  R_Piped(x1[0],x1[1], 11, &CB4_0);
  R_Piped(x2[0],x2[1], 11, &CB4_0);
  R_Piped(x3[0],x3[1], 11, &CB4_0);
  R_Piped(x4[0],x4[1], 11, &CB4_0);
  R_Piped(x5[0],x5[1], 11, &CB4_0);
  R_Piped(x6[0],x6[1], 11, &CB4_0);
  R_Piped(x7[0],x7[1], 11, &CB4_0);
  R      (x0[1],x0[0], 12, &CB4_0);
  R_Piped(x1[1],x1[0], 12, &CB4_0);
  R_Piped(x2[1],x2[0], 12, &CB4_0);
  R_Piped(x3[1],x3[0], 12, &CB4_0);
  R_Piped(x4[1],x4[0], 12, &CB4_0);
  R_Piped(x5[1],x5[0], 12, &CB4_0);
  R_Piped(x6[1],x6[0], 12, &CB4_0);
  R_Piped(x7[1],x7[0], 12, &CB4_0);
  R      (x0[0],x0[1], 13, &CB4_0);
  R_Piped(x1[0],x1[1], 13, &CB4_0);
  R_Piped(x2[0],x2[1], 13, &CB4_0);
  R_Piped(x3[0],x3[1], 13, &CB4_0);
  R_Piped(x4[0],x4[1], 13, &CB4_0);
  R_Piped(x5[0],x5[1], 13, &CB4_0);
  R_Piped(x6[0],x6[1], 13, &CB4_0);
  R_Piped(x7[0],x7[1], 13, &CB4_0);
  R      (x0[1],x0[0], 14, &CB4_0);
  R_Piped(x1[1],x1[0], 14, &CB4_0);
  R_Piped(x2[1],x2[0], 14, &CB4_0);
  R_Piped(x3[1],x3[0], 14, &CB4_0);
  R_Piped(x4[1],x4[0], 14, &CB4_0);
  R_Piped(x5[1],x5[0], 14, &CB4_0);
  R_Piped(x6[1],x6[0], 14, &CB4_0);
  R_Piped(x7[1],x7[0], 14, &CB4_0);
  R      (x0[0],x0[1], 15, &CB4_0);
  R_Piped(x1[0],x1[1], 15, &CB4_0);
  R_Piped(x2[0],x2[1], 15, &CB4_0);
  R_Piped(x3[0],x3[1], 15, &CB4_0);
  R_Piped(x4[0],x4[1], 15, &CB4_0);
  R_Piped(x5[0],x5[1], 15, &CB4_0);
  R_Piped(x6[0],x6[1], 15, &CB4_0);
  R_Piped(x7[0],x7[1], 15, &CB4_0);
  *(__m128i*)out = XOR(x0[0], x0_save[1]);
  *(__m128i*)(out+16) = XOR(x0[1], x0_save[1]);
  *(__m128i*)(out+32) = XOR(x1[0], x1_save[0]);
  *(__m128i*)(out+48) = XOR(x1[1], x1_save[1]);
  *(__m128i*)(out+64) = XOR(x2[0], x2_save[0]);
  *(__m128i*)(out+80) = XOR(x2[1], x2_save[1]);
  *(__m128i*)(out+96) = XOR(x3[0], x3_save[0]);
  *(__m128i*)(out+112) = XOR(x3[1], x3_save[1]);
  *(__m128i*)(out+128) = XOR(x4[0], x4_save[0]);
  *(__m128i*)(out+144) = XOR(x4[1], x4_save[1]);
  *(__m128i*)(out+160) = XOR(x5[0], x5_save[0]);
  *(__m128i*)(out+176) = XOR(x5[1], x5_save[1]);
  *(__m128i*)(out+192) = XOR(x6[0], x6_save[0]);
  *(__m128i*)(out+208) = XOR(x6[1], x6_save[1]);
  *(__m128i*)(out+224) = XOR(x7[0], x7_save[0]);
  *(__m128i*)(out+240) = XOR(x7[1], x7_save[1]);
}

void simpira_h(unsigned char *out, const unsigned char *in) {
  __m128i x[4], x_save[4];
  __m128i CB4_0, CB4_1;
  x[0] = *(__m128i*)in;
  x[1] = *(__m128i*)(in+16);
  x[2] = *(__m128i*)(in+32);
  x[3] = *(__m128i*)(in+48);
  x_save[0] = x[0];
  x_save[1] = x[1];
  x_save[2] = x[2];
  x_save[3] = x[3];
  R2(x[0],x[1],x[2],x[3], 0);
  R2(x[1],x[2],x[3],x[0], 1);
  R2(x[2],x[3],x[0],x[1], 2);
  R2(x[3],x[0],x[1],x[2], 3);

  R2(x[0],x[1],x[2],x[3], 4);
  R2(x[1],x[2],x[3],x[0], 5);
  R2(x[2],x[3],x[0],x[1], 6);
  R2(x[3],x[0],x[1],x[2], 7);

  R2(x[0],x[1],x[2],x[3], 8);
  R2(x[1],x[2],x[3],x[0], 9);
  R2(x[2],x[3],x[0],x[1],10);
  R2(x[3],x[0],x[1],x[2],11);

  R2(x[0],x[1],x[2],x[3],12);
  R2(x[1],x[2],x[3],x[0],13);
  R2(x[2],x[3],x[0],x[1],14);

  *(__m128i*)out = XOR(x[0], x_save[0]);
  *(__m128i*)(out+16) = XOR(x[1], x_save[1]);
  *(__m128i*)(out+32) = XOR(x[2], x_save[2]);
  *(__m128i*)(out+48) = XOR(x[3], x_save[3]);
}

void simpira_h_4x(unsigned char *out, const unsigned char *in) {
  __m128i x0[4], x1[4], x2[4], x3[4];
  __m128i x0_save[4], x1_save[4], x2_save[4], x3_save[4];
  __m128i CB4_0, CB4_1;
  x0[0] = *(__m128i*)in;
  x0[1] = *(__m128i*)(in+16);
  x0[2] = *(__m128i*)(in+32);
  x0[3] = *(__m128i*)(in+48);
  x1[0] = *(__m128i*)(in+64);
  x1[1] = *(__m128i*)(in+80);
  x1[2] = *(__m128i*)(in+96);
  x1[3] = *(__m128i*)(in+112);
  x2[0] = *(__m128i*)(in+128);
  x2[1] = *(__m128i*)(in+144);
  x2[2] = *(__m128i*)(in+160);
  x2[3] = *(__m128i*)(in+176);
  x3[0] = *(__m128i*)(in+192);
  x3[1] = *(__m128i*)(in+208);
  x3[2] = *(__m128i*)(in+224);
  x3[3] = *(__m128i*)(in+240);
  x0_save[0] = x0[0];
  x0_save[1] = x0[1];
  x0_save[2] = x0[2];
  x0_save[3] = x0[3];
  x1_save[0] = x1[0];
  x1_save[1] = x1[1];
  x1_save[2] = x1[2];
  x1_save[3] = x1[3];
  x2_save[0] = x2[0];
  x2_save[1] = x2[1];
  x2_save[2] = x2[2];
  x2_save[3] = x2[3];
  x3_save[0] = x3[0];
  x3_save[1] = x3[1];
  x3_save[2] = x3[2];
  x3_save[3] = x3[3];

  CB4_0 = CB4_0(1); CB4_1 = CB4_1(1);
  R2_piped(x0[0],x0[1],x0[2],x0[3], &CB4_0, &CB4_1);
  R2_piped(x1[0],x1[1],x1[2],x1[3], &CB4_0, &CB4_1);
  R2_piped(x2[0],x2[1],x2[2],x2[3], &CB4_0, &CB4_1);
  R2_piped(x3[0],x3[1],x3[2],x3[3], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(2); CB4_1 = CB4_1(2);
  R2_piped(x0[1],x0[2],x0[3],x0[0], &CB4_0, &CB4_1);
  R2_piped(x1[1],x1[2],x1[3],x1[0], &CB4_0, &CB4_1);
  R2_piped(x2[1],x2[2],x2[3],x2[0], &CB4_0, &CB4_1);
  R2_piped(x3[1],x3[2],x3[3],x3[0], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(3); CB4_1 = CB4_1(3);
  R2_piped(x0[2],x0[3],x0[0],x0[1], &CB4_0, &CB4_1);
  R2_piped(x1[2],x1[3],x1[0],x1[1], &CB4_0, &CB4_1);
  R2_piped(x2[2],x2[3],x2[0],x2[1], &CB4_0, &CB4_1);
  R2_piped(x3[2],x3[3],x3[0],x3[1], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(4); CB4_1 = CB4_1(4);
  R2_piped(x0[3],x0[0],x0[1],x0[2], &CB4_0, &CB4_1);
  R2_piped(x1[3],x1[0],x1[1],x1[2], &CB4_0, &CB4_1);
  R2_piped(x2[3],x2[0],x2[1],x2[2], &CB4_0, &CB4_1);
  R2_piped(x3[3],x3[0],x3[1],x3[2], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(5); CB4_1 = CB4_1(5);
  R2_piped(x0[0],x0[1],x0[2],x0[3], &CB4_0, &CB4_1);
  R2_piped(x1[0],x1[1],x1[2],x1[3], &CB4_0, &CB4_1);
  R2_piped(x2[0],x2[1],x2[2],x2[3], &CB4_0, &CB4_1);
  R2_piped(x3[0],x3[1],x3[2],x3[3], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(6); CB4_1 = CB4_1(6);
  R2_piped(x0[1],x0[2],x0[3],x0[0], &CB4_0, &CB4_1);
  R2_piped(x1[1],x1[2],x1[3],x1[0], &CB4_0, &CB4_1);
  R2_piped(x2[1],x2[2],x2[3],x2[0], &CB4_0, &CB4_1);
  R2_piped(x3[1],x3[2],x3[3],x3[0], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(7); CB4_1 = CB4_1(7);
  R2_piped(x0[2],x0[3],x0[0],x0[1], &CB4_0, &CB4_1);
  R2_piped(x1[2],x1[3],x1[0],x1[1], &CB4_0, &CB4_1);
  R2_piped(x2[2],x2[3],x2[0],x2[1], &CB4_0, &CB4_1);
  R2_piped(x3[2],x3[3],x3[0],x3[1], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(8); CB4_1 = CB4_1(8);
  R2_piped(x0[3],x0[0],x0[1],x0[2], &CB4_0, &CB4_1);
  R2_piped(x1[3],x1[0],x1[1],x1[2], &CB4_0, &CB4_1);
  R2_piped(x2[3],x2[0],x2[1],x2[2], &CB4_0, &CB4_1);
  R2_piped(x3[3],x3[0],x3[1],x3[2], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(9); CB4_1 = CB4_1(9);
  R2_piped(x0[0],x0[1],x0[2],x0[3], &CB4_0, &CB4_1);
  R2_piped(x1[0],x1[1],x1[2],x1[3], &CB4_0, &CB4_1);
  R2_piped(x2[0],x2[1],x2[2],x2[3], &CB4_0, &CB4_1);
  R2_piped(x3[0],x3[1],x3[2],x3[3], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(10); CB4_1 = CB4_1(10);
  R2_piped(x0[1],x0[2],x0[3],x0[0], &CB4_0, &CB4_1);
  R2_piped(x1[1],x1[2],x1[3],x1[0], &CB4_0, &CB4_1);
  R2_piped(x2[1],x2[2],x2[3],x2[0], &CB4_0, &CB4_1);
  R2_piped(x3[1],x3[2],x3[3],x3[0], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(11); CB4_1 = CB4_1(11);
  R2_piped(x0[2],x0[3],x0[0],x0[1], &CB4_0, &CB4_1);
  R2_piped(x1[2],x1[3],x1[0],x1[1], &CB4_0, &CB4_1);
  R2_piped(x2[2],x2[3],x2[0],x2[1], &CB4_0, &CB4_1);
  R2_piped(x3[2],x3[3],x3[0],x3[1], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(12); CB4_1 = CB4_1(12);
  R2_piped(x0[3],x0[0],x0[1],x0[2], &CB4_0, &CB4_1);
  R2_piped(x1[3],x1[0],x1[1],x1[2], &CB4_0, &CB4_1);
  R2_piped(x2[3],x2[0],x2[1],x2[2], &CB4_0, &CB4_1);
  R2_piped(x3[3],x3[0],x3[1],x3[2], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(13); CB4_1 = CB4_1(13);
  R2_piped(x0[0],x0[1],x0[2],x0[3], &CB4_0, &CB4_1);
  R2_piped(x1[0],x1[1],x1[2],x1[3], &CB4_0, &CB4_1);
  R2_piped(x2[0],x2[1],x2[2],x2[3], &CB4_0, &CB4_1);
  R2_piped(x3[0],x3[1],x3[2],x3[3], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(14); CB4_1 = CB4_1(14);
  R2_piped(x0[1],x0[2],x0[3],x0[0], &CB4_0, &CB4_1);
  R2_piped(x1[1],x1[2],x1[3],x1[0], &CB4_0, &CB4_1);
  R2_piped(x2[1],x2[2],x2[3],x2[0], &CB4_0, &CB4_1);
  R2_piped(x3[1],x3[2],x3[3],x3[0], &CB4_0, &CB4_1);
  CB4_0 = CB4_0(15); CB4_1 = CB4_1(15);
  R2_piped(x0[2],x0[3],x0[0],x0[1], &CB4_0, &CB4_1);
  R2_piped(x1[2],x1[3],x1[0],x1[1], &CB4_0, &CB4_1);
  R2_piped(x2[2],x2[3],x2[0],x2[1], &CB4_0, &CB4_1);
  R2_piped(x3[2],x3[3],x3[0],x3[1], &CB4_0, &CB4_1);

  *(__m128i*)out = XOR(x0[0], x0_save[0]);
  *(__m128i*)(out+16) = XOR(x0[1], x0_save[1]);
  *(__m128i*)(out+32) = XOR(x1[0], x1_save[0]);
  *(__m128i*)(out+48) = XOR(x1[1], x1_save[1]);
  *(__m128i*)(out+64) = XOR(x2[0], x2_save[0]);
  *(__m128i*)(out+80) = XOR(x2[1], x2_save[1]);
  *(__m128i*)(out+96) = XOR(x3[0], x3_save[0]);
  *(__m128i*)(out+112) = XOR(x3[1], x3_save[1]);
}

void simpira_h_8x(unsigned char *out, const unsigned char *in) {
  simpira_h_4x(out, in);
  simpira_h_4x(out + 128, in + 256);
}
