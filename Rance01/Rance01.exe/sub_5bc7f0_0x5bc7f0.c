// 函数: sub_5bc7f0
// 地址: 0x5bc7f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1[2]
int32_t esi = arg3
int32_t ebx_1 = arg1[1] i- 6

if (ebx_1 s> 0)
    arg1 = sub_5bc530(esi, edx, arg2)

int32_t ebx_2 = ebx_1 - 1
int32_t ecx_2 = 1
int32_t i_3 = 2
int32_t var_c = 1
int32_t var_8 = ebx_2
int32_t i_4 = 2

if (ebx_2 s> 0)
    while (true)
        if (i_3 s> 0)
            void* ebx_3 = arg2
            int32_t esi_1 = esi s>> ecx_2.b
            int32_t i
            
            do
                sub_5bc680(arg1, edx, esi_1, ebx_3, 4 << ecx_2.b)
                arg1 = esi_1 << 2
                ebx_3 += arg1
                i = i_3
                i_3 -= 1
            while (i != 1)
            esi = arg3
            ebx_2 = var_8
            ecx_2 = var_c
            i_3 = i_4
        
        ecx_2 += 1
        ebx_2 -= 1
        var_c = ecx_2
        i_4 = rol.d(i_3, 1)
        var_8 = ebx_2
        
        if (ebx_2 s<= 0)
            break
        
        i_3 = i_4

if (esi s<= 0)
    return 

float* edi_3 = arg2
int32_t i_2 = ((esi - 1) u>> 5) + 1
int32_t i_1

do
    sub_5bc300(edi_3)
    edi_3 -= 0xffffff80
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
