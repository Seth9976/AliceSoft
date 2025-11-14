// 函数: sub_623f50
// 地址: 0x623f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d1e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_20c
int32_t eax_2 = data_78c474 ^ &var_20c
int32_t __saved_edi
int32_t var_220 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

switch (arg3)
    case nullptr
        sub_401140(arg1.b, "void", arg1)
    case 0xa
        sub_401140(arg1.b, 0x733e9c, arg1)
    case 0xb
        sub_401140(arg1.b, "float", arg1)
    case 0xc
        sub_401140(arg1.b, "string", arg1)
    case 0xd
        void var_12c
        sub_623e70(arg1, arg4, &var_12c, arg2)
        int32_t var_4 = 0
        sub_401ef0(arg1, &var_12c)
        int32_t var_4_1 = 0xffffffff
        sub_401110(&var_12c)
    case 0xe
        sub_401140(arg1.b, "array@int", arg1)
    case 0xf
        sub_401140(arg1.b, "array@float", arg1)
    case 0x10
        sub_401140(arg1.b, "array@string", arg1)
    case 0x11
        void var_19c
        sub_623ee0(arg1, arg4, &var_19c, arg2)
        void var_164
        void* eax_9 = &var_164
        int32_t var_4_2 = 1
        var_4_2.b = 2
        var_4_2.b = 3
        void var_1d4
        sub_401ef0(arg1, sub_4b3c20(eax_9, sub_402be0(eax_9, "array@"), &var_19c, &var_1d4))
        sub_401110(&var_1d4)
        sub_401110(&var_164)
        int32_t var_4_3 = 0xffffffff
        sub_401110(&var_19c)
    case 0x12
        sub_401140(arg1.b, "ref int", arg1)
    case 0x13
        sub_401140(arg1.b, "ref float", arg1)
    case 0x14
        sub_401140(arg1.b, "ref string", arg1)
    case 0x15
        void var_1b8
        sub_623e70(arg1, arg4, &var_1b8, arg2)
        void var_1f0
        void* eax_12 = &var_1f0
        int32_t var_4_4 = 4
        sub_402be0(eax_12, "ref ")
        var_4_4.b = 5
        var_4_4.b = 6
        sub_401ef0(arg1, sub_4b3c20(eax_12, &var_20c, &var_1b8, &var_20c))
        sub_401110(&var_20c)
        sub_401110(&var_1f0)
        int32_t var_4_5 = 0xffffffff
        sub_401110(&var_1b8)
    case 0x16
        sub_401140(arg1.b, "ref arra@int", arg1)
    case 0x17
        sub_401140(arg1.b, "ref array@float", arg1)
    case 0x18
        sub_401140(arg1.b, "ref array@string", arg1)
    case 0x19
        void var_148
        void* var_224_20 = &var_148
        int32_t var_4_6 = 7
        void var_180
        sub_567130(&var_180, "ref array@", sub_623e70(arg1, arg4, &var_148, arg2))
        var_4_6.b = 8
        sub_401ef0(arg1, &var_180)
        sub_401110(&var_180)
        int32_t var_4_7 = 0xffffffff
        sub_401110(&var_148)
    case 0x1b
        sub_401140(arg1.b, "functype", arg1)
    case 0x1e
        sub_401140(arg1.b, "array@functype", arg1)
    case 0x1f
        sub_401140(arg1.b, "ref functype", arg1)
    case 0x20
        sub_401140(arg1.b, "ref array@functype", arg1)
    case 0x2f
        sub_401140(arg1.b, "bool", arg1)
    case 0x32
        sub_401140(arg1.b, "array@bool", arg1)
    case 0x33
        sub_401140(arg1.b, "ref bool", arg1)
    case 0x34
        sub_401140(arg1.b, "ref array@bool", arg1)
    case 0x3f
        sub_401140(arg1.b, "delegate", arg1)
    default
        sub_401270(arg1, 3, 0x733fc4)

int32_t* result

if (arg3 - 0xe u<= 0x26)
    switch (arg3 + &lookup_table_6243c8[0x3a])
        case &lookup_table_624410, &lookup_table_624410[1], &lookup_table_624410[2], 
                &lookup_table_624410[3], &lookup_table_624410[8], &lookup_table_624410[9], 
                &lookup_table_624410[0xa], &lookup_table_624410[0xb], &lookup_table_624410[0x10], 
                &lookup_table_624410[0x12], &lookup_table_624410[0x24], &lookup_table_624410[0x26]
            result = (*(**(arg2 + 4) + 0x24))(arg4)
            
            if (result != 0xffffffff)
                result += 1
            
            if (result s> 1)
                int32_t* result_1 = result
                void var_110
                _swprintf(&var_110, 0x100, 0x733fc8)
                void* eax_18 = &var_110
                char i
                
                do
                    i = *eax_18
                    eax_18 += 1
                while (i != 0)
                void var_10f
                sub_402cb0(arg1, &var_110, eax_18 - &var_10f)
            else if (result == 0xffffffff)
                sub_402cb0(arg1, &data_733fcc, 2)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_20c)
return result
