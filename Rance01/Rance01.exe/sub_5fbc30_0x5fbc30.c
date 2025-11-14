// 函数: sub_5fbc30
// 地址: 0x5fbc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg2 + 0x50); i != *(arg2 + 0x54); i = &i[1])
    void** eax = *i
    
    if (eax[1] != 0)
        eax = *eax
        
        if (eax != 0xffffffff)
            int32_t* ecx_1 = arg1
            
            if (arg1 s< 0)
                ecx_1 = nullptr
            else if (arg1 s> 0xff)
                ecx_1 = 0xff
            
            sub_409650(ecx_1, eax)

if (*(arg2 + 0x78) == 0)
    return 

int32_t ebx_1 = *(arg2 + 0x74)

if (ebx_1 == 0xffffffff)
    return 

int32_t* ecx_2 = arg1

if (arg1 s< 0)
    sub_409650(nullptr, ebx_1)
    return 

if (arg1 s> 0xff)
    ecx_2 = 0xff

sub_409650(ecx_2, ebx_1)
