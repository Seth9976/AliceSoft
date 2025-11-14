// 函数: sub_542850
// 地址: 0x542850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x28c) + 4
int32_t edi = ecx[-1]
*(arg1 + 0x28c) = ecx
int32_t esi = *ecx
*(arg1 + 0x28c) = &ecx[1]
int32_t edx = *(arg1 + 0x7c)
int32_t ecx_2 = *(arg1 + 0x78)
char* ecx_3

if (esi u>= (edx - ecx_2) s>> 2)
    ecx_3 = nullptr
else if (ecx_2 != edx)
    int32_t edx_1 = *(arg1 + 0x88)
    
    if (edx_1 != *(arg1 + 0x8c))
        ecx_3 = *(ecx_2 + (esi << 2)) + edx_1
    else
        ecx_3 = nullptr
else
    ecx_3 = nullptr

int32_t* edx_2 = *(arg1 + 0x12c4)
int32_t edx_3

if (edx_2[1] != 0)
    edx_3 = *edx_2
else
    edx_3 = 0

int32_t edx_4 = *(edx_3 + (edi << 2))
int32_t* edx_5

if (edx_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_5 = *(*(arg1 + 0x1e4) + (edx_4 << 2))
else
    edx_5 = nullptr

char* edx_6

if (edx_5[1] != 0)
    edx_6 = *edx_5
else
    edx_6 = nullptr

char* esi_5 = ecx_3
char* ecx_5 = edx_6
int32_t ecx_7

while (true)
    edx_6.b = *ecx_5
    char temp0_1 = *esi_5
    bool c_1 = edx_6.b u< temp0_1
    
    if (edx_6.b == temp0_1)
        if (edx_6.b == 0)
            ecx_7 = 0
            break
        
        edx_6.b = ecx_5[1]
        char temp3_1 = esi_5[1]
        c_1 = edx_6.b u< temp3_1
        
        if (edx_6.b == temp3_1)
            ecx_5 = &ecx_5[2]
            esi_5 = &esi_5[2]
            
            if (edx_6.b != 0)
                continue
            
            ecx_7 = 0
            break
    
    bool c_2 = unimplemented  {sbb ecx, ecx}
    ecx_7 = sbb.d(sbb.d(ecx_5, ecx_5, c_1), 0xffffffff, c_2)
    break

int32_t edx_7
edx_7.b = ecx_7 != 0
**(arg1 + 0x2b0) = edx_7
*(arg1 + 0x2b0) += 4
