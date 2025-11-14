// 函数: sub_5900d0
// 地址: 0x5900d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_10
int32_t* ebx = arg_10
int32_t eax_3
eax_3.b = arg4 != 0
void* ebp_1 = ebx & 0xffffff
int32_t ecx
ecx.b = ebp_1 != 0xffffff
int32_t edx_1 = arg3 & 0xffffff
int32_t* edx_2
edx_2.b = edx_1 != 0
arg_10 = edx_2
char arg_c
int32_t edx_3
edx_3.b = arg_c != 0
uint32_t edi_1 = ebx u>> 0x18
arg_c.d = edx_3
int32_t edx_4
edx_4.b = edi_1 != 0xff
void* ecx_2 = &arg1[0x18]
int32_t esi_10 = (((((((((eax_3 * 2) | ecx) * 2) | arg_10) * 2) | arg_c.d) * 2) | edx_4) * 4) | arg2
arg_c.d = esi_10
sub_591420(ecx_2, &arg_10, &arg_c)
int32_t* ecx_3 = arg_10
int32_t eax_7
int32_t* esi_15

if (ecx_3 != arg1[0x19])
    esi_15 = ecx_3[4]
label_59024e:
    eax_7 = (*(*esi_15 + 0x10))(eax_2)
    
    if (eax_7.b == 0)
        eax_7.b = 0
    else
        long double x87_r7_1 = fconvert.t(255.0)
        
        if (ebp_1 == 0xffffff && edi_1 == 0xff)
            goto label_590309
        
        arg_c.d = edi_1
        long double x87_r6_1 = float.t(arg_c.d)
        
        if (edi_1 s< 0)
            x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
        
        arg_c.d = fconvert.s(x87_r6_1 / x87_r7_1)
        arg_c.d = zx.d(ebx.b)
        arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
        arg_c.d = zx.d((ebx u>> 8).b)
        arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
        arg_c.d = zx.d((ebx u>> 0x10).b)
        arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
        eax_7 = (*(*esi_15 + 0x20))(0, fconvert.s(fconvert.t(arg_c.d)), 
            fconvert.s(fconvert.t(arg_c.d)), fconvert.s(fconvert.t(arg_c.d)), 
            fconvert.s(fconvert.t(arg_c.d)))
        
        if (eax_7.b == 0)
            eax_7.b = 0
        else
            x87_r7_1 = fconvert.t(255.0)
        label_590309:
            
            if (edx_1 != 0)
                arg_c.d = zx.d(arg3.b)
                arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
                arg_c.d = zx.d((arg3 u>> 8).b)
                arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
                arg_c.d = zx.d((arg3 u>> 0x10).b)
                arg_c.d = fconvert.s(float.t(arg_c.d) / x87_r7_1)
                eax_7 = (*(*esi_15 + 0x20))(1, fconvert.s(fconvert.t(arg_c.d)), 
                    fconvert.s(fconvert.t(arg_c.d)), fconvert.s(fconvert.t(arg_c.d)), 
                    fconvert.s(float.t(0)))
            
            if (edx_1 == 0 || eax_7.b != 0)
                if (arg4 == 0)
                    eax_7.b = 1
                else if ((*(*esi_15 + 0x20))(2, fconvert.s(fconvert.t(arg5)), 
                        fconvert.s(fconvert.t(arg6)), fconvert.s(fconvert.t(arg7)), 
                        fconvert.s(fconvert.t(arg8))).b == 0)
                    eax_7.b = 0
                else
                    long double x87_r7_10 = float.t(0)
                    long double x87_r6_17 = float.t(1)
                    arg4.d = fconvert.s(x87_r6_17 / x87_r6_17)
                    float var_40_4 = fconvert.s(fconvert.t(arg4.d))
                    arg4.d = fconvert.s(x87_r6_17 / fconvert.t(arg9))
                    
                    if ((*(*esi_15 + 0x20))(3, fconvert.s(fconvert.t(arg4.d)), var_40_4, 
                            fconvert.s(x87_r7_10), fconvert.s(x87_r7_10)).b == 0)
                        eax_7.b = 0
                    else
                        eax_7.b = 1
else
    int32_t var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    int32_t var_38_1 = esi_10
    char eax_6 = sub_58f220(&arg1[2], arg1, ecx_3, &var_1c)
    int32_t* eax_9
    
    if (eax_6 != 0)
        eax_9 = (*(*arg1[1] + 0x24))(eax_2)
    
    if (eax_6 == 0 || eax_9 == 0)
        eax_7 = var_1c
        
        if (eax_7 != 0)
            int32_t var_38_2 = eax_7
            sub_6b4d5b()
        
        eax_7.b = 0
    else
        int32_t ecx_6 = var_1c
        
        if ((*(*eax_9 + 8))(ecx_6, var_18_1 - ecx_6) != 0)
            *sub_50fa20(ecx_2, &arg_c) = eax_9
            int32_t var_4_1 = 0xffffffff
            sub_65ab60(&var_1c)
            esi_15 = eax_9
            goto label_59024e
        
        (*(*eax_9 + 4))()
        sub_65ab60(&var_1c)
        int32_t eax_15
        eax_15.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
