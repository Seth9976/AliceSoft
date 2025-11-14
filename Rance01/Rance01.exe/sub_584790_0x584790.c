// 函数: sub_584790
// 地址: 0x584790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
void* ebp = arg1
void* var_4 = ebp
int16_t x87control
char eax = sub_584430(ebp, x87control)

if (eax == 0)
    return eax

int32_t ebx = arg2
int32_t eax_1 = ebx + 0x100
int32_t ecx_1 = arg3 * 2

if (eax_1 s<= ecx_1)
    eax_1 = ecx_1

*(ebp + 0x1c) = 0
sub_65a090(ebp + 0xc, eax_1)
int32_t eax_2

if (sub_5845d0(ebp + 0x20, arg3, ebx).b != 0)
    int32_t ecx_2
    eax_2, ecx_2 = sub_5845d0(ebp + 0x2c, arg3, ebx)
    
    if (eax_2.b != 0)
        int32_t esi_4 = 0
        
        if (arg3 s> 0)
            do
                int32_t ebx_1 = 0
                
                if (arg2 s> 0)
                    do
                        int32_t ebp_1 = *(ebp + 0x20)
                        int32_t eax_4 = sub_6b5a79() & 0x800000ff
                        
                        if (eax_4 s< 0)
                            eax_4 = ((eax_4 - 1) | 0xffffff00) + 1
                        
                        *(*(ebp_1 + (esi_4 << 2)) + (ebx_1 << 2)) = eax_4 + ebx_1
                        ebp = var_4
                        ebx_1 += 1
                        *(*(*(var_4 + 0x2c) + (esi_4 << 2)) + (ebx_1 << 2) - 4) =
                            mods.dp.d(sx.q(sub_6b5a79()), arg3) + arg3
                    while (ebx_1 s< arg2)
                
                esi_4 += 1
            while (esi_4 s< arg3)
            
            ebx = arg2
        
        *(ebp + 0x48) = arg3
        *(ebp + 0x44) = ebx
        eax_2.b = 1
        return eax_2

eax_2.b = 0
return eax_2
