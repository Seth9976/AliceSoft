// 函数: sub_52c9c0
// 地址: 0x52c9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[0xe]
int32_t eax_5
uint32_t edx
eax_5, edx = __allmul(eax_3 - arg1[0xa], sbb.d(arg1[0xf], arg1[0xb], eax_3 u< arg1[0xa]), 0x3e8, 0)
uint32_t eax_6
uint32_t edx_1
eax_6, edx_1 = __alldiv(eax_5, edx, data_797de8, data_797dec)
sub_40da60(0x751d54)
uint32_t var_48_1 = eax_6
sub_40da60(0x751d64)
int32_t* var_1c
sub_52cba0(&var_1c, arg1)
int32_t var_4 = 0
int32_t* i_2

for (int32_t* i = arg1[4]; i != arg1[5]; i = &i[4])
    char var_2c
    int32_t var_48_3 = var_2c.d
    sub_52d1f0(&var_1c, i_2, *i, i[1])

int32_t* i_1 = i_2
int32_t* esi_1 = var_1c
char var_2c_1 = 0
int32_t var_48_4 = var_2c_1.d
int32_t result = sub_52d3f0(esi_1, i_1, (i_1 - esi_1) s/ 0x38)

if (esi_1 != i_1)
    int32_t* edi_1 = &esi_1[0xc]
    
    do
        if (edi_1[-5] != 0)
            void* ebx_2
            
            if (edi_1[-7] u< 0x10)
                ebx_2 = &edi_1[-0xc]
            else
                ebx_2 = edi_1[-0xc]
            
            int32_t eax_13
            uint32_t edx_7
            eax_13, edx_7 = __allmul(*edi_1, edi_1[1], 0x3e8, 0)
            uint32_t eax_14
            int32_t edx_8
            eax_14, edx_8 = __alldiv(eax_13, edx_7, data_797de8, data_797dec)
            void* var_48_6 = ebx_2
            int32_t eax_15
            uint32_t edx_9
            eax_15, edx_9 = __allmul(eax_14, edx_8, 0x3e8, 0)
            int32_t eax_17
            uint32_t edx_10
            edx_10:eax_17 = sx.q(edi_1[-5])
            uint32_t var_4c_6 = __alldiv(eax_15, edx_9, eax_17, edx_10)
            int32_t eax_19
            uint32_t edx_11
            eax_19, edx_11 = __allmul(eax_14, edx_8, 0x64, 0)
            uint32_t var_50_8 = __alldiv(eax_19, edx_11, eax_6, edx_1)
            uint32_t var_54_9 = eax_14
            result = sub_40da60("%12d ms | %3d%% | %12d ")
            esi_1 = var_1c
            i_1 = i_2
        
        edi_1 = &edi_1[0xe]
    while (&edi_1[-0xc] != i_1)

int32_t var_4_1 = 0xffffffff

if (esi_1 != 0)
    int32_t var_48_7 = var_2c_1.d
    sub_52d7c0(esi_1, i_1)
    int32_t* var_48_8 = esi_1
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
