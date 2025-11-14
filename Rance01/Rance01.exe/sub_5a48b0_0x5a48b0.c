// 函数: sub_5a48b0
// 地址: 0x5a48b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint8_t var_c
int32_t eax_1 = data_78c474 ^ &var_c
var_c = (arg3 u>> 0x18).b
uint8_t var_b = (arg3 u>> 0x10).b
uint8_t var_a = (arg3 u>> 8).b
char var_9 = arg3.b

if (arg2 != 0)
    int32_t ecx_6 = *(arg2 + 0x248)
    
    if (ecx_6 s> 0)
        int32_t edx = *(arg2 + 0x24c)
        int32_t* eax_4 = ecx_6 * 5 + edx
        
        do
            eax_4 -= 5
            
            if (var_c.d == *eax_4)
                uint32_t result = zx.d(eax_4[1].b)
                sub_6b4885(eax_1 ^ &var_c)
                return result
        while (eax_4 u> edx)

sub_6b4885(eax_1 ^ &var_c)
return 0
