// 函数: sub_629070
// 地址: 0x629070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg1[0x33]
int32_t temp0 = divs.dp.d(sx.q(GetScrollPos(arg1[0x22], SB_VERT) * ebx + (arg2 u>> 0x10)), ebx)
int32_t eax_11 = arg1[0x36]

if (eax_11 == 3)
    void* ebp_1 = arg1[0x37]
    
    if (temp0 s>= 0 && temp0 s< (*(**(ebp_1 + 4) + 0x2c))(eax_4))
        int32_t eax_39 = (*(**(arg1[0x37] + 4) + 0x3c))((*(**(ebp_1 + 4) + 0x30))(
            (*(**(ebp_1 + 4) + 0x2c))() - 1 - temp0 - 1))
        
        if (eax_39 != 0xffffffff)
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            int32_t var_4_2 = 0
            sub_624480(arg1[0x37], &var_64, temp0)
            char* edx_15 = var_64.d
            
            if (var_50_1 u< 0x10)
                edx_15 = &var_64
            
            void var_2c
            sub_402be0(&var_2c, edx_15)
            var_4_2.b = 1
            sub_6298a0(eax_39, arg1[0x3a], &var_2c, 1)
            sub_401110(&var_2c)
            arg1[0x4d] = temp0
            sub_401110(&var_64)
else if (eax_11 == 4)
    int32_t eax_14
    int32_t edx_2
    edx_2:eax_14 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
    int32_t edx_3 = edx_2 s>> 4
    
    if ((edx_3 u>> 0x1f) + edx_3 u> 1)
        sub_62a3b0(&arg1[0x3b])
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
        int32_t edx_5 = edx_4 s>> 4
        arg1[0x4d] = *(arg1[0x3b] + ((edx_5 u>> 0x1f) + edx_5) * 0x28 - 0x24)
        sub_629b60(arg1)
        char var_48
        int32_t* eax_21 = sub_62a230(arg1, &var_48)
        int32_t var_4 = 2
        sub_401180(arg1[0x39] + 0x48, 0xffffffff, eax_21, 0)
        int32_t var_4_1 = 0xffffffff
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_7c_2 = var_48.d
            sub_6b4d5b()
        
        void* ecx_10 = arg1[0x39]
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        sub_61fb20(ecx_10)
        int32_t eax_23
        int32_t edx_7
        edx_7:eax_23 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
        int32_t edx_8 = edx_7 s>> 4
        int32_t eax_28 = *(arg1[0x3b] + ((edx_8 u>> 0x1f) + edx_8) * 0x28 - 0x20)
        
        if (eax_28 s>= 0)
            sub_621ee0(arg1, eax_28, 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return 0
