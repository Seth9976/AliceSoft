// 函数: sub_5d5e50
// 地址: 0x5d5e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712606
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IChangeVolumeCallback::kiwi::CSactMusic::VTable** ebx = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    struct IChangeVolumeCallback::kiwi::CSactMusic::VTable** eax_3 = operator new(0x44)
    arg1 = eax_3
    int32_t var_4 = 0
    struct IChangeVolumeCallback::kiwi::CSactSound::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_5d80c0(eax_3, *(ebx + 3), ebx[1].b)
    
    int32_t var_4_1 = 0xffffffff
    int32_t* ecx_2 = ebx[2]
    int32_t* edx_2 = ebx[8]
    int32_t* edi_1 = ebx[6]
    int32_t* ecx_3 = ebx[0xd]
    ebx[0xf] = eax_4
    
    if (sub_5d83d0(ecx_3, eax_4, edi_1, edx_2, ecx_2, &ebx[0xb]).b == 0)
        result.b = 0
    else
        struct IChangeVolumeCallback::kiwi::CSactMusic::VTable** eax_5 = operator new(0x40)
        arg1 = eax_5
        int32_t var_4_2 = 1
        struct IChangeVolumeCallback::kiwi::CSactMusic::VTable** eax_6
        
        if (eax_5 == 0)
            eax_6 = nullptr
        else
            eax_6 = sub_5d7190(eax_5, *(ebx + 3), ebx[1].b)
        
        int32_t var_4_3 = 0xffffffff
        int32_t* ecx_5 = ebx[9]
        int32_t* edi_2 = ebx[7]
        int32_t* ecx_6 = ebx[0xd]
        ebx[0xe] = eax_6
        
        if (sub_5d7490(ecx_6, eax_6, edi_2, ecx_5, &ebx[0xb]).b == 0)
            result.b = 0
        else
            result = (**arg2)(&data_736970)
            
            if (result == 0)
                result.b = 0
            else
                struct IChangeVolumeCallback::kiwi::CSactMusic::VTable** eax_9 =
                    (*result)->__offset(0x10).d(eax_2)
                int32_t esi_3 = 0
                
                if (eax_9 s> 0)
                    do
                        int32_t eax_11 = (*result)->__offset(0x18).d(esi_3)
                        arg2.b = (*result)->__offset(0x20).d(esi_3)
                        (*ebx[0xf]->vFunc_0)(esi_3, eax_11)
                        (*(ebx[0xf]->vFunc_0 + 4))(esi_3, arg2)
                        (*(ebx[0xf]->vFunc_0 + 8))(esi_3, 0)
                        (*ebx[0xe]->vFunc_0)(esi_3, eax_11)
                        (*(ebx[0xe]->vFunc_0 + 4))(esi_3, arg2)
                        (*(ebx[0xe]->vFunc_0 + 8))(esi_3, 0)
                        esi_3 += 1
                    while (esi_3 s< eax_9)
                
                (*result)->__offset(0x24).d(ebx[0xf])
                (*result)->__offset(0x24).d(ebx[0xe])
                result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
