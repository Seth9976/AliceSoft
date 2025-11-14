// 函数: sub_6c6f00
// 地址: 0x6c6f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79a00c
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t* var_1c = &result
result = 0
int32_t var_40 = 0
int32_t var_8_1 = 0
int32_t* var_48 = &result
void* eax_3 = operator new(0x114)

if (eax_3 != 0)
    __builtin_memset(eax_3 + 4, 0, 0x14)
    *(arg1 + 0x3848) = eax_3
    int32_t* var_48_1 = &result
    sub_6ca410(eax_3)
    __builtin_memset(arg1, 0, 0x14)
    *(arg1 + 0x14) = 3
    *(arg1 + 0x18) = 2
    __builtin_memset(arg1 + 0x1c, 0, 0x18)
    *(arg1 + 0x34) = 3
    *(arg1 + 0x38) = 3
    *(arg1 + 0x3c) = 1
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0
    *(arg1 + 0x48) = 1
    *(arg1 + 0x4c) = 1
    *(arg1 + 0x50) = 0x4b
    *(arg1 + 0xcc) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0x74) = 0
    *(arg1 + 0x58) = 0xffffffff
    *(arg1 + 0x5c) = 0
    *(arg1 + 0x60) = 0
    *(arg1 + 0x64) = 0
    *(arg1 + 0x68) = 0
    *(arg1 + 0x6c) = 1
    *(arg1 + 0x78) = *(arg1 + 4)
    *(arg1 + 0x7c) = *(arg1 + 8)
    *(arg1 + 0x80) = *(arg1 + 0xc)
    *(arg1 + 0x84) = *(arg1 + 0x10)
    *(arg1 + 0x88) = *(arg1 + 0x14)
    *(arg1 + 0x8c) = *(arg1 + 0x18)
    *(arg1 + 0x90) = *(arg1 + 0x1c)
    *(arg1 + 0x94) = 0
    *(arg1 + 0x9c) = *(arg1 + 0x24)
    *(arg1 + 0x98) = *(arg1 + 0x20)
    *(arg1 + 0xa0) = *(arg1 + 0x28)
    *(arg1 + 0xa4) = *(arg1 + 0x2c)
    *(arg1 + 0xa8) = *(arg1 + 0x30)
    *(arg1 + 0xac) = *(arg1 + 0x34)
    *(arg1 + 0xb0) = *(arg1 + 0x38)
    *(arg1 + 0xb4) = *(arg1 + 0x3c)
    *(arg1 + 0xb8) = *(arg1 + 0x40)
    *(arg1 + 0xbc) = *(arg1 + 0x44)
    *(arg1 + 0xc0) = *(arg1 + 0x48)
    *(arg1 + 0xc4) = *(arg1 + 0x4c)
    *(arg1 + 0xc8) = *(arg1 + 0x50)
    *(arg1 + 0xd0) = 0
    *(arg1 + 0xd4) = 0
    __builtin_memset(arg1 + 0x373c, 0, 0x38)
    data_797c44(arg1 + 0xec, 0xb4)
    data_797c44(arg1 + 0x1a0, 0xb4)
    data_797c44(arg1 + 0x254, 0xb4)
    data_797c44(arg1 + 0x308, 0xb4)
    void* var_38_1 = arg1 + 0xf8
    void* var_34_1 = arg1 + 0x1ac
    void* var_30_1 = arg1 + 0x260
    void* var_2c_1 = arg1 + 0x314
    *(arg1 + 0xf4) = (arg1 + 0xff) & 0xfffffff8
    *(arg1 + 0x1a8) = (arg1 + 0x1b3) & 0xfffffff8
    *(arg1 + 0x25c) = (arg1 + 0x267) & 0xfffffff8
    *(arg1 + 0x310) = (arg1 + 0x31b) & 0xfffffff8
    data_797c44(arg1 + 0x1d7c, 0x670)
    data_797c44(arg1 + 0x23ec, 0x670)
    data_797c44(arg1 + 0x2a5c, 0x670)
    data_797c44(arg1 + 0x30cc, 0x670)
    data_797c44(arg1 + 0x3bc, 0x670)
    data_797c44(arg1 + 0xa2c, 0x670)
    data_797c44(arg1 + 0x109c, 0x670)
    data_797c44(arg1 + 0x170c, 0x670)
    *(arg1 + 0x3834) = 1
    __builtin_memset(arg1 + 0x37fc, 0, 0x1c)
    *(arg1 + 0x3818) = 4
    *(arg1 + 0x381c) = 0
    *(arg1 + 0x3820) = 0
    int32_t* var_48_2 = &result
    int32_t eax_28 = operator new(0x40)
    *(arg1 + 0x3824) = eax_28
    
    if (eax_28 != 0)
        data_797c44(eax_28, *(arg1 + 0x3818) << 4)
        *(arg1 + 0x3828) = 0
        *(arg1 + 0x382c) = 0
        *(arg1 + 0x3830) = 0
        *(arg1 + 0x4880) = 0
        *(arg1 + 0x4884) = 0
        *(arg1 + 0x3838) = 0
        *(arg1 + 0x4888) = 0
        *(arg1 + 0x3774) = 0
        *(arg1 + 0x3778) = 0
        *(arg1 + 0x377c) = 0
        *(arg1 + 0x3780) = 0
        *(arg1 + 0x3784) = 0
        *(arg1 + 0x3788) = 0
        *(arg1 + 0x378c) = 0
        *(arg1 + 0x3790) = 0
        *(arg1 + 0x3794) = 0
        *(arg1 + 0x3798) = 0
        *(arg1 + 0x379c) = 0
        *(arg1 + 0x379d) = 0
        *(arg1 + 0x37a0) = 0
        *(arg1 + 0x37a4) = 0
        *(arg1 + 0x37a8) = 0
        *(arg1 + 0x37a9) = 0
        *(arg1 + 0x37ac) = 0
        *(arg1 + 0x37b0) = 0
        *(arg1 + 0x37b4) = 0
        *(arg1 + 0x37b5) = 0
        *(arg1 + 0x37b8) = 0
        *(arg1 + 0x37bc) = 0
        *(arg1 + 0x37c0) = 0
        *(arg1 + 0x37c1) = 0
        *(arg1 + 0x37c4) = 0
        *(arg1 + 0x37c8) = 0
        *(arg1 + 0x37cc) = 0
        *(arg1 + 0x37cd) = 0
        *(arg1 + 0x37d0) = 0
        *(arg1 + 0x37d4) = 0
        *(arg1 + 0x37d8) = 0
        *(arg1 + 0x37d9) = 0
        *(arg1 + 0x37dc) = 0
        *(arg1 + 0x37e0) = 0
        *(arg1 + 0x37e4) = 0
        *(arg1 + 0x37e5) = 0
        *(arg1 + 0x37e8) = 0
        *(arg1 + 0x37ec) = 0
        *(arg1 + 0x37f0) = 0
        *(arg1 + 0x37f1) = 0
        __builtin_memset(arg1 + 0xd8, 0, 0x14)
        *(arg1 + 0x37f4) = 0
        *(arg1 + 0x37f8) = 0
        *(arg1 + 0x37f5) = 1
        *(arg1 + 0x37f9) = 1
        *(arg1 + 0x37f6) = 1
        *(arg1 + 0x37fa) = 1
        *(arg1 + 0x37f7) = 1
        *(arg1 + 0x37fb) = 1
        *(*(arg1 + 0x3824) + 0xc) = 0
        *(*(arg1 + 0x3824) + 0x1c) = 1
        *(*(arg1 + 0x3824) + 0x2c) = 1
        *(*(arg1 + 0x3824) + 0x3c) = 1
        *(arg1 + 0x387c) = 0
        *(arg1 + 0x3850) = 0
        *(arg1 + 0x3854) = 0
        *(arg1 + 0x3858) = 0
        *(arg1 + 0x385c) = 0
        *(arg1 + 0x386c) = 0
        *(arg1 + 0x3864) = 0
        *(arg1 + 0x3868) = 0
        int32_t* var_48_4 = &result
        int32_t eax_30 = sub_6ca690(eax_3)
        *(arg1 + 0x3874) = eax_30
        *(arg1 + 0x384c) = 0
        *(arg1 + 0x3860) = 0
        *(arg1 + 0x3840) = 0
        *(arg1 + 0x3844) = 0
        *(arg1 + 0x3870) = 0
        *(arg1 + 0x3878) = 0
        *(arg1 + 0x488c) = 0
        *(arg1 + 0x4e30) = eax_30
        __builtin_memset(arg1 + 0x4e34, 0, 0x14)
        *(arg1 + 0x4e48) = 0x64
        *(arg1 + 0x4e4a) = 0
        *(arg1 + 0x4e4c) = 0
        *(arg1 + 0x4e50) = 0
        *(arg1 + 0x4e54) = 0x101
        *(arg1 + 0x4e56) = 0
        *(arg1 + 0x4e58) = 1
        *(arg1 + 0x4e5a) = 1
        *(arg1 + 0x4e5c) = 0
        *(arg1 + 0x4e60) = 0
        int32_t var_8_2 = 0xffffffff
    else
        result = 0xfffffffb
