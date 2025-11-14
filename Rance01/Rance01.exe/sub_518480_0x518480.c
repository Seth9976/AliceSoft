// 函数: sub_518480
// 地址: 0x518480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i = *(arg1 + 8)
int32_t edi
int32_t var_24 = edi

for (; i != *(arg1 + 0xc); i += 0xac)
    *(i + 0x98) = 0

int32_t ebp = 0
int32_t i_2 = 0

if ((*(arg1 + 0x34) - *(arg1 + 0x30)) s/ 0x3c - 1 s<= 0)
    return 

int32_t var_10_1 = 0
int32_t i_1

do
    void* ebp_1 = ebp + *(arg1 + 0x30)
    long double x87_r7_1 = float.t(0)
    float var_c = fconvert.s(x87_r7_1)
    float var_8_1 = fconvert.s(x87_r7_1)
    float var_4_1 = fconvert.s(x87_r7_1)
    char eax_4
    int80_t st0_1
    st0_1, eax_4 = sub_4b49a0(ebp_1, arg1 + 4, ebp_1 + 0x3c, &var_c)
    
    if (eax_4 != 0)
        int32_t edi_2 = *(ebp_1 + 0x28)
        
        if (edi_2 s>= 0)
            int32_t eax_5
            int32_t edx_3
            edx_3:eax_5 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
            int32_t edx_4 = edx_3 s>> 5
            
            if (edi_2 s< (edx_4 u>> 0x1f) + edx_4)
                *(edi_2 * 0xac + *(arg1 + 8) + 0x98) = 1
        
        int32_t edi_4 = *(ebp_1 + 0x64)
        
        if (edi_4 s>= 0)
            int32_t eax_6
            int32_t edx_6
            edx_6:eax_6 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
            int32_t edx_7 = edx_6 s>> 5
            
            if (edi_4 s< (edx_7 u>> 0x1f) + edx_7)
                *(edi_4 * 0xac + *(arg1 + 8) + 0x98) = 1
        
        sub_5185b0(arg1, *(ebp_1 + 0x28), &var_c)
    
    i_1 = i_2 + 1
    ebp = var_10_1 + 0x3c
    i_2 = i_1
    var_10_1 = ebp
while (i_1 s< (*(arg1 + 0x34) - *(arg1 + 0x30)) s/ 0x3c - 1)
