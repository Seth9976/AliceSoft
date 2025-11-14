// 函数: sub_542690
// 地址: 0x542690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x28c) + 4
int32_t edi = ecx[-1]
*(arg1 + 0x28c) = ecx
int32_t edx = *ecx
*(arg1 + 0x28c) = &ecx[1]
int32_t* ecx_2 = *(arg1 + 0x12c4)
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t ecx_4 = *(ecx_3 + (edx << 2))
int32_t* ecx_5

if (ecx_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_5 = *(*(arg1 + 0x1e4) + (ecx_4 << 2))
else
    ecx_5 = nullptr

char* esi

if (ecx_5[1] != 0)
    esi = *ecx_5
else
    esi = nullptr

int32_t* ecx_6 = *(arg1 + 0x12c8)
int32_t ecx_7

if (ecx_6[1] != 0)
    ecx_7 = *ecx_6
else
    ecx_7 = 0

int32_t ecx_8 = *(ecx_7 + (edi << 2))
void** ecx_9

if (ecx_8 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_9 = *(*(arg1 + 0x1e4) + (ecx_8 << 2))
else
    ecx_9 = nullptr

void* ecx_10

if (ecx_9[1] != 0)
    ecx_10 = *ecx_9
else
    ecx_10 = nullptr

int32_t ecx_12

while (true)
    int32_t edx_7
    edx_7.b = *ecx_10
    char temp0_1 = *esi
    bool c_1 = edx_7.b u< temp0_1
    
    if (edx_7.b == temp0_1)
        if (edx_7.b == 0)
            ecx_12 = 0
            break
        
        edx_7.b = *(ecx_10 + 1)
        char temp3_1 = esi[1]
        c_1 = edx_7.b u< temp3_1
        
        if (edx_7.b == temp3_1)
            ecx_10 += 2
            esi = &esi[2]
            
            if (edx_7.b != 0)
                continue
            
            ecx_12 = 0
            break
    
    bool c_2 = unimplemented  {sbb ecx, ecx}
    ecx_12 = sbb.d(sbb.d(ecx_10, ecx_10, c_1), 0xffffffff, c_2)
    break

int32_t edx_8
edx_8.b = ecx_12 != 0
**(arg1 + 0x2b0) = edx_8
*(arg1 + 0x2b0) += 4
