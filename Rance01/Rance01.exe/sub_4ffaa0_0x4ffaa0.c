// 函数: sub_4ffaa0
// 地址: 0x4ffaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg4
int32_t ebx
int32_t var_18 = ebx
int32_t* ebp = arg5

if (arg2 != ecx)
    while (ebp != arg6)
        void* eax = *arg2
        void* esi_1 = *ebp
        int32_t ecx_1 = *(esi_1 + 0x1c)
        int32_t edi_1 = *(eax + 0x1c)
        
        if (ecx_1 s< edi_1)
        label_4ffafb:
            void* ecx_3 = arg8
            void** eax_1 = *(ecx_3 + 4)
            
            if (eax_1 u>= *(ecx_3 + 8))
                if (eax_1 != 0)
                    *eax_1 = esi_1
                    ecx_3 = arg8
                
                *(ecx_3 + 4) += 4
                *(arg8 + 8) = *(ecx_3 + 4)
                ebp = &ebp[1]
            else
                *eax_1 = esi_1
                *(arg8 + 4) += 4
                ebp = &ebp[1]
        else
            if (ecx_1 s<= edi_1)
                int32_t ecx_2 = *(esi_1 + 0x20)
                int32_t edi_2 = *(eax + 0x20)
                
                if (ecx_2 s< edi_2)
                    goto label_4ffafb
                
                if (ecx_2 s<= edi_2)
                    ecx_2.b = *(esi_1 + 0x7b)
                    ebx.b = *(eax + 0x7b)
                    
                    if (ecx_2.b u< ebx.b)
                        goto label_4ffafb
                    
                    if (ecx_2.b u<= ebx.b)
                        ecx_2.b = *(esi_1 + 0x26)
                        
                        if (ecx_2.b u< *(eax + 0x26))
                            goto label_4ffafb
            
            void* esi_2 = arg8
            void** ecx_5 = *(esi_2 + 4)
            
            if (ecx_5 u>= *(esi_2 + 8))
                if (ecx_5 != 0)
                    *ecx_5 = eax
                    esi_2 = arg8
                
                *(esi_2 + 4) += 4
                *(arg8 + 8) = *(esi_2 + 4)
            else
                *ecx_5 = eax
                *(arg8 + 4) += 4
            
            arg2 = &arg2[1]
        
        ecx = arg4
        
        if (arg2 == ecx)
            break

int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
arg4 = &var_38
void* var_28 = arg8
int32_t var_14
sub_4dd2c0(&var_14, ecx, ecx, arg2)
int32_t eax_7 = var_14

if (eax_7 != 0)
    int32_t var_28_1 = eax_7
    sub_6b4d5b()

var_38 = 0
int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_1 = 0
void* var_4
void* var_28_2 = var_4
arg4 = &var_38
sub_4dd2c0(arg3, arg6, var_4, ebp)

if (arg7 != 0)
    int32_t var_28_3 = arg7
    sub_6b4d5b()

return arg3
