// 函数: sub_5f0810
// 地址: 0x5f0810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t* i = *(arg1 + 0x324)
void* var_4 = arg1

for (; i != *(arg1 + 0x328); i = &i[1])
    int32_t* eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            int32_t edx
            eax, edx = sub_407bb0(eax, edx, arg2, arg3, arg4)
            arg1 = var_4
