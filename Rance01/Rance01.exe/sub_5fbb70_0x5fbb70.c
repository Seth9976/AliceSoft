// 函数: sub_5fbb70
// 地址: 0x5fbb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2 + 1

if (*(arg1 + 0x74) == 0xffffffff)
    ebx = arg2

for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
    void** eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            sub_409560(eax, ebx)

if (*(arg1 + 0x78) == 0)
    return 

int32_t* ecx_2 = *(arg1 + 0x74)

if (ecx_2 != 0xffffffff)
    sub_409560(ecx_2, arg2)
