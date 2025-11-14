// 函数: sub_50f780
// 地址: 0x50f780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714948
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg2 + 0x44)
int32_t i = 0
void* result

if (ecx == 0)
    result.b = 0
else
    int32_t* ebx_1 = *(arg2 + 0x48)
    
    if (ebx_1 == 0)
        result.b = 0
    else
        int32_t ecx_1 = *ebx_1
        result = ebx_1[1]
        
        if (ecx_1 == result)
            result.b = 1
        else
            void* var_50 = nullptr
            int32_t var_4c_1 = 0
            int32_t var_48_1 = 0
            sub_65a090(&var_50, ((result - ecx_1) s>> 2) * 8)
            int32_t var_4 = 0
            int32_t eax_8 = *ebx_1
            
            if (((ebx_1[1] - eax_8) & 0xfffffffc) s> 0)
                void* edi_2 = var_50 + 8
                
                do
                    float* esi_4 = (*(eax_8 + (i << 2)) << 6) + *ecx
                    void var_40
                    sub_529cb0(&var_40, esi_4)
                    float var_5c = fconvert.s(fconvert.t(esi_4[0xc]))
                    float var_58_1 = fconvert.s(fconvert.t(esi_4[0xd]))
                    float var_54_1 = fconvert.s(fconvert.t(esi_4[0xe]))
                    void var_30
                    sub_4b9930(&var_40, &var_5c, &var_30)
                    i += 1
                    float var_2c
                    *(edi_2 - 8) = fconvert.s(fconvert.t(var_2c))
                    edi_2 += 0x20
                    float var_28
                    *(edi_2 - 0x24) = fconvert.s(fconvert.t(var_28))
                    float var_24
                    *(edi_2 - 0x20) = fconvert.s(fconvert.t(var_24))
                    float var_20
                    *(edi_2 - 0x1c) = fconvert.s(fconvert.t(var_20))
                    float var_1c
                    *(edi_2 - 0x18) = fconvert.s(fconvert.t(var_1c))
                    float var_18
                    *(edi_2 - 0x14) = fconvert.s(fconvert.t(var_18))
                    float var_14
                    *(edi_2 - 0x10) = fconvert.s(fconvert.t(var_14))
                    float var_10
                    *(edi_2 - 0xc) = fconvert.s(fconvert.t(var_10))
                    eax_8 = *ebx_1
                while (i s< (ebx_1[1] - eax_8) s>> 2)
            
            void* esi_5 = var_50
            
            if ((*(**(arg1 + 0x28) + 0x20))(0x1e, esi_5, (var_4c_1 - esi_5) s>> 2 u>> 2).b != 0)
                if (esi_5 != 0)
                    void* var_78_5 = esi_5
                    sub_6b4d5b()
                
                result.b = 1
            else
                if (esi_5 != 0)
                    void* var_78_4 = esi_5
                    sub_6b4d5b()
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
