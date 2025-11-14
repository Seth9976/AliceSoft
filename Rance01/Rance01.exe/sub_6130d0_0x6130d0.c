// 函数: sub_6130d0
// 地址: 0x6130d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fa39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10_1 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_4 = 0
int32_t var_10_2 = 1

if (arg2 - 0xa u> 0x3a)
    sub_401270(arg1, 3, 0x7350c4)
else
    switch (arg2 + &jump_table_613320[0x1a]:2)
        case &lookup_table_613394
            sub_401140(ecx.b, 0x734f48, arg1)
        case &lookup_table_613394[1]
            sub_401140(ecx.b, "float", arg1)
        case &lookup_table_613394[2]
            sub_401140(ecx.b, "string", arg1)
        case &lookup_table_613394[3]
            sub_401140(ecx.b, "struct", arg1)
        case &lookup_table_613394[4]
            sub_401140(ecx.b, "array@int", arg1)
        case &lookup_table_613394[5]
            sub_401140(ecx.b, "array@float", arg1)
        case &lookup_table_613394[6]
            sub_401140(ecx.b, "array@string", arg1)
        case &lookup_table_613394[7]
            sub_405e30(sub_401140(ecx.b, "array@", arg1), "struct", arg1)
        case &lookup_table_613394[8]
            sub_401140(ecx.b, "ref int", arg1)
        case &lookup_table_613394[9]
            sub_401140(ecx.b, "ref float", arg1)
        case &lookup_table_613394[0xa]
            sub_401140(ecx.b, "ref string", arg1)
        case &lookup_table_613394[0xb]
            sub_405e30(sub_401140(ecx.b, "ref ", arg1), "struct", arg1)
        case &lookup_table_613394[0xc]
            sub_401140(ecx.b, "ref array@int", arg1)
        case &lookup_table_613394[0xd]
            sub_401140(ecx.b, "ref array@float", arg1)
        case &lookup_table_613394[0xe]
            sub_401140(ecx.b, "ref array@string", arg1)
        case &lookup_table_613394[0xf]
            sub_405e30(sub_401140(ecx.b, "ref array@", arg1), "struct", arg1)
        case &lookup_table_613394[0x10], &lookup_table_613394[0x12], &lookup_table_613394[0x13], 
                &lookup_table_613394[0x17], &lookup_table_613394[0x18], &lookup_table_613394[0x19], 
                &lookup_table_613394[0x1a], &lookup_table_613394[0x1b], &lookup_table_613394[0x1c], 
                &lookup_table_613394[0x1d], &lookup_table_613394[0x1e], &lookup_table_613394[0x1f], 
                &lookup_table_613394[0x20], &lookup_table_613394[0x21], &lookup_table_613394[0x22], 
                &lookup_table_613394[0x23], &lookup_table_613394[0x24], &lookup_table_613394[0x26], 
                &lookup_table_613394[0x27], &lookup_table_613394[0x2b], &lookup_table_613394[0x2c], 
                &lookup_table_613394[0x2d], &lookup_table_613394[0x2e], &lookup_table_613394[0x2f], 
                &lookup_table_613394[0x30], &lookup_table_613394[0x31], &lookup_table_613394[0x32], 
                &lookup_table_613394[0x33], &lookup_table_613394[0x34], &lookup_table_613394[0x36], 
                &lookup_table_613394[0x37]
            sub_401270(arg1, 3, 0x7350c4)
        case &lookup_table_613394[0x11]
            sub_401140(ecx.b, "functype", arg1)
        case &lookup_table_613394[0x14]
            sub_401140(ecx.b, "array@functype", arg1)
        case &lookup_table_613394[0x15]
            sub_401140(ecx.b, "ref functype", arg1)
        case &lookup_table_613394[0x16]
            sub_401140(ecx.b, "ref array@functype", arg1)
        case &lookup_table_613394[0x25]
            sub_401140(ecx.b, "bool", arg1)
        case &lookup_table_613394[0x28]
            sub_401140(ecx.b, "array@bool", arg1)
        case &lookup_table_613394[0x29]
            sub_401140(ecx.b, "ref bool", arg1)
        case &lookup_table_613394[0x2a]
            sub_401140(ecx.b, "ref array@bool", arg1)
        case &lookup_table_613394[0x35]
            sub_401140(ecx.b, "delegate", arg1)
        case &lookup_table_613394[0x38]
            sub_401140(ecx.b, "array@delegate", arg1)
        case &lookup_table_613394[0x39]
            sub_401140(ecx.b, "ref delegate", arg1)
        case &lookup_table_613394[0x3a]
            sub_401140(ecx.b, "ref array@delegate", arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
