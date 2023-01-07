/*
 * @Description: 
 * @Author: kkchen
 * @Email: kkchen.lg@qq.com
 * @Date: 2022-10-01 15:14:37
 * @LastEditTime: 2022-10-02 09:25:45
 * @LastEditors: kkchen
 */
#include "arm_neon.h"
#include <iostream>
using namespace std;

int main(){
    // bfloat16_t* bf16_array = new bfloat16_t[10];
    // float* float_array = new float[10];
    
    // for(int i = 0; i < 10; i++){
    //    // float_array[i] = i;
    //     bf16_array[i] = vcvth_bf16_f32(float_array[i]);
    //     std::cout << "i = " << i << " " << (float)(bf16_array[i]) << std::endl;
    // }
    unsigned short* a_array = new unsigned short[4];
    for(int i = 0; i < 4; i++){
        a_array[i] = i;
    }
    uint16x4_t A;
    A = vld1_u16(a_array);
    A = vadd_u16(A, A);
    vst1_u16(a_array, A);
    for(int i = 0; i < 4;i++){
        std::cout << " i = " << i << " " << a_array[i] << std::endl;
    }
    
    return 0;
}
