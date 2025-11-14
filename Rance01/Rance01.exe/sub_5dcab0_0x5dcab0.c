// 函数: sub_5dcab0
// 地址: 0x5dcab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_44
int32_t result = data_78c474 ^ &var_44
int32_t result_1 = result
HDC ebp = *(arg2 + 0x20)
int32_t* edi = arg1
int32_t* var_34 = edi

if (ebp != 0)
    int32_t eax_1 = *(arg2 + 8)
    RECT lprc
    lprc.left = 0
    lprc.top = 0
    lprc.right = *(arg2 + 4)
    lprc.bottom = eax_1
    FillRect(ebp, &lprc, GetStockObject(WHITE_BRUSH))
    HGDIOBJ h = SelectObject(ebp, *(arg2 + 0x34))
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(*(arg2 + 0x38))
    BOOL eax_8 = *(arg2 + 0x60) - ((eax_5 - edx_2) s>> 1) * arg3
    int32_t ebx_3 = (edi[1] - *edi) s>> 2
    BOOL var_2c_1 = eax_8
    int32_t var_3c_1 = 0
    int32_t var_40_1 = 0
    
    if (arg5 s> 0)
        int32_t ecx_3 = arg4
        int32_t var_38_1 = ecx_3
        
        do
            if (ecx_3 s>= 0)
                if (ecx_3 s>= ebx_3)
                    break
                
                int32_t edx_3 = *edi
                void** ecx_4
                
                if (ecx_3 s>= (edi[1] - edx_3) s>> 2)
                    ecx_4 = nullptr
                else
                    ecx_4 = *(edx_3 + (ecx_3 << 2))
                
                sub_5dcbf0(ecx_4, arg2, ebp, eax_8, var_3c_1)
                var_3c_1 += *(arg2 + 0x38)
                eax_8 = var_2c_1
                edi = var_34
                ecx_3 = var_38_1
            
            var_40_1 += 1
            ecx_3 += 1
            var_38_1 = ecx_3
        while (var_40_1 s< arg5)
    
    SelectObject(ebp, h)
    RECT lprc_1
    lprc_1.left = 0
    lprc_1.right = *(arg2 + 0x60)
    lprc_1.top = 0
    lprc_1.bottom = eax_1
    result = FillRect(ebp, &lprc_1, GetStockObject(WHITE_BRUSH))

sub_6b4885(result_1 ^ &var_44)
return result
