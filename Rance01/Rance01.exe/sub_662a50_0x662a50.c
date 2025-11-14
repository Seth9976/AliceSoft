// 函数: sub_662a50
// 地址: 0x662a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722ef1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_b4
int32_t eax_2 = data_78c474 ^ &var_b4
int32_t __saved_edi
int32_t var_c8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t ebx = arg2
int32_t* ebp = arg1
int32_t* var_a8 = ebp
var_b4 = ebx
int32_t* result

if (ebx == 0)
    result.b = 0
else
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    char var_9c = 0
    sub_401270(&var_9c, nullptr, 0x72d5e3)
    int32_t* esi_2 = nullptr
    int32_t var_4 = 0
    char* ecx_1 = *ebp
    
    if (&ecx_1[4] u> ebp[1])
        if (var_88_1 u>= 0x10)
            int32_t var_cc_3 = var_9c.d
            sub_6b4d5b()
        
        result.b = 0
    else
        uint32_t eax_11 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *ebp = &ecx_1[4]
        
        if (sub_40ff90(ebp, &var_9c, eax_11).b != 0)
            sub_401180(ebx, 0xffffffff, &var_9c, 0)
            uint32_t var_b0 = 0
            
            if (sub_5546f0(ebp, &var_b0) == 0)
                goto label_662c2d
            
            uint32_t var_ac
            
            if (var_b0 != 1)
            label_662d52:
                var_b4 = 0
                
                if (sub_5546f0(ebp, &var_b4) == 0)
                    goto label_662c2d
                
                var_ac = 0
                
                if (var_b4 s> 0)
                    while (true)
                        int32_t* eax_26 = operator new(0x34)
                        var_a8 = eax_26
                        var_4.b = 6
                        
                        if (eax_26 != 0)
                            sub_673190(eax_26)
                            esi_2 = eax_26
                        
                        var_4.b = 0
                        var_a8 = esi_2
                        sub_61b5a0(&var_a8, ebx + 0x20)
                        esi_2[0xc] = ebx
                        
                        if (sub_662a50(ebp, esi_2, arg3) == 0)
                            goto label_662c2d
                        
                        uint32_t eax_31 = var_ac + 1
                        var_ac = eax_31
                        
                        if (eax_31 s>= var_b4)
                            break
                        
                        esi_2 = nullptr
                
                sub_401110(&var_9c)
                result.b = 1
            else
                var_ac = 0
                
                if (sub_5546f0(ebp, &var_ac) == 0)
                    goto label_662c2d
                
                var_b0 = 0
                
                if (sub_5546f0(ebp, &var_b0) == 0 || var_b0 == 0)
                    goto label_662c2d
                
                char* eax_15 = sub_6697c0(arg3)
                
                if (eax_15 == 0)
                    goto label_662c2d
                
                uint32_t esi_3 = var_ac
                
                if (esi_3 - 1 u> 4)
                    goto label_662c2d
                
                bool eax_17
                
                switch (esi_3)
                    case 1
                        eax_17 = sub_661320(ebp, eax_15)
                    case 2
                        eax_17 = sub_661480(ebp, eax_15)
                    case 3
                        eax_17 = sub_6615e0(ebp, eax_15)
                    case 4
                        goto label_662c2d
                    case 5
                        eax_17 = sub_662590(arg3, ebp, eax_15)
                
                if (eax_17 != 0)
                    void var_80
                    sub_402be0(&var_80, 0x72d603)
                    var_4.b = 1
                    void var_64
                    
                    for (int32_t* i = *(var_b4 + 0x30); i != 0; i = i[0xc])
                        char* var_cc_15 = sub_66fc20(&var_64, i)
                        var_4.b = 2
                        void var_2c
                        sub_402c60(&var_2c, 0x731704, nullptr)
                        var_4.b = 3
                        var_4.b = 4
                        void var_48
                        sub_401ef0(&var_80, sub_4c1d70(&var_80, &var_48, &var_2c, &var_48))
                        sub_401110(&var_48)
                        sub_401110(&var_2c)
                        var_4.b = 1
                        sub_401110(&var_64)
                    
                    var_4.b = 5
                    sub_401180(&eax_15[0xc], 0xffffffff, 
                        sub_426250(&var_64, &var_80, &eax_15[0xc]), 0)
                    var_4.b = 1
                    sub_401110(&var_64)
                    uint32_t edi_5 = var_b4
                    sub_6732c0(edi_5, eax_15)
                    var_4.b = 0
                    sub_401110(&var_80)
                    ebp = var_a8
                    ebx = edi_5
                    esi_2 = nullptr
                    goto label_662d52
                
                sub_668d80(eax_15)
                char* var_cc_12 = eax_15
                sub_6b4d5b()
                uint32_t var_cc_13 = esi_3
                sub_604c90(0x731750)
            label_662c2d:
                sub_401110(&var_9c)
                result.b = 0
        else if (var_88_1 u< 0x10)
            result.b = 0
        else
            int32_t var_cc_2 = var_9c.d
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b4)
return result
