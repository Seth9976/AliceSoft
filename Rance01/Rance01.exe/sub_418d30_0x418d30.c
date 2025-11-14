// 函数: sub_418d30
// 地址: 0x418d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
int32_t* i = *(ebx + 0x10)
int32_t* i_1 = i

while (i != *(ebx + 0x14))
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** edi_1 = *i
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** var_14_1 = edi_1
    
    if (edi_1 != 0)
        *edi_1 = &guiengine::CGUIController::`vftable'{for `guiengine::CEventObserverBase'}
        edi_1[1] = &guiengine::CGUIController::`vftable'{for `guiengine::IPartsControllerMaker'}
        edi_1[2] = &guiengine::CGUIController::`vftable'{for `guiengine::IMakeGUIComponent'}
        int32_t var_4 = 1
        sub_417b00(edi_1)
        int32_t eax_3 = edi_1[0x1c]
        
        if (eax_3 != 0)
            int32_t var_30_1 = eax_3
            sub_6b4d5b()
        
        edi_1[0x1c] = 0
        edi_1[0x1d] = 0
        edi_1[0x1e] = 0
        void* var_14_2 = &edi_1[4]
        int32_t var_4_1 = 3
        sub_4152d0(&edi_1[4])
        edi_1[5] = 0
        int32_t eax_4 = edi_1[0xa]
        
        if (eax_4 != 0)
            int32_t var_30_3 = eax_4
            sub_6b4d5b()
        
        edi_1[0xa] = 0
        edi_1[0xb] = 0
        edi_1[0xc] = 0
        void* var_14_3 = &edi_1[6]
        int32_t var_4_2 = 4
        int32_t*** eax_5 = edi_1[7]
        void var_10
        sub_4365a0(&edi_1[6], &var_10, *eax_5, eax_5)
        int32_t var_4_3 = 0xffffffff
        int32_t var_30_5 = edi_1[7]
        sub_6b4d5b()
        struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** var_34_2 = edi_1
        sub_6b4d5b()
        i = i_1
        ebx = arg1
    
    i = &i[1]
    i_1 = i

int128_t* ecx_3 = *(ebx + 0x14)
int128_t* esi_4 = *(ebx + 0x10)

if (esi_4 != ecx_3)
    void* edi_2 = 0 s>> 2 << 2
    i = sub_6b49d0(esi_4, ecx_3, edi_2, eax_2)
    *(ebx + 0x14) = edi_2 + esi_4

fsbase->NtTib.ExceptionList = ExceptionList
return i
