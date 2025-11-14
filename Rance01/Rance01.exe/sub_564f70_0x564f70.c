// 函数: sub_564f70
// 地址: 0x564f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724a86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* var_11c
int32_t eax_2 = data_78c474 ^ &var_11c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result

if (sub_674cf0(arg1 - 4) != 0)
    int32_t var_e8_1 = 0xf
    int32_t var_ec_1 = 0
    char var_fc = 0
    sub_401270(&var_fc, 9, "DrawGraph")
    int32_t var_c_1 = 0
    var_11c = &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_104_1 = 0xf
    int32_t var_108_1 = 0
    char var_118 = 0
    sub_401180(&var_118, 0xffffffff, &var_fc, 0)
    var_c_1.b = 2
    
    if (var_e8_1 u>= 0x10)
        int32_t var_130_1 = var_fc.d
        sub_6b4d5b()
    
    int32_t* (__fastcall* const data)(void* arg1) = var_11c->data
    int32_t var_e8_2 = 0xf
    int32_t var_ec_2 = 0
    var_fc = 0
    
    if (sub_40f110(data(eax_4)) != 0)
        if (sub_631e90() != 0)
            if (sub_408a90(arg1 - 4) != 0)
                var_c_1.b = 3
                void var_e0
                void var_c4
                sub_401800(sub_402be0(&var_e0, (*(*(arg1 + 0x4f8) + 8))()), &var_e0, &var_c4)
                var_c_1.b = 5
                sub_401110(&var_e0)
                var_c_1.b = 6
                void var_70
                sub_401800(sub_402be0(&var_fc, (*(*(arg1 + 0x10) + 0x24))()), &var_fc, &var_70)
                var_c_1.b = 8
                sub_401110(&var_fc)
                void var_a8
                sub_402be0(&var_a8, 0x72d931)
                var_c_1.b = 9
                sub_402be0(&var_e0, 0x74bcdc)
                var_c_1.b = 0xa
                void var_54
                sub_562ba0(&var_54, &var_e0, &var_a8)
                sub_401110(&var_e0)
                var_c_1.b = 0xd
                sub_401110(&var_a8)
                void var_8c
                sub_402be0(&var_8c, "MsgSkip.msk")
                var_c_1.b = 0xe
                var_c_1.b = 0xf
                void var_38
                char* eax_21
                int32_t edx_10
                eax_21, edx_10 =
                    sub_4c1d70(&var_54, &var_e0, sub_426250(&var_38, &var_c4, &var_70), &var_e0)
                var_c_1.b = 0x10
                var_c_1.b = 0x11
                void* ebx
                ebx.b = sub_5d1990(sub_4c1d70(&var_8c, edx_10, eax_21, &var_a8)) == 0
                sub_401110(&var_a8)
                sub_401110(&var_e0)
                var_c_1.b = 0xe
                sub_401110(&var_38)
                void* const var_130_10
                
                if (ebx.b == 0)
                    sub_595850()
                    
                    if (sub_67ef40() == 0)
                        var_130_10 = "GUIEngine"
                        goto label_565297
                    
                    sub_401110(&var_8c)
                    sub_401110(&var_54)
                    sub_401110(&var_70)
                    sub_401110(&var_c4)
                    sub_401040(&var_11c)
                    result.b = 1
                else
                    var_130_10 = &data_74bd08
                label_565297:
                    sub_604c90(var_130_10)
                    sub_401110(&var_8c)
                    sub_401110(&var_54)
                    sub_401110(&var_70)
                    sub_401110(&var_c4)
                    sub_401040(&var_11c)
                    result.b = 0
            else
                sub_604c90(0x74bcb0)
                sub_401040(&var_11c)
                result.b = 0
        else
            sub_604c90(0x74bc88)
            var_11c = &common::CStringWrapper::`vftable'{for `IString'}
            
            if (var_104_1 u< 0x10)
                result.b = 0
            else
                int32_t var_130_4 = var_118.d
                sub_6b4d5b()
                result.b = 0
    else
        sub_604c90("DrawGraph")
        var_11c = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_104_1 u>= 0x10)
            int32_t var_130_3 = var_118.d
            sub_6b4d5b()
        
        result.b = 0
else
    sub_604c90(0x74bc08)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_11c)
return result
