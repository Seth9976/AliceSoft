// 函数: sub_6a4510
// 地址: 0x6a4510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg1 != 0)
    int32_t __saved_edi
    eax_3 = (*(*arg1 + 8))(data_78c474 ^ &__saved_edi)
    
    if (eax_3 s> 1)
        void* var_44_1 = (eax_3 << 2) + 0xfffffffc
        int128_t* var_28 = nullptr
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        sub_404f60((eax_3 << 2) + 0xfffffffc, &var_28)
        int32_t var_c_1 = 0
        int32_t var_4c_1 = *(*(*arg1 + 0x10))(0)
        int32_t var_48
        int128_t* eax_10 = (*(*arg1 + 0x10))(1, var_48)
        sub_6c02a0(var_28, eax_10)
        int32_t var_44_2 = 0
        var_c_1.b = 1
        struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_11 = sub_59e250(0x737334)
        struct IDecompressor::nutria::CZlibDecompressor::VTable** var_44_3 = eax_11
        struct _EXCEPTION_REGISTRATION_RECORD** var_38 = nullptr
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        sub_404f60(var_48, &var_38)
        var_c_1.b = 2
        int128_t* esi_3 = var_28
        
        if (eax_11 != 0 && (*eax_11)->vFunc_2(var_38, var_48, esi_3, var_24_1 - esi_3) != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** var_40 = var_38
            int32_t var_3c = var_34_1
            struct _EXCEPTION_REGISTRATION_RECORD*** esi_4 = &var_38
            
            if (sub_685200(&var_40) != 0)
                sub_65ab60(esi_4)
                var_c_1.b = 0
                (*eax_11)->vFunc_1()
                sub_65ab60(&var_28)
                int32_t eax_24
                eax_24.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_24
            
            sub_65ab60(esi_4)
            var_c_1.b = 0
            (*eax_11)->vFunc_1()
            sub_65ab60(&var_28)
            int32_t eax_22
            eax_22.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_22
        
        eax_3 = var_38
        
        if (eax_3 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** var_60_2 = eax_3
            sub_6b4d5b()
        
        var_c_1.b = 0
        
        if (eax_11 != 0)
            (*eax_11)->vFunc_1()
        
        if (esi_3 != 0)
            int128_t* var_60_3 = esi_3
            sub_6b4d5b()

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
