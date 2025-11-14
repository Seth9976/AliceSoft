// 函数: sub_412c40
// 地址: 0x412c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_78 = ebx
int32_t ebx_1 = arg9
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi

if (ebx_1 s>= 1)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg8)
    int32_t eax_4 = (eax_2 - edx_1) s>> 1
    
    if (ebx_1 s>= eax_4)
        ebx_1 = eax_4 - 1
        arg9 = ebx_1
else
    ebx_1 = 1
    arg9 = ebx_1

char* edi_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_9 = (*(*arg1 + 0x1c))()
int32_t var_68 = eax_9
int32_t var_24 = 4 - eax_9 * arg8
char* eax_12 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_14 = (*(*arg4 + 0x1c))()
char* var_28 = nullptr
int32_t var_24_1 = 0
int32_t var_20 = 0
sub_404f60(ebx_1 * 0x1fe + 0x100, &var_28)
char* ecx_8 = var_28
int32_t result = var_24_1 - ecx_8
int32_t edx_7 = 0
int32_t var_50 = 0
int32_t result_1 = result

if (result s> 0)
    do
        result = divs.dp.d(sx.q(edx_7), ebx_1 * 2 + 1)
        edx_7 = var_50 + 1
        var_50 = edx_7
        ecx_8[edx_7 - 1] = result.b
    while (edx_7 s< result_1)

if (arg7 s> 0)
    void* edx_12 = (arg8 - ebx_1 * 2) * eax_14
    int32_t eax_24 = (arg8 - 1) * eax_14
    int32_t esi_7 = arg8 - ebx_1
    char* esi_8 = eax_12
    char* var_6c_1 = &esi_8[eax_24 + 2]
    void* eax_28 = (ebx_1 + 1) * eax_14 - edx_12
    void* eax_30 = eax_24 - edx_12
    void* eax_31 = 1 - edx_12
    void* eax_32 = 2 - edx_12
    void* var_40_1 = edx_12
    char* var_78_1 = esi_8
    int32_t var_44_1 = arg7
    
    while (true)
        void* edx_13 = edx_12 + esi_8
        int32_t var_74_1 = 0
        int32_t var_68_1
        __builtin_memset(&var_68_1, 0, 0x14)
        char* var_80_1 = esi_8
        result = zx.d(*esi_8) * ebx_1
        int32_t esi_11 = zx.d(*(eax_31 + edx_13)) * ebx_1
        int32_t edx_15 = zx.d(*(eax_32 + edx_13)) * arg9
        int32_t ebx_3 = arg9
        int32_t var_84_1 = edx_15
        uint32_t var_48_1 = 0
        
        if (ebx_3 s>= 0)
            int32_t var_64_1
            int32_t var_60_1
            int32_t var_5c_1
            int32_t var_58_1
            
            if (ebx_3 + 1 s>= 2)
                uint32_t i_8 = (ebx_3 + 1) u>> 1
                uint32_t i_4 = i_8
                var_48_1 = i_8 * 2
                char* edx_19 = var_80_1
                uint32_t i
                
                do
                    var_5c_1 += zx.d(*edx_19)
                    var_64_1 += zx.d(var_80_1[1])
                    var_74_1 += zx.d(var_80_1[2])
                    void* edx_26 = &var_80_1[eax_14]
                    var_58_1 += zx.d(*edx_26)
                    var_60_1 += zx.d(*(edx_26 + 1))
                    var_68_1 += zx.d(*(edx_26 + 2))
                    edx_19 = edx_26 + eax_14
                    i = i_4
                    i_4 -= 1
                    var_80_1 = edx_19
                while (i != 1)
                ebx_3 = arg9
            
            if (var_48_1 s<= ebx_3)
                result += zx.d(*var_80_1)
                esi_11 += zx.d(var_80_1[1])
                var_84_1 += zx.d(var_80_1[2])
            
            var_84_1 += var_74_1 + var_68_1
            esi_11 += var_64_1 + var_60_1
            result += var_5c_1 + var_58_1
            edx_15 = var_84_1
        
        *edi_1 = ecx_8[result]
        edi_1[1] = ecx_8[esi_11]
        edx_15.b = ecx_8[edx_15]
        int32_t i_9 = arg9
        edi_1[2] = edx_15.b
        char* edx_42 = eax_28 + edx_13
        int32_t var_70
        void* edi_2 = &edi_1[var_70]
        char* var_74_2 = edx_42
        
        if (i_9 s>= 1)
            int32_t i_5 = i_9
            int32_t i_1
            
            do
                result += zx.d(*edx_42) - zx.d(*var_78_1)
                esi_11 += zx.d(var_74_2[1]) - zx.d(var_78_1[1])
                var_84_1 += zx.d(var_74_2[2]) - zx.d(var_78_1[2])
                edx_42 = &var_74_2[eax_14]
                *edi_2 = ecx_8[result]
                *(edi_2 + 1) = ecx_8[esi_11]
                *(edi_2 + 2) = ecx_8[var_84_1]
                edi_2 += var_70
                i_1 = i_5
                i_5 -= 1
                var_74_2 = edx_42
            while (i_1 != 1)
            i_9 = arg9
        
        int32_t ebx_18 = esi_7
        
        if (i_9 + 1 s< ebx_18)
            void* var_74_3 = &var_78_1[2]
            void* var_80_3 = &var_78_1[(arg9 * 2 + 1) * eax_14 + 2]
            int32_t i_6 = esi_7 - (arg9 + 1)
            int32_t i_2
            
            do
                result += zx.d(*(var_80_3 - 2)) - zx.d(*(var_74_3 - 2))
                esi_11 += zx.d(*(var_80_3 - 1)) - zx.d(*(var_74_3 - 1))
                uint32_t ebx_28 = zx.d(*var_80_3) - zx.d(*var_74_3)
                var_80_3 += eax_14
                var_74_3 += eax_14
                var_84_1 += ebx_28
                *edi_2 = ecx_8[result]
                *(edi_2 + 1) = ecx_8[esi_11]
                *(edi_2 + 2) = ecx_8[var_84_1]
                edi_2 += var_70
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            ebx_18 = esi_7
        
        void* var_74_4 = edx_13
        
        if (ebx_18 s< arg8)
            int32_t i_7 = arg8 - ebx_18
            int32_t i_3
            
            do
                result += zx.d(*(eax_30 + edx_13)) - zx.d(*var_74_4)
                esi_11 += zx.d(var_6c_1[0xffffffff]) - zx.d(*(var_74_4 + 1))
                uint32_t ebx_37 = zx.d(*var_6c_1) - zx.d(*(var_74_4 + 2))
                var_74_4 += eax_14
                var_84_1 += ebx_37
                *edi_2 = ecx_8[result]
                *(edi_2 + 1) = ecx_8[esi_11]
                *(edi_2 + 2) = ecx_8[var_84_1]
                edi_2 += var_70
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        int32_t var_2c
        edi_1 = edi_2 + var_2c
        var_6c_1 = &var_6c_1[4]
        esi_8 = &var_78_1[4]
        int32_t temp4_1 = var_44_1
        var_44_1 -= 1
        var_78_1 = esi_8
        
        if (temp4_1 == 1)
            break
        
        ebx_1 = arg9
        edx_12 = var_40_1

if (ecx_8 == 0)
    return result

char* var_94_1 = ecx_8
return sub_6b4d5b()
