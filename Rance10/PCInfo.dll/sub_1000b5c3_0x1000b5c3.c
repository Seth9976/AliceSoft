// 函数: sub_1000b5c3
// 地址: 0x1000b5c3
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_30 = edi
int32_t (* edi_1)(int32_t arg1)

if (data_1001726c == 0)
    edi_1 = ___acrt_invoke_user_matherr
else
    edi_1 = DecodePointer(data_10017278)

int32_t* result
int32_t var_28
double var_10_1
double* esi_1

if (arg4 s> 0x1a)
    if (arg4 == 0x1b)
        var_28 = 2
    label_1000b789:
        void* const var_24_12 = &data_10013074
    label_1000b795:
        esi_1 = arg3
        double var_20_3 = fconvert.d(fconvert.t(*arg1))
        double var_18_3 = fconvert.d(fconvert.t(*arg2))
        var_10_1 = fconvert.d(fconvert.t(*esi_1))
        result = edi_1(&var_28)
        
        if (result == 0)
            result = __errno()
            *result = 0x22
        
        *esi_1 = fconvert.d(fconvert.t(var_10_1))
    else if (arg4 == 0x1c)
        void* const var_24_11 = &data_10013074
    label_1000b63c:
        esi_1 = arg3
        var_28 = 1
        double var_20_1 = fconvert.d(fconvert.t(*arg1))
        double var_18_1 = fconvert.d(fconvert.t(*arg2))
        var_10_1 = fconvert.d(fconvert.t(*esi_1))
        result = edi_1(&var_28)
        
        if (result == 0)
            result = __errno()
            *result = 0x21
        
        *esi_1 = fconvert.d(fconvert.t(var_10_1))
    else
        if (arg4 == 0x31)
            char const* const var_24_10 = "sqrt"
            goto label_1000b63c
        
        if (arg4 == 0x3a)
            char const* const var_24_9 = "acos"
            goto label_1000b63c
        
        if (arg4 == 0x3d)
            char const* const var_24_8 = "asin"
            goto label_1000b63c
        
        if (arg4 != 0x3e8)
            result = arg4 - 0x3e9
        
        if (arg4 == 0x3e8 || arg4 == 0x3e9)
            result = arg3
            *result = fconvert.d(fconvert.t(*arg1))
else if (arg4 == 0x1a)
    result = arg3
    *result = fconvert.d(float.t(1))
else if (arg4 s<= 0xe)
    if (arg4 == 0xe)
        var_28 = 3
        void* const var_24_5 = &data_10013070
        goto label_1000b795
    
    if (arg4 == 2)
        var_28 = 2
        void* const var_24_4 = &data_10013064
        goto label_1000b795
    
    if (arg4 == 3)
        void* const var_24_3 = &data_10013064
        goto label_1000b63c
    
    if (arg4 == 8)
        var_28 = 2
        char const* const var_24_2 = "log10"
        goto label_1000b795
    
    result = arg4 - 9
    
    if (arg4 == 9)
        char const* const var_24_1 = "log10"
        goto label_1000b63c
else if (arg4 == 0xf)
    void* const var_24_7 = &data_10013070
label_1000b6d6:
    esi_1 = arg3
    var_28 = 4
    double var_20_2 = fconvert.d(fconvert.t(*arg1))
    double var_18_2 = fconvert.d(fconvert.t(*arg2))
    var_10_1 = fconvert.d(fconvert.t(*esi_1))
    result = edi_1(&var_28)
    *esi_1 = fconvert.d(fconvert.t(var_10_1))
else
    if (arg4 == 0x18)
        var_28 = 3
        goto label_1000b789
    
    result = arg4 - 0x19
    
    if (arg4 == 0x19)
        void* const var_24_6 = &data_10013074
        goto label_1000b6d6
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
