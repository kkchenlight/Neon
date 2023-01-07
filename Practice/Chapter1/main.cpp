/*
 * @Description:
 * @Author: kkchen
 * @Email: kkchen.lg@qq.com
 * @Date: 2022-10-06 15:04:27
 * @LastEditTime: 2022-10-06 15:09:50
 * @LastEditors: kkchen
 */
#include <iostream>

#include "arm_neon.h"

int main() {
  float A[] = {1, 2, 3, 4};

  float32x4_t Vecta;
  Vecta = vld1q_f32(A);
  Vecta = vaddq_f32(Vecta, Vecta);
  vst1q_f32(A, Vecta);
  for (int i = 0; i < 4; i++) {
    std::cout << " " << A[i] << std::endl;
  }
  std::cout << std::endl;
  return 0;
}