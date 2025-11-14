// 函数: sub_571500
// 地址: 0x571500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
int32_t* edi = arg4
int32_t* ecx = esi

if (esi != edi)
    int32_t ebx_1 = arg1[1]
    
    while (edi != ebx_1)
        *esi = *edi
        sub_4adaf0(&esi[1], &edi[1])
        edi = &edi[5]
        esi = &esi[5]
    
    int32_t edx_1 = arg1[1]
    int32_t var_14_2 = edx_1
    sub_5325a0(esi, edx_1)
    arg1[1] = esi

*arg2 = ecx
return arg2
