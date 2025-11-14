// 函数: sub_5ae100
// 地址: 0x5ae100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_18
int32_t eax_1 = data_78c474 ^ &var_18
int32_t eax_2 = *(arg3 + 0x6c)
void* edi = arg2
void* var_14 = edi

if ((eax_2.b & 1) == 0)
    sub_5a5c60(arg3, "Out of place tIME chunk")
    noreturn

int32_t eax_4

if (edi == 0 || (*(edi + 8) & 0x200) == 0)
    if ((eax_2.b & 4) != 0)
        *(arg3 + 0x6c) = eax_2 | 8
    
    if (arg4 == 7)
        int32_t eax_6 = *(arg3 + 0x54)
        
        if (eax_6 == 0)
            sub_5a5c60(arg3, "Call to NULL read function")
            noreturn
        
        char var_c
        int32_t edx = eax_6(arg3, &var_c, 7)
        int32_t ebp_1 = 7
        
        if ((*(arg3 + 0x100) & 0x20000000) != 0)
            edx = *(arg3 + 0x70) & 0x300
            
            if (edx != 0x300)
                goto label_5ae1c4
        else if ((*(arg3 + 0x70) & 0x800) == 0)
        label_5ae1c4:
            int32_t eax_7 = *(arg3 + 0x124)
            char* ebx_1 = &var_c
            int32_t edi_1
            int32_t temp0_1
            
            do
                edi_1 = ebp_1
                
                if (ebp_1 == 0)
                    edi_1 = 0xffffffff
                
                if (ebx_1 != 0)
                    eax_7, edx = sub_59e5d0(eax_7, edx, ebx_1, edi_1)
                else
                    eax_7 = 0
                
                ebx_1 = &ebx_1[edi_1]
                temp0_1 = ebp_1
                ebp_1 -= edi_1
            while (temp0_1 != edi_1)
            edi = var_14
            *(arg3 + 0x124) = eax_7
        
        eax_4 = sub_5ab650(arg3, 0)
        
        if (eax_4 == 0)
            char var_6
            char var_e = var_6
            char var_8
            char var_10 = var_8
            char var_9
            var_14:3.b = var_9
            char var_7
            char var_f = var_7
            char var_a
            var_14:2.b = var_a
            char var_b
            uint16_t edx_3 = zx.w(var_c) * 0x100 + zx.w(var_b)
            var_14.w = edx_3
            int32_t eax_11 = sub_5b0810(&var_14, edx_3.b, edi, arg3)
            sub_6b4885(eax_1 ^ &var_18)
            return eax_11
    else
        sub_5a5de0("Incorrect tIME chunk length", arg3)
        eax_4 = sub_5ab650(arg3, arg4)
else
    sub_5a5de0("Duplicate tIME chunk", arg3)
    eax_4 = sub_5ab650(arg3, arg4)

sub_6b4885(eax_1 ^ &var_18)
return eax_4
