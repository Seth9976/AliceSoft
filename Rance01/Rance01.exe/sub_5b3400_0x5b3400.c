// 函数: sub_5b3400
// 地址: 0x5b3400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = *arg1
int32_t edi = arg2
char* result = &ecx[3]

if (edi s> 1)
    int32_t i_3 = edi - 1
    int32_t i
    
    do
        char edx_1 = *ecx - *result
        result = &result[3]
        result[0xfffffffd] = edx_1
        char edx_2 = ecx[1] - result[0xfffffffe]
        ecx = &ecx[3]
        result[0xfffffffe] = edx_2
        i = i_3
        i_3 -= 1
        result[0xffffffff] = ecx[0xffffffff] - result[0xffffffff]
    while (i != 1)

if (arg3 s> 1)
    int32_t edx_4 = edi * 3
    int32_t i_4 = arg3 - 1
    int32_t var_4_1 = edx_4
    int32_t ebp_1 = edx_4
    arg3 = 0
    int32_t i_2 = i_4
    int32_t i_1
    
    do
        void* ecx_1 = *arg1
        char* ecx_2 = ecx_1 + arg3
        result = ecx_1 + ebp_1 + 3
        void* ecx_3 = &ecx_2[3]
        result[0xfffffffd] = *ecx_2 - result[0xfffffffd]
        void* esi_1 = &result[0xfffffffd]
        result[0xfffffffe] = *(ecx_3 - 2) - result[0xfffffffe]
        result[0xffffffff] = *(ecx_3 - 1) - result[0xffffffff]
        
        if (edi s> 1)
            int32_t j_1 = edi - 1
            int32_t j
            
            do
                char edx_7 = ((zx.d(*esi_1) + zx.d(*ecx_3)) s>> 1).b - *result
                result = &result[3]
                result[0xfffffffd] = edx_7
                char edx_10 =
                    ((zx.d(*(esi_1 + 1)) + zx.d(*(ecx_3 + 1))) s>> 1).b - result[0xfffffffe]
                ecx_3 += 3
                result[0xfffffffe] = edx_10
                char edx_13 =
                    ((zx.d(*(esi_1 + 2)) + zx.d(*(ecx_3 - 1))) s>> 1).b - result[0xffffffff]
                esi_1 += 3
                j = j_1
                j_1 -= 1
                result[0xffffffff] = edx_13
            while (j != 1)
            edi = arg2
            edx_4 = var_4_1
        
        arg3 += edx_4
        ebp_1 += edx_4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
