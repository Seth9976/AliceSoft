// 函数: sub_4c5860
// 地址: 0x4c5860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x1d0)
int32_t* ebx = arg2

if (eax == 0)
    eax.b = 0
    return eax

int32_t* esi = *(eax + 0x30)
int32_t* i = *esi
int32_t edi = 0
arg2 = i

for (; i != esi; i = arg2)
    if (edi == ebx)
        i = i[4]
        
        if (i == 0)
            break
        
        sub_401180(arg3, 0xffffffff, i, 0)
        int32_t* eax_2
        eax_2.b = 1
        return eax_2
    
    edi += 1
    sub_5cc250(&arg2)

i.b = 0
return i
