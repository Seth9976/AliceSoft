// 函数: sub_40bd00
// 地址: 0x40bd00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1[0xb3]
int32_t ebp = arg2

if (result != ebp)
    if (result == 1)
        int32_t* ecx_1 = arg1[0xb5]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))(eax_2)
            arg1[0xb5] = 0
        
        char* esi_1 = arg1[0xb2]
        
        if (esi_1 != 0)
            sub_436e10(esi_1)
            char* var_24_2 = esi_1
            sub_6b4d5b()
            arg1[0xb2] = 0
    
    if (ebp != 0)
        if (ebp != 1)
        label_40beac:
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        int32_t* ecx_2 = arg1[0xb5]
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))(eax_2)
            arg1[0xb5] = 0
        
        struct IDXPlugin::chipmunk::CDXPlugin::VTable** eax_5
        void* ecx_3
        eax_5, ecx_3 = operator new(0x10)
        
        if (eax_5 == 0)
            eax_5 = nullptr
        else
            *eax_5 = &chipmunk::CDXPlugin::`vftable'{for `IDXPlugin'}
            eax_5[1] = 1
            eax_5[2] = 0
            eax_5[3] = 0
        
        arg1[0xb5] = eax_5
        eax_5[2] = arg1
        int32_t var_24_3 = arg1[0xb5]
        
        if (sub_406950(ecx_3).b == 0)
            goto label_40beac
        
        char* esi_2 = arg1[0xb2]
        
        if (esi_2 != 0)
            sub_436e10(esi_2)
            char* var_24_5 = esi_2
            sub_6b4d5b()
            arg1[0xb2] = 0
        
        char* ebp_1 = operator new(0x84)
        char* var_10_1 = ebp_1
        int32_t var_4 = 0
        
        if (ebp_1 == 0)
            ebp_1 = nullptr
        else
            *ebp_1 = 0
            *(ebp_1 + 4) = 0
            *(ebp_1 + 8) = 0
            sub_435600(&ebp_1[0xc], &ebp_1[0x80])
            var_4.b = 1
            sub_435600(&ebp_1[0x44], &ebp_1[0x80])
            *(ebp_1 + 0x7c) = 0
        
        int32_t var_4_1 = 0xffffffff
        int32_t* ecx_4 = *arg1
        arg1[0xb2] = ebp_1
        int32_t eax_11 = (*(*ecx_4 + 0x14))(eax_2)
        int32_t eax_13 = (*(**arg1 + 0x10))()
        char* esi_5 = arg1[0xb2]
        *esi_5 = 0
        *(esi_5 + 4) = eax_13
        *(esi_5 + 8) = eax_11
        result = sub_586860(0x7568ec)
        *(esi_5 + 0x7c) = result
        
        if (result == 0)
            goto label_40beac
        
        ebp = arg2
    
    arg1[0xb3] = ebp

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
