// 函数: sub_502070
// 地址: 0x502070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg2
void* var_18 = arg2
int32_t j = sub_502150(arg1 + 0x28, *(arg1 + 0x2c), *(edi + 0x28), *(edi + 0x2c))

for (int32_t* i = *(edi + 0x38); i != *(edi + 0x3c); i = &i[1])
    int32_t ecx_1 = *(arg1 + 0x3c)
    int32_t* eax_2 = *(arg1 + 0x38)
    
    if (eax_2 == ecx_1)
    label_5020c3:
        int32_t ecx_2
        
        if (i u< ecx_1)
            ecx_2 = *(arg1 + 0x38)
        
        if (i u>= ecx_1 || ecx_2 u> i)
            if (ecx_1 == *(arg1 + 0x40))
                j = sub_40d3d0(arg1 + 0x38, j, 1)
            
            int32_t* eax_7 = *(arg1 + 0x3c)
            
            if (eax_7 != 0)
                *eax_7 = *i
        else
            if (ecx_1 == *(arg1 + 0x40))
                j = sub_40d3d0(arg1 + 0x38, j, 1)
            
            int32_t* eax_5 = *(arg1 + 0x3c)
            
            if (eax_5 != 0)
                j = *(*(arg1 + 0x38) + ((i - ecx_2) s>> 2 << 2))
                *eax_5 = j
            
            edi = arg2
        
        *(arg1 + 0x3c) += 4
    else
        j = *i
        
        while (*eax_2 != j)
            eax_2 = &eax_2[1]
            
            if (eax_2 == ecx_1)
                break
        
        if (eax_2 == ecx_1)
            goto label_5020c3

int32_t eax_8 = *(arg1 + 0x3c)
int32_t* ecx_5 = *(arg1 + 0x38)
int32_t result = sub_4b4b20(ecx_5, eax_8, (eax_8 - ecx_5) s>> 2)
*(arg1 + 0x80) += 1
return result
