// 函数: sub_4edfd0
// 地址: 0x4edfd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72694b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = *(arg2 + 0x29c)

if (esi != 0)
    sub_5028f0(esi)
    *(arg2 + 0x29c) = 0

int32_t* esi_1 = *(arg2 + 0x298)

if (esi_1 != 0)
    sub_4f8480(esi_1)
    *(arg2 + 0x298) = 0

int32_t* result

if (arg1 s< 0)
    result.b = 0
else
    int32_t edx_1
    edx_1:result = muls.dp.d(0x7e07e07f, *(arg3 + 0x10) - *(arg3 + 0xc))
    int32_t edx_2 = edx_1 s>> 8
    int32_t ecx_4 = (edx_2 u>> 0x1f) + edx_2
    
    if (arg1 s>= ecx_4)
        result.b = 0
    else
        int32_t edi_1 = arg1 * 0x208
        void* edi_2 = edi_1 + *(arg3 + 0xc)
        
        if (edi_1 == neg.d(*(arg3 + 0xc)))
            result.b = 0
        else if (*(edi_2 + 0xb4) == 0)
            result.b = 1
        else
            int32_t var_4 = 0
            char var_48
            int32_t var_2c
            sub_4c1d70(edi_2 + 0xa4, &var_2c, sub_401800(ecx_4, arg3 + 0x1c, &var_48), &var_2c)
            var_4.b = 2
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_6c_2 = var_48.d
                sub_6b4d5b()
            
            void* ecx_6 = *(arg2 + 0x2a4)
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            result = sub_50ace0(ecx_6, &var_2c)
            *(arg2 + 0x298) = result
            
            if (result != 0)
                struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** eax_8 =
                    operator new(0x16c)
                struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_4c_1 = eax_8
                var_4.b = 3
                struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** eax_9
                
                if (eax_8 == 0)
                    eax_9 = nullptr
                else
                    eax_9 = sub_502540(eax_8)
                
                var_4.b = 2
                int32_t edx_6 = *(arg2 + 0x2a4)
                *(arg2 + 0x29c) = eax_9
                eax_9[0x5a] = edx_6
                
                if (sub_502990(*(arg2 + 0x29c), *(arg2 + 0x298), 0, arg4) != 0)
                    sub_401110(&var_2c)
                    result.b = 1
                else
                    sub_5028f0(*(arg2 + 0x29c))
                    *(arg2 + 0x29c) = 0
                    sub_401110(&var_2c)
                    result.b = 0
            else
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_6c_3 = var_2c
                    sub_6b4d5b()
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
