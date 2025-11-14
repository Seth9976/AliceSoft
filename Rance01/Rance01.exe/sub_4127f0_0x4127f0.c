// 函数: sub_4127f0
// 地址: 0x4127f0
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
    edx_1:eax_2 = sx.q(arg7)
    int32_t eax_4 = (eax_2 - edx_1) s>> 1
    
    if (ebx_1 s>= eax_4)
        ebx_1 = eax_4 - 1
        arg9 = ebx_1
else
    ebx_1 = 1
    arg9 = ebx_1

char* edi_1 = (*(*arg1 + 8))(arg2, arg3)
char* var_28 = (*(*arg1 + 0x1c))() - (arg7 << 2)
char* eax_13 = (*(*arg4 + 8))(arg5, arg6)
int32_t result_2 = (*(*arg4 + 0x1c))()
var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
sub_404f60(ebx_1 * 0x1fe + 0x100, &var_28)
char* ecx_7 = var_28
int32_t result = var_24 - ecx_7
int32_t edx_7 = 0
int32_t var_54_1 = 0
int32_t result_1 = result

if (result s> 0)
    do
        result = divs.dp.d(sx.q(edx_7), ebx_1 * 2 + 1)
        edx_7 = var_54_1 + 1
        var_54_1 = edx_7
        ecx_7[edx_7 - 1] = result.b
    while (edx_7 s< result_1)

if (arg8 s> 0)
    int32_t eax_22 = arg7 - ebx_1
    void* edx_13 = (arg7 - ebx_1 * 2) * 4
    char* var_78_1 = eax_13
    int32_t var_5c
    void* eax_25 = var_5c - edx_13 - 4
    void* eax_26 = 1 - edx_13
    char* var_70_1 = &eax_13[var_5c - 2]
    void* esi_9 = (ebx_1 << 2) + 4 - edx_13
    void* eax_27 = 2 - edx_13
    char* esi_10 = var_78_1
    void* var_44_1 = edx_13
    int32_t var_48 = arg8
    
    while (true)
        void* edx_14 = edx_13 + esi_10
        int32_t var_74_1 = 0
        int32_t var_6c_1
        __builtin_memset(&var_6c_1, 0, 0x14)
        char* var_7c_1 = esi_10
        int32_t eax_30 = zx.d(*esi_10) * ebx_1
        int32_t esi_13 = zx.d(*(edx_14 + eax_26)) * ebx_1
        int32_t edx_16 = zx.d(*(edx_14 + eax_27)) * arg9
        int32_t ebx_3 = arg9
        int32_t var_80_1 = edx_16
        uint32_t var_4c_1 = 0
        
        if (ebx_3 s>= 0)
            int32_t var_68_1
            int32_t var_64_1
            int32_t var_60_1
            int32_t var_5c_1
            
            if (ebx_3 + 1 s>= 2)
                uint32_t i_8 = (ebx_3 + 1) u>> 1
                uint32_t i_4 = i_8
                var_4c_1 = i_8 * 2
                uint32_t i
                
                do
                    var_60_1 += zx.d(*var_7c_1)
                    var_68_1 += zx.d(var_7c_1[1])
                    var_74_1 += zx.d(var_7c_1[2])
                    var_5c_1 += zx.d(var_7c_1[4])
                    var_64_1 += zx.d(var_7c_1[5])
                    var_6c_1 += zx.d(var_7c_1[6])
                    var_7c_1 = &var_7c_1[8]
                    i = i_4
                    i_4 -= 1
                while (i != 1)
                ebx_3 = arg9
            
            if (var_4c_1 s<= ebx_3)
                eax_30 += zx.d(*var_7c_1)
                esi_13 += zx.d(var_7c_1[1])
                var_80_1 += zx.d(var_7c_1[2])
            
            var_80_1 += var_74_1 + var_6c_1
            esi_13 += var_68_1 + var_64_1
            eax_30 += var_60_1 + var_5c_1
            edx_16 = var_80_1
        
        *edi_1 = ecx_7[eax_30]
        edi_1[1] = ecx_7[esi_13]
        edx_16.b = ecx_7[edx_16]
        edi_1[2] = edx_16.b
        void* edi_2 = &edi_1[4]
        void* var_7c_2 = esi_9 + edx_14
        int32_t i_9 = arg9
        
        if (i_9 s>= 1)
            int32_t i_5 = i_9
            int32_t i_1
            
            do
                eax_30 += zx.d(*var_7c_2) - zx.d(*var_78_1)
                esi_13 += zx.d(*(var_7c_2 + 1)) - zx.d(var_78_1[1])
                uint32_t ebx_13 = zx.d(*(var_7c_2 + 2))
                var_7c_2 += 4
                int32_t edx_51 = var_80_1 + ebx_13 - zx.d(var_78_1[2])
                *edi_2 = ecx_7[eax_30]
                *(edi_2 + 1) = ecx_7[esi_13]
                var_80_1 = edx_51
                edx_51.b = ecx_7[edx_51]
                *(edi_2 + 2) = edx_51.b
                edi_2 += 4
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            i_9 = arg9
        
        int32_t ebx_28 = eax_22
        
        if (i_9 + 1 s< ebx_28)
            void* var_74_2 = &var_78_1[2]
            void* var_7c_3 = &var_78_1[(arg9 << 3) + 6]
            int32_t i_6 = eax_22 - (arg9 + 1)
            int32_t i_2
            
            do
                eax_30 += zx.d(*(var_7c_3 - 2)) - zx.d(*(var_74_2 - 2))
                esi_13 += zx.d(*(var_7c_3 - 1)) - zx.d(*(var_74_2 - 1))
                uint32_t ebx_24 = zx.d(*var_7c_3)
                uint32_t edx_65 = zx.d(*var_74_2)
                var_7c_3 += 4
                var_74_2 += 4
                int32_t edx_67 = var_80_1 + ebx_24 - edx_65
                *edi_2 = ecx_7[eax_30]
                *(edi_2 + 1) = ecx_7[esi_13]
                var_80_1 = edx_67
                edx_67.b = ecx_7[edx_67]
                *(edi_2 + 2) = edx_67.b
                edi_2 += 4
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            ebx_28 = eax_22
        
        void* var_74_3 = edx_14
        
        if (ebx_28 s< arg7)
            int32_t i_7 = arg7 - ebx_28
            int32_t i_3
            
            do
                eax_30 += zx.d(*(edx_14 + eax_25)) - zx.d(*var_74_3)
                uint32_t ebx_34 = zx.d(var_70_1[0xffffffff]) - zx.d(*(var_74_3 + 1))
                uint32_t edx_77 = zx.d(*(var_74_3 + 2))
                var_74_3 += 4
                esi_13 += ebx_34
                int32_t edx_79 = var_80_1 + zx.d(*var_70_1) - edx_77
                *edi_2 = ecx_7[eax_30]
                *(edi_2 + 1) = ecx_7[esi_13]
                var_80_1 = edx_79
                edx_79.b = ecx_7[edx_79]
                *(edi_2 + 2) = edx_79.b
                edi_2 += 4
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        result = result_2
        int32_t var_30
        edi_1 = edi_2 + var_30
        var_70_1 = &var_70_1[result]
        esi_10 = &var_78_1[result]
        int32_t temp4_1 = var_48
        var_48 -= 1
        var_78_1 = esi_10
        
        if (temp4_1 == 1)
            break
        
        ebx_1 = arg9
        edx_13 = var_44_1

if (ecx_7 == 0)
    return result

char* var_94_1 = ecx_7
return sub_6b4d5b()
