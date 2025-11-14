// 函数: sub_5fbdc0
// 地址: 0x5fbdc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax
int32_t edx

for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
    eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            eax, edx = sub_407bb0(eax, edx, arg2, arg3, arg4)

if (*(arg1 + 0x78) == 0)
    return 

eax = *(arg1 + 0x74)

if (eax != 0xffffffff)
    sub_407bb0(eax, edx, arg2, arg3, arg4)
