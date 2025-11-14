// 函数: sub_541540
// 地址: 0x541540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
int32_t* ecx_3 = *(arg1 + 0x28c)
int32_t esi = *ecx_3
*(arg1 + 0x28c) = &ecx_3[1]
int32_t edx = ecx_3[1]
*(arg1 + 0x28c) = &ecx_3[2]
int32_t ecx_6 = *(arg1 + 0x78)
int32_t edx_1 = *(arg1 + 0x7c)
char* ecx_7

if (esi u>= (edx_1 - ecx_6) s>> 2)
    ecx_7 = nullptr
else if (ecx_6 != edx_1)
    int32_t edx_2 = *(arg1 + 0x88)
    
    if (edx_2 != *(arg1 + 0x8c))
        ecx_7 = *(ecx_6 + (esi << 2)) + edx_2
    else
        ecx_7 = nullptr
else
    ecx_7 = nullptr

int32_t* edx_6

if (edi u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_6 = *(*(arg1 + 0x1e4) + (edi << 2))
else
    edx_6 = nullptr

int32_t edx_8

if (edx_6[1] != 0)
    edx_8 = *edx_6
else
    edx_8 = 0

int32_t edx_9 = *(edx_8 + (ebx << 2))
int32_t* edx_10

if (edx_9 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_10 = *(*(arg1 + 0x1e4) + (edx_9 << 2))
else
    edx_10 = nullptr

char* edx_11

if (edx_10[1] != 0)
    edx_11 = *edx_10
else
    edx_11 = nullptr

char* esi_5 = ecx_7
char* ecx_9 = edx_11
int32_t ecx_11

while (true)
    edx_11.b = *ecx_9
    char temp0_1 = *esi_5
    bool c_1 = edx_11.b u< temp0_1
    
    if (edx_11.b == temp0_1)
        if (edx_11.b == 0)
            ecx_11 = 0
            break
        
        edx_11.b = ecx_9[1]
        char temp3_1 = esi_5[1]
        c_1 = edx_11.b u< temp3_1
        
        if (edx_11.b == temp3_1)
            ecx_9 = &ecx_9[2]
            esi_5 = &esi_5[2]
            
            if (edx_11.b != 0)
                continue
            
            ecx_11 = 0
            break
    
    bool c_2 = unimplemented  {sbb ecx, ecx}
    ecx_11 = sbb.d(sbb.d(ecx_9, ecx_9, c_1), 0xffffffff, c_2)
    break

if (ecx_11 != 0)
    *(arg1 + 0x28c) = *(arg1 + 0x290) + edx