else
    result = 0xfffffffb

if (result s< 0)
    if (*(arg1 + 0x3824) != 0)
        int32_t* var_48_5 = &result
        int32_t var_4c_16 = *(arg1 + 0x3824)
        sub_6b4d5b()
        *(arg1 + 0x3824) = 0
        *(arg1 + 0x3818) = 0
    
    if (*(arg1 + 0x4e3c) != 0)
        int32_t* var_48_6 = &result
        int32_t var_4c_17 = *(arg1 + 0x4e3c)
        sub_6b4d5b()
        *(arg1 + 0x4e3c) = 0
    
    if (*(arg1 + 0x4888) != 0)
        int32_t* var_48_7 = &result
        int32_t var_4c_18 = *(arg1 + 0x4888)
        sub_6b4d5b()
        *(arg1 + 0x4888) = 0
    
    if (*(arg1 + 0x3838) != 0)
        if (*(*(arg1 + 0x3838) + 0x34) != 0)
            int32_t* var_48_8 = &result
            int32_t var_4c_19 = *(*(arg1 + 0x3838) + 0x34)
            sub_6b4d5b()
            *(*(arg1 + 0x3838) + 0x34) = 0
        
        int32_t* var_48_9 = &result
        int32_t var_4c_20 = *(arg1 + 0x3838)
        sub_6b4d5b()
        *(arg1 + 0x3838) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
