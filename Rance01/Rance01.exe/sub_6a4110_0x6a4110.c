// 函数: sub_6a4110
// 地址: 0x6a4110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720d00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* var_20 = &fileimage::CFileImageMaker::`vftable'
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0

if (sub_684fa0(&var_20) != 0)
    int32_t var_2c_1 = 0
    var_4.b = 1
    struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_5 = sub_59e250(0x72d2e8)
    struct IDecompressor::nutria::CZlibDecompressor::VTable** var_2c_2 = eax_5
    
    if (eax_5 != 0)
        int32_t eax_7 = var_18 - var_1c
        int32_t var_24 = eax_7
        int32_t* eax_9 = (*eax_5)->vFunc_2(var_1c, eax_7)
        
        if (eax_9 == 0)
            var_4.b = 0
            (*eax_5)->vFunc_1(eax_2)
            sub_4101c0(&var_20)
            int32_t eax_11
            eax_11.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        int32_t ebx_1 = (*(*eax_9 + 0x14))(eax_2) & 0x80000003
        bool cond:0 = ebx_1 == 0
        
        if (ebx_1 s< 0)
            int32_t ebx_3 = (ebx_1 - 1) | 0xfffffffc
            ebx_1 = ebx_3 + 1
            cond:0 = ebx_3 == 0xffffffff
        
        if (not(cond:0))
            void* ebp_1 = *eax_9
            (*(ebp_1 + 0xc))((*(ebp_1 + 0x14))() + 4 - ebx_1)
        
        int32_t eax_18
        int32_t edx_6
        edx_6:eax_18 = sx.q((*(*eax_9 + 0x14))())
        int32_t var_28 = ((eax_18 + (edx_6 & 3)) s>> 2) + 1
        void* eax_24
        
        if ((*(*arg1 + 0x18))(&var_28, 1) != 0)
            bool cond:1_1 = (*(*arg1 + 0x14))(0, &var_24) == 0
            eax_24 = *eax_9
            
            if (not(cond:1_1))
                sub_6c02a0((*(*arg1 + 0x10))(1, (*(*eax_9 + 0x18))((*(eax_24 + 0x14))())))
                (*(*eax_9 + 4))()
                var_4.b = 0
                (*eax_5)->vFunc_1()
                sub_4101c0(&var_20)
                int32_t eax_36
                eax_36.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_36
        else
            eax_24 = *eax_9
        
        (*(eax_24 + 4))()
        var_4.b = 0
        (*eax_5)->vFunc_1()
        sub_4101c0(&var_20)
        int32_t eax_26
        eax_26.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_26

var_20 = &fileimage::CFileImageMaker::`vftable'

if (var_1c != 0)
    int32_t var_44_1 = var_1c
    sub_6b4d5b()

int32_t eax_4
eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
