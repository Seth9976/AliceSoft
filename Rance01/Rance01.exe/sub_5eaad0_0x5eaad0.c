// 函数: sub_5eaad0
// 地址: 0x5eaad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t** i = *(arg1 + 8)

if (i == *(arg1 + 0xc))
    return 

void* ecx = arg1

do
    int32_t* eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            int32_t var_18_1 = arg4
            int32_t var_1c_1 = arg3
            int32_t edx
            eax, edx = sub_407c70(eax, edx, ecx, arg2)
            ecx = arg1
    
    i = &i[1]
while (i != *(ecx + 0xc))
