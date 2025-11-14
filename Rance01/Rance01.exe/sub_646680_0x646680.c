// 函数: sub_646680
// 地址: 0x646680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int128_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_4 = 0
int32_t var_2c = 0
int32_t* var_28 = nullptr
int32_t var_24 = 0
var_4.b = 1

if (arg2 s> 0)
    void* esi_1 = data_797ddc
    int32_t* var_48_1 = arg2
    int32_t* ecx
    int32_t edx
    
    if (sub_418b70(esi_1 + 0xa8, edx, ecx) != 0)
        int32_t* eax_6 = sub_418bd0(esi_1 + 0xa8, arg2)
        
        if (eax_6 != 0)
            struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_7 =
                sub_414e30(eax_6)
            int32_t* ecx_1 = eax_6[0xe]
            
            if (ecx_1 != 0 && eax_7[2] == 0)
                eax_7[8] = ecx_1
                eax_7[2] = (**ecx_1)(1)
            
            int32_t* edx_2 = data_797da0
            eax_7[3] = eax_6[0xc]
            eax_7[4] = eax_6
            void* eax_11 = sub_5f7370(*edx_2, eax_7[2]->vFunc_1)
            
            if (eax_11 != 0)
                (*(**(*(eax_11 + 0xb4) + 4) + 0x3c))(&var_2c)

int32_t* var_48_4 = arg2
int32_t* ecx_8
int32_t edx_6
ecx_8, edx_6 = sub_42c960(&result_2, nullptr, var_2c, var_28)

if (arg2 s> 0)
    void* esi_3 = data_797ddc
    int32_t* var_48_5 = arg2
    
    if (sub_418b70(esi_3 + 0xa8, edx_6, ecx_8) != 0)
        int32_t* eax_16 = sub_418bd0(esi_3 + 0xa8, arg2)
        
        if (eax_16 != 0)
            struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_17 =
                sub_414e30(eax_16)
            int32_t* ecx_9 = eax_16[0xe]
            
            if (ecx_9 != 0 && eax_17[2] == 0)
                eax_17[8] = ecx_9
                eax_17[2] = (**ecx_9)(1)
            
            int32_t* eax_20 = data_797da0
            eax_17[3] = eax_16[0xc]
            eax_17[4] = eax_16
            void* eax_21 = sub_5f7370(*eax_20, eax_17[2]->vFunc_1)
            
            if (eax_21 != 0)
                (*(**(*(eax_21 + 0xb4) + 8) + 0x3c))(&var_2c)

int32_t* var_48_8 = arg2
int32_t* ecx_16
int32_t edx_12
ecx_16, edx_12 = sub_42c960(&result_2, var_18, var_2c, var_28)

if (arg2 s> 0)
    void* esi_5 = data_797ddc
    int32_t* var_48_9 = arg2
    
    if (sub_418b70(esi_5 + 0xa8, edx_12, ecx_16) != 0)
        int32_t* eax_27 = sub_418bd0(esi_5 + 0xa8, arg2)
        
        if (eax_27 != 0)
            struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_28 =
                sub_414e30(eax_27)
            int32_t* ecx_17 = eax_27[0xe]
            
            if (ecx_17 != 0 && eax_28[2] == 0)
                eax_28[8] = ecx_17
                eax_28[2] = (**ecx_17)(1)
            
            int32_t* eax_31 = data_797da0
            eax_28[3] = eax_27[0xc]
            eax_28[4] = eax_27
            void* eax_32 = sub_5f7370(*eax_31, eax_28[2]->vFunc_1)
            
            if (eax_32 != 0)
                (*(**(*(eax_32 + 0xb4) + 0xc) + 0x3c))(&var_2c)

int32_t* var_48_12 = arg2
sub_42c960(&result_2, var_18, var_2c, var_28)
sub_4b55f0(arg1 + 0x300, &result_2)
int32_t eax_37 = var_2c

if (eax_37 != 0)
    int32_t var_48_14 = eax_37
    sub_6b4d5b()

int32_t result = result_2
var_2c = 0
int32_t var_28_1 = 0
int32_t var_24_1 = 0

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
