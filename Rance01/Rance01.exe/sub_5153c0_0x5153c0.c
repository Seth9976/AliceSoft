// 函数: sub_5153c0
// 地址: 0x5153c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7148b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg4
void* eax_6 = ((ebp[1] - *ebp) s>> 2 << 3) + 0x10
float* var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
sub_65a090(&var_54, eax_6)
int32_t var_4 = 0
float* ebx = var_54
*ebx = fconvert.s(fconvert.t(*arg1))
arg4 = nullptr
ebx[1] = fconvert.s(fconvert.t(arg1[4]))
ebx[2] = fconvert.s(fconvert.t(arg1[8]))
ebx[3] = fconvert.s(fconvert.t(arg1[0xc]))
ebx[4] = fconvert.s(fconvert.t(arg1[1]))
ebx[5] = fconvert.s(fconvert.t(arg1[5]))
ebx[6] = fconvert.s(fconvert.t(arg1[9]))
ebx[7] = fconvert.s(fconvert.t(arg1[0xd]))
ebx[8] = fconvert.s(fconvert.t(arg1[2]))
ebx[9] = fconvert.s(fconvert.t(arg1[6]))
ebx[0xa] = fconvert.s(fconvert.t(arg1[0xa]))
ebx[0xb] = fconvert.s(fconvert.t(arg1[0xe]))
ebx[0xc] = fconvert.s(fconvert.t(arg1[3]))
ebx[0xd] = fconvert.s(fconvert.t(arg1[7]))
ebx[0xe] = fconvert.s(fconvert.t(arg1[0xb]))
ebx[0xf] = fconvert.s(fconvert.t(arg1[0xf]))
int32_t eax_7 = *ebp
int32_t result

if (((ebp[1] - eax_7) & 0xfffffffc) s<= 0)
label_51557d:
    float* var_7c_3 = ebx
    
    if ((*(**(arg2 + 0x154) + 0x20))(0, ebx, (var_50 - ebx) s>> 2 u>> 2) == 0)
        sub_6b4d5b()
        result.b = 0
    else
        sub_6b4d5b()
        result.b = 1
else
    void* edi_1 = &ebx[0x11]
    
    while (true)
        int32_t eax_8 = *(eax_7 + (arg4 << 2))
        
        if (eax_8 s>= 0)
            void* ecx_2 = *arg3
            
            if (eax_8 s< (arg3[1] - ecx_2) s>> 6)
                float* esi_1 = ecx_2 + (eax_8 << 6)
                void var_44
                sub_529cb0(&var_44, esi_1)
                float var_60 = fconvert.s(fconvert.t(esi_1[0xc]))
                float var_5c_1 = fconvert.s(fconvert.t(esi_1[0xd]))
                float var_58_1 = fconvert.s(fconvert.t(esi_1[0xe]))
                void var_34
                sub_4b9930(&var_44, &var_60, &var_34)
                float var_30
                *(edi_1 - 4) = fconvert.s(fconvert.t(var_30))
                void* ecx_6 = arg4 + 1
                edi_1 += 0x20
                float var_2c
                *(edi_1 - 0x20) = fconvert.s(fconvert.t(var_2c))
                arg4 = ecx_6
                float var_28
                *(edi_1 - 0x1c) = fconvert.s(fconvert.t(var_28))
                float var_24
                *(edi_1 - 0x18) = fconvert.s(fconvert.t(var_24))
                float var_20
                *(edi_1 - 0x14) = fconvert.s(fconvert.t(var_20))
                float var_1c
                *(edi_1 - 0x10) = fconvert.s(fconvert.t(var_1c))
                float var_18
                *(edi_1 - 0xc) = fconvert.s(fconvert.t(var_18))
                float var_14
                *(edi_1 - 8) = fconvert.s(fconvert.t(var_14))
                eax_7 = *ebp
                
                if (ecx_6 s>= (ebp[1] - eax_7) s>> 2)
                    goto label_51557d
                
                continue
        
        float* var_7c_4 = ebx
        break
    
    sub_6b4d5b()
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
