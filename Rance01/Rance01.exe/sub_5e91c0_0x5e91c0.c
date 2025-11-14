// 函数: sub_5e91c0
// 地址: 0x5e91c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == 0 || arg1[3] == 0 || *arg1 == 0xffffffff)
    arg1.b = 0
    return arg1

int32_t arg_4
int32_t arg_8
int32_t j_3
int32_t i_3
sub_5e87c0(arg1, &arg_4, &arg_8, &j_3, &i_3)
int32_t i_2 = i_3
int32_t ebp = arg_8

if (sub_5e8700(arg1, arg_4, ebp, j_3, i_2) != 0)
    return 0

int32_t* eax_4 = sub_5e81e0(arg1)
char* esi_1 = (*(*eax_4 + 8))(arg_4, ebp)
int32_t eax_8 = (*(*eax_4 + 0x1c))()
int32_t j_2 = j_3

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                uint8_t ecx_9 = ((zx.d(*esi_1) * 0x75 + zx.d(esi_1[2]) * 0x132
                    + zx.d(esi_1[1]) * 0x259) u>> 0xa).b
                *esi_1 = ecx_9
                esi_1[1] = ecx_9
                esi_1[2] = ecx_9
                esi_1 = &esi_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi_1 = &esi_1[eax_8 - (j_2 << 2)]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t eax_9
eax_9.b = 1
return eax_9
