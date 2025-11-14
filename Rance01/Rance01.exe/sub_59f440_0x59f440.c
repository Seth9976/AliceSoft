// 函数: sub_59f440
// 地址: 0x59f440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg2 + 0x6c)
char* ebp = *(arg2 + 0x78)
uint32_t i_1 = *(arg2 + 0x7c)
int32_t var_c = *(arg2 + 0x90)
int32_t esi_1 = *(arg2 + 0x2c)
char* ecx_2 = *(arg2 + 0x38) + edx
int32_t var_8

if (edx u<= esi_1 - 0x106)
    var_8 = 0
else
    var_8 = edx - esi_1 + 0x106

char var_12 = *(ecx_2 + ebp - 1)
void* esi_2 = &ecx_2[0x102]
char var_11 = *(ecx_2 + ebp)

if (ebp u>= *(arg2 + 0x8c))
    i_1 u>>= 2

int32_t edx_5 = *(arg2 + 0x74)

if (var_c u> edx_5)
    var_c = edx_5

uint32_t i

do
    int32_t ebx
    ebx.b = var_11
    char* edx_7 = *(arg2 + 0x38) + arg1
    
    if (*(edx_7 + ebp) == ebx.b)
        ebx.b = var_12
        
        if (*(edx_7 + ebp - 1) == ebx.b)
            ebx.b = *edx_7
            
            if (ebx.b == *ecx_2)
                ebx.b = edx_7[1]
                
                if (ebx.b == ecx_2[1])
                    void* ecx_3 = &ecx_2[2]
                    void* edx_8 = &edx_7[2]
                    
                    do
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 1))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 2))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 3))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 4))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 5))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 6))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        
                        if (ebx.b != *(edx_8 + 7))
                            break
                        
                        ebx.b = *(ecx_3 + 1)
                        ecx_3 += 1
                        edx_8 += 8
                        
                        if (ebx.b != *edx_8)
                            break
                    while (ecx_3 u< esi_2)
                    
                    ecx_2 = esi_2 - 0x102
                    
                    if (ecx_3 - esi_2 + 0x102 s> ebp)
                        *(arg2 + 0x70) = arg1
                        ebp = ecx_3 - esi_2 + 0x102
                        
                        if (ecx_3 - esi_2 + 0x102 s>= var_c)
                            break
                        
                        ebx.b = *(ecx_3 - esi_2 + 0x102 + ecx_2 - 1)
                        char* edx_11
                        edx_11.b = *(ecx_3 - esi_2 + 0x102 + ecx_2)
                        var_12 = ebx.b
                        var_11 = edx_11.b
    
    arg1 = zx.d(*(*(arg2 + 0x40) + ((*(arg2 + 0x34) & arg1) << 1)))
    
    if (arg1 u<= var_8)
        break
    
    i = i_1
    i_1 -= 1
while (i != 1)
char* eax_1 = *(arg2 + 0x74)

if (ebp u> eax_1)
    return eax_1

return ebp
