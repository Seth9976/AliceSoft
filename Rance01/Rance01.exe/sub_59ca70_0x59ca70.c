// 函数: sub_59ca70
// 地址: 0x59ca70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg3
int32_t* edi = arg4
void* ecx = esi

if (esi != edi)
    int32_t ebx_1 = *(arg1 + 4)
    
    while (edi != ebx_1)
        sub_4b55f0(esi, edi)
        sub_4ea570(esi + 0x10, &edi[4])
        edi = &edi[8]
        esi += 0x20
    
    int32_t edx_1 = *(arg1 + 4)
    void** var_14_3 = arg2
    int32_t var_18_1 = edx_1
    sub_59cce0(esi, edx_1)
    *(arg1 + 4) = esi

*arg2 = ecx
return arg2
