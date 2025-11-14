// 函数: sub_6b7e6f
// 地址: 0x6b7e6f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0
int32_t var_8 = 0
void* result

if (data_797858 == 0)
    result = sub_6c189b
else
    result = DecodePointer(data_798204)

int32_t var_2c
double var_14_1
double* esi_1

if (arg4 s> 0xa6)
    if (arg4 - 0x3e8 u<= 0xc)
        double* ecx_14
        long double x87_r7_9
        
        switch (arg4)
            case 0x3e8
                void* const var_28_14 = &data_72b13c
            label_6b8007:
                ecx_14 = arg1
                esi_1 = arg3
                *esi_1 = fconvert.d(fconvert.t(*ecx_14))
                goto label_6b7f90
            case 0x3e9
                char const* const var_28_15 = "log10"
                goto label_6b8007
            case 0x3ea
                void* const var_28_16 = &data_72b148
                goto label_6b8007
            case 0x3eb
                char const* const var_28_17 = "atan"
                goto label_6b8007
            case 0x3ec
                char const* const var_28_18 = "ceil"
                goto label_6b8007
            case 0x3ed
                char const* const var_28_19 = "floor"
                goto label_6b8007
            case 0x3ee
            label_6b8016:
                void** const var_28_12 = &data_72b14c
                goto label_6b7f85
            case 0x3ef
                char const* const var_28_20 = "modf"
                goto label_6b8007
            case 0x3f0
            label_6b7ff7:
                char const* const var_28_10 = "acos"
                goto label_6b7f85
            case 0x3f1
            label_6b7fee:
                char const* const var_28_9 = "asin"
            label_6b7f85:
                ecx_14 = arg1
                esi_1 = arg3
            label_6b7f90:
                double var_24_3 = fconvert.d(fconvert.t(*ecx_14))
                double var_1c_3 = fconvert.d(fconvert.t(*arg2))
                x87_r7_9 = fconvert.t(*esi_1)
            case 0x3f2
                void* const var_28_21 = &data_72b100
            label_6b80c9:
                esi_1 = arg3
                x87_r7_9 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                *esi_1 = fconvert.d(x87_r7_9)
                double var_24_4 = fconvert.d(fconvert.t(*arg1))
                double var_1c_4 = fconvert.d(fconvert.t(*arg2))
            case 0x3f3
                void* const var_28_22 = &data_72b0fc
                goto label_6b80c9
            case 0x3f4
                char const (** const var_28_23)[0x3] = &data_72b0f8
                goto label_6b80c9
        
        var_14_1 = fconvert.d(x87_r7_9)
        var_2c = 1
        result = result(&var_2c)
        
        if (result == 0)
            result = __errno()
            *result = 0x21
        
        *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 == 0xa6)
    var_2c = 3
    char const* const var_28_13 = "exp10"
label_6b7f0d:
    esi_1 = arg3
    double var_24_1 = fconvert.d(fconvert.t(*arg1))
    double var_1c_1 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*esi_1))
    result = result(&var_2c)
    
    if (result == 0)
        result = __errno()
        *result = 0x22
    
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 s> 0x19)
    if (arg4 == 0x1a)
        result = arg3
        *result = fconvert.d(float.t(1))
    else
        if (arg4 == 0x1b)
            var_2c = 2
        label_6b7efe:
            void** const var_28_1 = &data_72b14c
            goto label_6b7f0d
        
        if (arg4 == 0x1c)
            goto label_6b8016
        
        if (arg4 == 0x1d)
            void** const var_28_11 = &data_72b14c
            goto label_6b8007
        
        if (arg4 == 0x3a)
            goto label_6b7ff7
        
        if (arg4 == 0x3d)
            goto label_6b7fee
else if (arg4 == 0x19)
    void** const var_28_8 = &data_72b14c
label_6b7f4b:
    esi_1 = arg3
    double var_24_2 = fconvert.d(fconvert.t(*arg1))
    double var_1c_2 = fconvert.d(fconvert.t(*arg2))
    long double x87_r7_6 = fconvert.t(*esi_1)
    var_2c = 4
    var_14_1 = fconvert.d(x87_r7_6)
    result = result(&var_2c)
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else
    switch (arg4)
        case 2
            var_2c = 2
            void* const var_28_7 = &data_72b13c
            goto label_6b7f0d
        case 3
            void* const var_28_6 = &data_72b13c
            goto label_6b7f85
        case 8
            var_2c = 2
            char const* const var_28_5 = "log10"
            goto label_6b7f0d
        case 9
            char const* const var_28_4 = "log10"
            goto label_6b7f85
        case 0xe
            var_2c = 3
            void* const var_28_3 = &data_72b148
            goto label_6b7f0d
        case 0xf
            void* const var_28_2 = &data_72b148
            goto label_6b7f4b
        case 0x18
            var_2c = 3
            goto label_6b7efe
return result
