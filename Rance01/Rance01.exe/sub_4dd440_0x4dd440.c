// 函数: sub_4dd440
// 地址: 0x4dd440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t* esi_2

if (ebx == arg3)
label_4dd4df:
    esi_2 = arg4
else
    while (true)
        esi_2 = arg4
        
        if (esi_2 == arg5)
            break
        
        int32_t* edi_1 = *ebx
        int32_t* esi_1 = *esi_2
        void* ecx_1 = arg7
        bool cond:0_1 = sub_4dc1f0(esi_1, edi_1) == 0
        int32_t** eax_2 = *(ecx_1 + 4)
        
        if (cond:0_1)
            if (eax_2 u>= *(ecx_1 + 8))
                if (eax_2 != 0)
                    *eax_2 = edi_1
                    ecx_1 = arg7
                
                *(ecx_1 + 4) += 4
                *(arg7 + 8) = *(ecx_1 + 4)
            else
                *eax_2 = edi_1
                *(arg7 + 4) += 4
            
            ebx = &ebx[1]
        else if (eax_2 u>= *(ecx_1 + 8))
            if (eax_2 != 0)
                *eax_2 = esi_1
                ecx_1 = arg7
            
            *(ecx_1 + 4) += 4
            arg4 = &arg4[1]
            *(arg7 + 8) = *(ecx_1 + 4)
        else
            *eax_2 = esi_1
            *(arg7 + 4) += 4
            arg4 = &arg4[1]
        
        if (ebx == arg3)
            goto label_4dd4df

int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
void* var_28_2 = arg7
arg2 = &var_38
int32_t var_14
sub_4dd2c0(&var_14, arg3, arg7, ebx)
int32_t eax_8 = var_14

if (eax_8 != 0)
    int32_t var_28_3 = eax_8
    sub_6b4d5b()

var_38 = 0
int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_1 = 0
arg3 = &var_38
void* var_4
void* var_28_4 = var_4
sub_4dd2c0(arg1, arg5, var_4, esi_2)

if (arg6 != 0)
    int32_t var_28_5 = arg6
    sub_6b4d5b()

return arg1
