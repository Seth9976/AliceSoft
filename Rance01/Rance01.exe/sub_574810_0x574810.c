// 函数: sub_574810
// 地址: 0x574810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724979
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c8
int32_t eax_2 = data_78c474 ^ &var_c8
int32_t __saved_esi
int32_t eax_4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_574320(arg2)
int32_t ecx = arg1[1]
int32_t edx = arg1[2]
int32_t var_b4 = *arg1
int32_t var_b0 = ecx
int32_t var_ac = edx
int32_t var_a8 = arg1[3]
int32_t var_a4 = arg1[4]
int32_t var_a0 = arg1[5]
int32_t var_88 = 0xf
int32_t var_8c = 0
char var_9c = 0
sub_401180(&var_9c, 0xffffffff, arg3, 0)
int32_t var_4 = 0
int32_t* eax_8 = sub_574f50(arg2, &var_b4)
int32_t* var_c4 = eax_8
char eax_10

if (eax_8 != arg2[1])
    eax_10 = sub_572ee0(&eax_8[3], &var_b4)

int32_t* var_bc
int32_t** eax_11

if (eax_8 == arg2[1] || eax_10 != 0)
    var_bc = arg2[1]
    eax_11 = &var_bc
else
    eax_11 = &var_c4

int32_t* ebp_1 = *eax_11
int32_t var_4_1 = 0xffffffff

if (var_88 u>= 0x10)
    int32_t var_dc_3 = var_9c.d
    sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c_1 = 0
var_9c = 0

if (ebp_1 == arg2[1])
    int32_t* eax_17
    int80_t st0_1
    st0_1, eax_17 = sub_573280(&arg2[7], arg3, arg1)
    
    if (eax_17 != 0)
        int32_t* eax_19 = operator new(8)
        var_bc = eax_19
        int32_t var_4_2 = 1
        
        if (eax_19 == 0)
            var_c4 = nullptr
        else
            int32_t ecx_6 = arg2[0x5b]
            arg2[0x5b] = ecx_6 + 1
            eax_19[1] = ecx_6
            *eax_19 = eax_17
            (**eax_17)(eax_4)
            var_c4 = var_bc
        
        int32_t var_4_3 = 0xffffffff
        void var_48
        int32_t* eax_23 = sub_572e90(arg1, &var_48, arg3)
        int32_t var_4_4 = 2
        int32_t var_80 = *eax_23
        int32_t var_7c_1 = eax_23[1]
        int32_t var_78_1 = eax_23[2]
        int32_t var_74_1 = eax_23[3]
        int32_t var_70_1 = eax_23[4]
        int32_t var_6c_1 = eax_23[5]
        int32_t var_54_1 = 0xf
        int32_t var_58_1 = 0
        char var_68 = 0
        sub_401180(&var_68, 0xffffffff, &eax_23[6], 0)
        int32_t* var_4c_1 = var_c4
        var_4_4.b = 3
        sub_575160(arg2, &var_bc, sub_575640(arg2, &var_80))
        
        if (var_54_1 u>= 0x10)
            int32_t var_dc_8 = var_68.d
            sub_6b4d5b()
        
        int32_t var_4_5 = 0xffffffff
        int32_t var_54_2 = 0xf
        int32_t var_58_2 = 0
        var_68 = 0
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            char var_30
            int32_t var_dc_9 = var_30.d
            sub_6b4d5b()
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30_1 = 0
        int32_t esi_4 = (*(*eax_17 + 0x14))(eax_4) * (*(*eax_17 + 0x10))() * 2
        arg2[4] += esi_4 * 2
else
    int32_t eax_13 = arg2[0x5b]
    arg2[0x5b] = eax_13 + 1
    *(ebp_1[0x10] + 4) = eax_13
    int32_t* ebp_2 = ebp_1[0x10]
    (***ebp_2)(eax_4)
    *ebp_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c8)
