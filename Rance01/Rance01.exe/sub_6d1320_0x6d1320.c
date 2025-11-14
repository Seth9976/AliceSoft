// 函数: sub_6d1320
// 地址: 0x6d1320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *arg7
int32_t esi = 0
int32_t eax_1 = arg3
int32_t var_124[0x40]

if (arg3 s<= arg4)
    do
        int32_t ebx_2 = sx.d(*(arg2 + (*((eax_1 << 2) + &data_79aee0) << 1)))
        
        if (ebx_2 s< 0)
            ebx_2 = neg.d(ebx_2)
        
        int32_t ebx_3 = ebx_2 s>> arg5
        var_124[eax_1] = ebx_3
        
        if (ebx_3 == 1)
            esi = eax_1
        
        eax_1 += 1
    while (eax_1 s<= arg4)

int32_t i = 0
char* edx_1 = nullptr
void* eax_3 = arg6 + ecx

if (arg3 s<= arg4)
    int32_t var_18_1 = arg3
    void* var_24_2 = ecx
    int32_t ecx_6
    
    do
        int32_t ecx_2 = var_124[var_18_1]
        
        if (ecx_2 != 0)
            if (i s> 0xf)
                void* ecx_3 = var_24_2
                
                while (true)
                    if (var_18_1 s> esi)
                        var_24_2 = ecx_3
                        break
                    
                    sub_6d0ed0(arg1, arg8)
                    ecx_3 = nullptr
                    int32_t eax_6
                    
                    if (i - 0xf s< 0x60)
                        eax_6 = arg8[0xf0]
                    else
                        eax_6 = arg8[0xf0]
                        
                        do
                            eax_6 += 5
                            i -= 0x50
                        while (i s>= 0x6f)
                    
                    do
                        eax_6 += 1
                        i -= 0x10
                    while (i s> 0xf)
                    
                    arg8[0xf0] = eax_6
                    eax_3 = arg6
                    edx_1 = nullptr
                    
                    if (i s<= 0xf)
                        var_24_2 = nullptr
                        break
            
            if (ecx_2 s<= 1)
                sub_6d0ed0(arg1, arg8)
                var_24_2 = nullptr
                eax_3 = arg6
                arg8[i * 0x10 + 1] += 1
                edx_1 = nullptr
                i = 0
            else
                int32_t ecx_4
                ecx_4.b = ecx_2.b & 1
                *(edx_1 + eax_3) = ecx_4.b
                edx_1 = &edx_1[1]
        else
            i += 1
        
        ecx_6 = var_18_1 + 1
        var_18_1 = ecx_6
    while (ecx_6 s<= arg4)
    ecx = var_24_2
    
    if (i s> 0 || edx_1 s> 0)
        int32_t ebx_6 = *(arg1 + 0x28) + 1
        *(arg1 + 0x28) = ebx_6
        ecx += edx_1
        
        if (ebx_6 == 0x7fff || ecx s> data_78d5e0 - 0x3f)
            sub_6d0ed0(arg1, arg8)
            ecx = nullptr

*arg7 = ecx
return arg7
