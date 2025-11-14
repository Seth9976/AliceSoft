// 函数: sub_440dc0
// 地址: 0x440dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg1
int128_t* esi = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t* result = arg9

if (result s> 0)
    arg9 = result
    int32_t* i
    
    do
        int32_t* eax_12 = arg8
        void* edx_6 = nullptr
        void* ecx_11 = esi & 0xf
        arg2 = nullptr
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                eax_12 = 4 - (ecx_11 u>> 2)
                void* ecx_14 = arg8 - eax_12
                edx_6 = ecx_14 & 0xfffffffc
                arg2 = ecx_14 - edx_6
            
            if (eax_12 s> 0)
                int32_t var_c_1 = 0
                arg5 = eax_12
                int32_t* j
                
                do
                    *esi = *(zx.d(*esi) + zx.d(*edi) + ebx)
                    int32_t eax_15
                    eax_15.b = *(zx.d(*(esi + 1)) + zx.d(*(edi + 1)) + ebx)
                    *(esi + 1) = eax_15.b
                    *(esi + 2) = *(zx.d(*(esi + 2)) + zx.d(*(edi + 2)) + ebx)
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
            
            result = arg2
        else
            edx_6 = eax_12 & 0xfffffffc
            result = eax_12 - edx_6
        
        if (edx_6 s> 0)
            int32_t j_3 = ((edx_6 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                *esi = _mm_adds_epu8(*esi, *edi)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        if (result s> 0)
            arg2 = nullptr
            int32_t* j_2
            
            do
                *esi = *(zx.d(*esi) + zx.d(*edi) + ebx)
                int32_t ecx_25
                ecx_25.b = *(zx.d(*(esi + 1)) + zx.d(*(edi + 1)) + ebx)
                *(esi + 1) = ecx_25.b
                *(esi + 2) = *(zx.d(*(esi + 2)) + zx.d(*(edi + 2)) + ebx)
                esi += 4
                edi += 4
                j_2 = result
                result -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = arg9
        arg9 -= 1
    while (i != 1)

return result
