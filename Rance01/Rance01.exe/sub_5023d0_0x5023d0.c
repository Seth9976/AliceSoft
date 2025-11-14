// 函数: sub_5023d0
// 地址: 0x5023d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1
int32_t eax_1 = data_78c474 ^ &result_1
void* esi = arg3
int32_t i_2 = (arg4 - esi) s/ 0xb4
int32_t result_2 = (arg5 - esi) s/ 0xb4
int32_t result = result_2
void* var_bc = esi
result_1 = result
int32_t i_1 = i_2

if (i_2 != 0)
    int32_t i
    
    do
        i = mods.dp.d(sx.q(result), i_1)
        result_1 = i_1
        result = result_1
        i_1 = i
    while (i != 0)

if (result s< result_2 && result s> 0)
    int32_t ecx_7 = i_2 * 0xb4
    void* edi_2 = result * 0xb4 + esi
    int32_t var_c0_1 = ecx_7
    void* var_c4_1 = edi_2
    
    while (true)
        void* eax_5 = edi_2 + ecx_7
        
        if (eax_5 != arg5)
            esi = eax_5
        
        do
            int32_t (__fastcall* var_dc_1)(struct sealengine::CPolyVertex::VTable** arg1) =
                sub_503520
            void var_b8
            sub_4fed00(esi, 
                sub_4fed00(edi_2, sub_6b53ec(&var_b8, edi_2, 0x3c, 3, sub_4fe0b0), esi), &var_b8)
            sub_6b54b3(&var_b8, 0x3c, 3, sub_503520)
            int32_t eax_11 = (arg5 - esi) s/ 0xb4
            edi_2 = esi
            
            if (i_2 s>= eax_11)
                esi = (i_2 - eax_11) * 0xb4 + var_bc
            else
                esi += var_c0_1
        while (esi != var_c4_1)
        
        var_c4_1 -= 0xb4
        result = result_1 - 1
        result_1 = result
        
        if (result s<= 0)
            break
        
        edi_2 = var_c4_1
        ecx_7 = var_c0_1
        esi = var_bc

sub_6b4885(eax_1 ^ &result_1)
return result
