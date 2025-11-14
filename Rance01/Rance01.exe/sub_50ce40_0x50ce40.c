// 函数: sub_50ce40
// 地址: 0x50ce40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2

if ((*(*arg1 + 0x18))() != 0x20)
    int32_t eax
    eax.b = 0
    return eax

int32_t j_2 = (*(*arg1 + 0x10))()
char* eax_3 = (*(*arg1 + 0x14))()
int32_t i = 0
arg2.d = eax_3

if (eax_3 s> 0)
    do
        eax_3 = (*(*arg1 + 8))(0, i)
        
        if (j_2 s> 0)
            eax_3 = &eax_3[3]
            int32_t j_1 = j_2
            int32_t j
            
            do
                *eax_3 = ebx.b
                eax_3 = &eax_3[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i += 1
    while (i s< arg2.d)

eax_3.b = 1
return eax_3
