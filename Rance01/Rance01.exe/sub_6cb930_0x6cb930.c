// 函数: sub_6cb930
// 地址: 0x6cb930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 1
*arg5 = arg3
arg5[1] = arg4
int32_t edx_1 = 0
int32_t result = 0
char i_5

do
    uint32_t ebp_1 = zx.d(*(i + arg1 - 1))
    int32_t j = 1
    
    if (ebp_1 u>= 1)
        char ecx_2
        
        if (ebp_1 - 1 u< 6)
            ecx_2 = i.b
        else
            ecx_2 = i.b
            
            do
                (&i_5)[edx_1] = ecx_2
                
                if (edx_1 + 1 u> 0x101)
                    return 0xfffffffa
                
                void var_13f
                *(&var_13f + edx_1) = ecx_2
                
                if (edx_1 + 2 u> 0x101)
                    return 0xfffffffa
                
                void var_13e
                *(&var_13e + edx_1) = ecx_2
                
                if (edx_1 + 3 u> 0x101)
                    return 0xfffffffa
                
                void var_13d
                *(&var_13d + edx_1) = ecx_2
                
                if (edx_1 + 4 u> 0x101)
                    return 0xfffffffa
                
                char var_13c[0x100]
                var_13c[edx_1] = ecx_2
                edx_1 += 5
                
                if (edx_1 u> 0x101)
                    return 0xfffffffa
                
                j += 5
            while (j u<= ebp_1 - 6)
        
        do
            (&i_5)[edx_1] = ecx_2
            edx_1 += 1
            
            if (edx_1 u> 0x101)
                return 0xfffffffa
            
            j += 1
        while (j u<= ebp_1)
    
    i += 1
while (i s<= 0x10)

(&i_5)[edx_1] = 0
int32_t edi_6 = 0
uint32_t i_6 = zx.d(i_5)
int32_t edx_2 = 0
i.b = i_5
int32_t var_544[0x101]

if (i.b != 0)
    uint32_t i_1 = zx.d(i_5)
    
    do
        for (; i_1 == i_6; i_1 = zx.d((&i_5)[edx_2]))
            var_544[edx_2] = edi_6
            edi_6 += 1
            edx_2 += 1
            
            if (edx_2 u> 0x101)
                return 0xfffffffa
        
        edi_6 *= 2
        i_6 += 1
    while (i_1 != 0)

int32_t i_2 = 1
__builtin_memset(arg5 + 0x64e, 0, 0x22)
__builtin_memset(&arg5[0x182], 0, 0x44)
int32_t j_1 = 0

do
    uint32_t ebp_3 = zx.d(*(i_2 + arg1 - 1))
    
    if (ebp_3 == 0)
        *(arg5 + (i_2 << 1) + 0x62a) = 0xffff
    else
        uint32_t edi_8 = j_1 * 4
        *(arg5 + (i_2 << 1) + 0x64e) = j_1.w
        int32_t ebp_4 = ebp_3 + j_1
        *(arg5 + (i_2 << 1) + 0x608) = (var_544[j_1]).w
        
        if (j_1 u< ebp_4)
            if (ebp_4 - j_1 u>= 6)
                do
                    *(arg5 + (j_1 << 1) + 0x408) = zx.w(*(arg2 + j_1))
                    
                    if (j_1 + 1 u> 0x101)
                        return 0xfffffffa
                    
                    *(arg5 + (j_1 << 1) + 0x40a) = zx.w(*(arg2 + j_1 + 1))
                    
                    if (j_1 + 2 u> 0x101)
                        return 0xfffffffa
                    
                    *(arg5 + (j_1 << 1) + 0x40c) = zx.w(*(arg2 + j_1 + 2))
                    
                    if (j_1 + 3 u> 0x101)
                        return 0xfffffffa
                    
                    *(arg5 + (j_1 << 1) + 0x40e) = zx.w(*(arg2 + j_1 + 3))
                    
                    if (j_1 + 4 u> 0x101)
                        return 0xfffffffa
                    
                    *(arg5 + (j_1 << 1) + 0x410) = zx.w(*(arg2 + j_1 + 4))
                    j_1 += 5
                    
                    if (j_1 u> 0x101)
                        return 0xfffffffa
                while (j_1 u<= ebp_4 - 6)
            
            do
                *(arg5 + (j_1 << 1) + 0x408) = zx.w(*(arg2 + j_1))
                j_1 += 1
                
                if (j_1 u> 0x101)
                    return 0xfffffffa
            while (j_1 u< ebp_4)
            
            edi_8 = j_1 * 4
        
        void var_548
        *(arg5 + i_2 * 2 + 0x62a) = (*(&var_548 + edi_8)).w
    
    i_2 += 1
while (i_2 s<= 0x10)

arg5[0x193].w = 0xffff
int32_t* i_3 = arg5

do
    i_3[2] = 0
    i_3[3] = 0
    i_3[4] = 0
    i_3[5] = 0
    i_3 = &i_3[4]
while (&arg5[0x100] s> i_3)

int32_t i_4 = 1
int32_t edx_3
edx_3.b = 0xff
void* var_18_2 = nullptr
int32_t esi_4 = arg1

do
    uint32_t ecx_12 = zx.d(*(i_4 + esi_4 - 1))
    int32_t ebx_2 = 1
    uint32_t var_2c_1 = ecx_12
    
    if (ecx_12 u>= 1)
        ecx_12.b = edx_3.b
        ecx_12.b += 8
        int32_t j_3 = 1 << ecx_12.b
        void* esi_5 = arg2
        uint32_t var_1c_1 = i_4 << 0x10
        char var_20_1 = edx_3.b
        void* ebp_6 = var_18_2
        
        do
            if (ebp_6 u> 0x101)
                return 0xfffffffa
            
            int32_t j_2 = j_3
            edx_3 = var_544[ebp_6] << ecx_12.b
            
            if (j_2 s> 0)
                char* edi_35
                
                if (j_2 s< 6)
                    edi_35 = ebp_6 + esi_5
                else
                    char* var_38_1 = ebp_6 + esi_5
                    char var_24_1 = ecx_12.b
                    
                    do
                        j_2 -= 5
                        arg5[edx_3 + 2] = zx.d(*(esi_5 + ebp_6)) | var_1c_1
                        arg5[edx_3 + 3] = zx.d(*(esi_5 + ebp_6)) | var_1c_1
                        arg5[edx_3 + 4] = zx.d(*(esi_5 + ebp_6)) | var_1c_1
                        arg5[edx_3 + 5] = zx.d(*(esi_5 + ebp_6)) | var_1c_1
                        arg5[edx_3 + 6] = zx.d(*(esi_5 + ebp_6)) | var_1c_1
                        edx_3 += 5
                    while (j_2 s>= 6)
                    
                    edi_35 = var_38_1
                    ecx_12.b = var_24_1
                
                do
                    j_2 -= 1
                    arg5[edx_3 + 2] = zx.d(*edi_35) | var_1c_1
                    edx_3 += 1
                while (j_2 s> 0)
                
                esi_5 = arg2
            
            ebp_6 += 1
            ebx_2 += 1
        while (ebx_2 u<= var_2c_1)
        
        var_18_2 = ebp_6
        edx_3.b = var_20_1
        esi_4 = arg1
    
    edx_3.b -= 1
    i_4 += 1
while (i_4 s<= 8)

return result
