// 函数: sub_6fc920
// 地址: 0x6fc920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t edx = *(arg1 + 8)
int32_t ebp = ebx * 2 + 6
void var_48
void* var_4c = &var_48
sub_6fb760(0xda, &var_4c)
sub_6fb780(ebp, &var_4c)
void* edx_1 = var_4c
var_4c = edx_1 + 1
*edx_1 = ebx.b

if (ebx == 1)
    void* ecx_5 = var_4c
    var_4c = ecx_5 + 1
    *ecx_5 = 0
    void* esi_13 = var_4c
    var_4c = esi_13 + 1
    *esi_13 = 0
else
    void* ecx = var_4c
    var_4c = ecx + 1
    *ecx = 1
    char eax_3 = (*arg3 << 4) + *arg4
    void* ecx_1 = var_4c
    var_4c = ecx_1 + 1
    *ecx_1 = eax_3
    void* i = 2
    
    if (ebx s>= 2)
        if (ebx - 2 s>= 4)
            int32_t var_20_1 = 3
            int32_t var_24_1 = 4
            
            do
                void* esi_3 = var_4c
                var_4c = esi_3 + 1
                *esi_3 = i.b
                char ebx_3 = (*(arg3 + i - 1) << 4) + *(arg4 + i - 1)
                void* esi_4 = var_4c
                var_4c = esi_4 + 1
                *esi_4 = ebx_3
                void* esi_5 = var_4c
                var_4c = esi_5 + 1
                *esi_5 = var_20_1.b
                char ebx_7 = (*(arg3 + i) << 4) + *(arg4 + i)
                void* esi_6 = var_4c
                var_4c = esi_6 + 1
                *esi_6 = ebx_7
                void* esi_7 = var_4c
                var_4c = esi_7 + 1
                *esi_7 = var_24_1.b
                char ebx_11 = (*(arg3 + i + 1) << 4) + *(arg4 + i + 1)
                void* esi = var_4c
                var_4c = esi + 1
                i += 3
                *esi = ebx_11
                var_20_1 += 3
                var_24_1 += 3
            while (i s<= ebx - 4)
            
            ebx = arg2
        
        do
            char* edx_7 = var_4c
            var_4c = &edx_7[1]
            *edx_7 = i.b
            char edx_10 = (*(arg3 + i - 1) << 4) + *(arg4 + i - 1)
            void* esi_11 = var_4c
            var_4c = esi_11 + 1
            i += 1
            *esi_11 = edx_10
        while (i s<= ebx)

void* ecx_4 = var_4c
var_4c = ecx_4 + 1
*ecx_4 = 0
void* esi_12 = var_4c
var_4c = esi_12 + 1
*esi_12 = 0x3f
void* edx_12 = var_4c
var_4c = edx_12 + 1
*edx_12 = 0
return (*(edx + 0x5c))(&var_48, ebp + 2, arg1)
