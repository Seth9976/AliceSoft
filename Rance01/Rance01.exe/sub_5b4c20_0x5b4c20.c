// 函数: sub_5b4c20
// 地址: 0x5b4c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 u> 0x20)
    return 0xffffffff

int32_t eax = arg1[4]
int32_t esi = arg1[1]
int32_t edi = *arg1
int32_t edx = arg2 + esi

if (edi s>= eax - 4)
    if (edi s> eax - ((edx + 7) s>> 3))
        return 0xffffffff
    
    if (edx == 0)
        return 0

char* edi_1 = arg1[3]
arg1.b = arg1[1].b
uint32_t eax_5 = zx.d(*edi_1) u>> arg1.b

if (edx s> 8)
    eax_5 |= zx.d(edi_1[1]) << (8 - esi.b)
    
    if (edx s> 0x10)
        eax_5 |= zx.d(edi_1[2]) << (0x10 - esi.b)
        
        if (edx s> 0x18)
            eax_5 |= zx.d(edi_1[3]) << (0x18 - esi.b)
            
            if (edx s> 0x20 && esi != 0)
                eax_5 |= zx.d(edi_1[4]) << (0x20 - esi.b)

return eax_5 & *((arg2 << 2) + &data_745e00)
