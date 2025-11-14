// 函数: sub_405410
// 地址: 0x405410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3
char* edi = arg4
int32_t* ecx = esi

if (esi != edi)
    int32_t ebx_1 = arg1[1]
    
    while (edi != ebx_1)
        sub_401ef0(esi, edi)
        edi = &edi[0x1c]
        esi = &esi[7]
    
    sub_405780(esi, arg1[1])
    arg1[1] = esi

*arg2 = ecx
return arg2
