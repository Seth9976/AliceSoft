// 函数: sub_5840f0
// 地址: 0x5840f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t x87control
char eax = sub_584430(arg1, x87control)

if (eax == 0)
    return eax

int32_t ecx = arg2

if (arg2 s<= arg3)
    ecx = arg3

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(ecx)
*(arg1 + 0x1c) = (eax_2 - edx) s>> 1
sub_65a090(arg1 + 0xc, ecx * 2)
int32_t eax_6

if (sub_5845d0(arg1 + 0x20, arg3, arg2).b != 0 && sub_5845d0(arg1 + 0x2c, arg3, arg2).b != 0)
    int32_t edi_1 = 0
    
    if (arg3 s> 0)
        do
            int32_t ebx_1 = 0
            
            if (arg2 s> 0)
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = sx.q(arg2)
                int32_t eax_12
                int32_t edx_2
                edx_2:eax_12 = sx.q(arg3)
                int32_t eax_14 = (eax_12 - edx_2) s>> 1
                int32_t eax_16
                int32_t edx_3
                edx_3:eax_16 = sx.q(arg2)
                int32_t esi_5 = neg.d((eax_16 - edx_3) s>> 1)
                
                do
                    int32_t eax_20
                    int32_t edx_4
                    edx_4:eax_20 = sx.q(sub_6b5a79())
                    int32_t eax_21 = esi_5
                    ebx_1 += 1
                    esi_5 += 1
                    int32_t eax_23
                    int32_t edx_6
                    edx_6:eax_23 = sx.q(eax_21 * (mods.dp.d(edx_4:eax_20, 9) + 8))
                    *(*(*(arg1 + 0x20) + (edi_1 << 2)) + (ebx_1 << 2) - 4) =
                        (((edx_6 & 7) + eax_23) s>> 3) + ((eax_8 - edx_1) s>> 1)
                    int32_t eax_29
                    int32_t edx_11
                    edx_11:eax_29 = sx.q((edi_1 - eax_14) * (mods.dp.d(edx_4:eax_20, 9) + 8))
                    *(*(*(arg1 + 0x2c) + (edi_1 << 2)) + (ebx_1 << 2) - 4) =
                        (((edx_11 & 7) + eax_29) s>> 3) + eax_14
                while (ebx_1 s< arg2)
            
            edi_1 += 1
        while (edi_1 s< arg3)
    
    *(arg1 + 0x44) = arg2
    *(arg1 + 0x48) = arg3
    eax_6.b = 1
    return eax_6

eax_6.b = 0
return eax_6
