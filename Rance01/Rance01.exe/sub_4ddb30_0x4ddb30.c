// 函数: sub_4ddb30
// 地址: 0x4ddb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7226b7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_260
int32_t eax_2 = data_78c474 ^ &var_260
int32_t __saved_edi
int32_t var_274 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CEmitter::VTable* var_218
int80_t result = sub_4b9c10(&var_218)
int32_t var_4 = 0
int32_t var_220 = 0xf
int32_t var_224 = 0
char var_234 = 0
var_4.b = 1
void var_254

if (sub_51b970(&var_234, &var_254) != 0)
    void var_210
    sub_401180(&var_210, 0xffffffff, &var_234, 0)
    int32_t var_23c_1 = 0xf
    int32_t var_240_1 = 0
    char var_250 = 0
    sub_401270(&var_250, 1, 0x754e34)
    var_4.b = 2
    char* ecx_3 = var_250.d
    
    if (var_23c_1 u< 0x10)
        ecx_3 = &var_250
    
    char eax_7
    
    if (sub_51bc80(ecx_3, arg2) != 0)
        eax_7 = 1
    else
        char* eax_8 = var_250.d
        
        if (var_23c_1 u< 0x10)
            eax_8 = &var_250
        
        char* var_278_3 = eax_8
        sub_4e4340(0x75561c)
        eax_7 = 0
    
    int32_t ebx
    ebx.b = eax_7 == 0
    var_4.b = 1
    
    if (var_23c_1 u>= 0x10)
        int32_t var_278_4 = var_250.d
        sub_6b4d5b()
    
    if (ebx.b == 0)
        int32_t var_23c_2 = 0xf
        int32_t var_240_2 = 0
        var_250 = 0
        sub_401270(&var_250, 1, 0x754e38)
        var_4.b = 3
        char* ecx_5 = var_250.d
        
        if (var_23c_2 u< 0x10)
            ecx_5 = &var_250
        
        char eax_10
        
        if (sub_51bc80(ecx_5, arg2) != 0)
            eax_10 = 1
        else
            char* eax_11 = var_250.d
            
            if (var_23c_2 u< 0x10)
                eax_11 = &var_250
            
            char* var_278_6 = eax_11
            sub_4e4340(0x75561c)
            eax_10 = 0
        
        ebx.b = eax_10 == 0
        var_4.b = 1
        
        if (var_23c_2 u>= 0x10)
            int32_t var_278_7 = var_250.d
            sub_6b4d5b()
        
        if (ebx.b != 0)
            if (var_220 u< 0x10)
                goto label_4ddc96
            
            int32_t var_278_8 = var_234.d
            goto label_4ddc8e
        
        while (true)
            int32_t var_23c_3 = 0xf
            int32_t var_240_3 = 0
            var_250 = 0
            var_4.b = 4
            void var_258
            
            if (sub_51b970(&var_250, &var_258) != 0)
                int32_t eax_14 = var_240_3
                
                if (var_240_3 u>= 1)
                    eax_14 = 1
                
                char* ebx_1 = var_250.d
                char* edx_2 = ebx_1
                
                if (var_23c_3 u< 0x10)
                    edx_2 = &var_250
                
                int32_t eax_15 = sub_402320(eax_14, edx_2, 0x754e3c, eax_14)
                bool cond:2_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    if (var_240_3 u>= 1)
                        eax_15.b = var_240_3 != 1
                    else
                        eax_15 = 0xffffffff
                    
                    cond:2_1 = eax_15 == 0
                
                eax_15.b = cond:2_1
                
                if (eax_15.b != 0)
                    var_4.b = 1
                    sub_401110(&var_250)
                    sub_4e9070(&var_218, arg1 + 0xc)
                    sub_401110(&var_234)
                    sub_4ba0b0(&var_218)
                    int32_t* eax_81
                    eax_81.b = 1
                    goto label_4de72a
                
                int32_t eax_16 = var_240_3
                
                if (var_240_3 u>= 4)
                    eax_16 = 4
                
                char* edx_3 = ebx_1
                
                if (var_23c_3 u< 0x10)
                    edx_3 = &var_250
                
                bool eax_18
                
                if (sub_402320(eax_16, edx_3, 0x754e40, eax_16) != 0 || var_240_3 u< 4)
                label_4dde3b:
                    
                    if (sub_402680(0x754e48, &var_250) == 0)
                        if (sub_402680(0x754e54, &var_250) == 0)
                            if (sub_402680(0x754e64, &var_250) == 0)
                                if (sub_402680(0x754e70, &var_250) == 0)
                                    if (sub_402680(0x754e88, &var_250) == 0)
                                        if (sub_402680(0x754e94, &var_250) == 0)
                                            char* edi_8 = &var_250
                                            char eax_25 = sub_402680(0x754ea0, edi_8)
                                            char eax_26
                                            
                                            if (eax_25 == 0)
                                                eax_26 = sub_402680(0x754ea8, edi_8)
                                            
                                            if (eax_25 != 0 || eax_26 != 0)
                                                eax_18 = sub_4dede0(arg2, &var_218)
                                            else if (sub_402680(0x754eb4, edi_8) == 0)
                                                if (sub_402680(0x754ec4, &var_250) == 0)
                                                    if (sub_402680(0x754ed4, &var_250) == 0)
                                                        if (sub_402680(0x754ee4, &var_250) == 0)
                                                            if (sub_402680(0x754ef0, &var_250) == 0)
                                                                if (sub_402680(0x754f00, &var_250) == 0)
                                                                    if (sub_402680(0x754f0c, &var_250) == 0)
                                                                        if (sub_402680(0x754f18, &var_250) == 0)
                                                                            if (sub_402680(0x754f28, &var_250) == 0)
                                                                                if (sub_402680(0x754f38, &var_250) == 0)
                                                                                    if (sub_402680(0x754f48, &var_250) == 0)
                                                                                        if (sub_402680(0x754f58, &var_250) == 0)
                                                                                            if (sub_402680(0x754f64, &var_250) == 0)
                                                                                                if (sub_402680(0x754f74, &var_250) == 0)
                                                                                                    if (sub_402680(0x754f80, &var_250) == 0)
                                                                                                        if (sub_402680(0x754f90, &var_250) == 0)
                                                                                                            if (sub_402680(0x754fa0, &var_250) == 0)
                                                                                                                if (sub_402680(0x754fa8, &var_250) == 0)
                                                                                                                    if (sub_402680(0x754fc4, &var_250) == 0)
                                                                                                                        if (sub_402680(0x754fe0, &var_250) == 0)
                                                                                                                            if (sub_402680(0x754ff8, &var_250) == 0)
                                                                                                                                if (sub_402680(0x755018, &var_250) == 0)
                                                                                                                                    if (sub_402680(0x755038, &var_250) == 0)
                                                                                                                                        if (sub_402680(0x755054, &var_250) == 0)
                                                                                                                                            if (sub_402680(0x755064, &var_250) == 0)
                                                                                                                                                if (sub_402680(0x755074, &var_250) == 0)
                                                                                                                                                    if (sub_402680(0x755084, &var_250) == 0)
                                                                                                                                                        if (sub_402680(0x755094, &var_250) == 0)
                                                                                                                                                            if (sub_402680(0x7550a4, &var_250) == 0)
                                                                                                                                                                if (sub_402680(0x7550b4, &var_250) == 0)
                                                                                                                                                                    if (sub_402680(0x7550c4, &var_250) == 0)
                                                                                                                                                                        if (sub_402680(0x7550d4, &var_250) == 0)
                                                                                                                                                                            if (sub_402680(0x7550e4, &var_250) == 0)
                                                                                                                                                                                if (sub_402680(0x7550f4, &var_250) == 0)
                                                                                                                                                                                    if (sub_402680(0x755104, &var_250) == 0)
                                                                                                                                                                                        if (sub_402680(0x755114, &var_250) == 0)
                                                                                                                                                                                            if (sub_402680(0x755120, &var_250) == 0)
                                                                                                                                                                                                if (sub_402680(0x755128, &var_250) == 0)
                                                                                                                                                                                                    if (sub_402680(0x755130, &var_250) == 0)
                                                                                                                                                                                                        if (sub_402680(0x75513c, &var_250) == 0)
                                                                                                                                                                                                            if (sub_402680(0x755144, &var_250) == 0)
                                                                                                                                                                                                                if (sub_402680(0x755154, &var_250) == 0)
                                                                                                                                                                                                                    if (sub_402680(0x75515c, &var_250) == 0)
                                                                                                                                                                                                                        if (sub_402680(0x755168, &var_250) == 0)
                                                                                                                                                                                                                            if (sub_402680(0x755174, &var_250) == 0)
                                                                                                                                                                                                                                if (sub_402680(0x75517c, &var_250) == 0)
                                                                                                                                                                                                                                    if (sub_402680(0x755188, &var_250) == 0)
                                                                                                                                                                                                                                        if (sub_402680(0x75519c, &var_250) == 0)
                                                                                                                                                                                                                                            if (sub_402680(0x7551a8, &var_250) == 0)
                                                                                                                                                                                                                                                if (sub_402680(0x7551bc, &var_250) == 0)
                                                                                                                                                                                                                                                    if (sub_402680(0x7551c8, &var_250) == 0)
                                                                                                                                                                                                                                                        if (sub_402680(0x7551d8, &var_250) == 0)
                                                                                                                                                                                                                                                            if (sub_402680(0x7551e8, &var_250) == 0)
                                                                                                                                                                                                                                                                char* eax_82 = var_250.d
                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                if (var_23c_3 u< 0x10)
                                                                                                                                                                                                                                                                    eax_82 = &var_250
                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                char* var_278_75 = eax_82
                                                                                                                                                                                                                                                                ebx_1.b = sub_4e4340(0x7551f8)
                                                                                                                                                                                                                                                                sub_401110(&var_250)
                                                                                                                                                                                                                                                                sub_401110(&var_234)
                                                                                                                                                                                                                                                                sub_4ba0b0(&var_218)
                                                                                                                                                                                                                                                                int32_t* eax_84
                                                                                                                                                                                                                                                                eax_84.b = ebx_1.b
                                                                                                                                                                                                                                                                goto label_4de72a
                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                            eax_18 =
                                                                                                                                                                                                                                                                sub_4e08d0(sub_4ba9d0, arg2, &var_218)
                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                            eax_18 =
                                                                                                                                                                                                                                                                sub_4e08d0(sub_4ba9c0, arg2, &var_218)
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                        eax_18 =
                                                                                                                                                                                                                                                            sub_4e08d0(sub_4ba9b0, arg2, &var_218)
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                    eax_18 = sub_4e0a00(arg2, &var_218)
                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                eax_18 = sub_4e41e0(arg2, &var_218)
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                            eax_18 = sub_4e3fe0(arg2, &var_218)
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                        eax_18 = sub_4e3ec0(arg2, &var_218)
                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                    eax_18 = sub_4e3da0(arg2, &var_218)
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                eax_18 = sub_4e3b70(arg2, &var_218)
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                            eax_18 = sub_4e3950(arg2, &var_218)
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                        eax_18 = sub_4e3830(arg2, &var_218)
                                                                                                                                                                                                                else
                                                                                                                                                                                                                    eax_18 = sub_4e3710(arg2, &var_218)
                                                                                                                                                                                                            else
                                                                                                                                                                                                                eax_18 = sub_4e35f0(arg2, &var_218)
                                                                                                                                                                                                        else
                                                                                                                                                                                                            eax_18 = sub_4e34d0(arg2, &var_218)
                                                                                                                                                                                                    else
                                                                                                                                                                                                        eax_18 = sub_4e33b0(arg2, &var_218)
                                                                                                                                                                                                else
                                                                                                                                                                                                    eax_18 = sub_4e3290(arg2, &var_218)
                                                                                                                                                                                            else
                                                                                                                                                                                                eax_18 = sub_4e3170(arg2, &var_218)
                                                                                                                                                                                        else
                                                                                                                                                                                            eax_18 = sub_4e3050(arg2, &var_218)
                                                                                                                                                                                    else
                                                                                                                                                                                        eax_18 = sub_4e2f30(arg2, &var_218)
                                                                                                                                                                                else
                                                                                                                                                                                    eax_18 = sub_4e2e10(arg2, &var_218)
                                                                                                                                                                            else
                                                                                                                                                                                eax_18 = sub_4e2cf0(arg2, &var_218)
                                                                                                                                                                        else
                                                                                                                                                                            eax_18 = sub_4e1890(arg2, &var_218)
                                                                                                                                                                    else
                                                                                                                                                                        eax_18 = sub_4e16c0(arg2, &var_218)
                                                                                                                                                                else
                                                                                                                                                                    eax_18 = sub_4e1fd0(arg2, &var_218)
                                                                                                                                                            else
                                                                                                                                                                eax_18 = sub_4e1e00(arg2, &var_218)
                                                                                                                                                        else
                                                                                                                                                            eax_18 = sub_4e1c30(arg2, &var_218)
                                                                                                                                                    else
                                                                                                                                                        eax_18 = sub_4e1a60(arg2, &var_218)
                                                                                                                                                else
                                                                                                                                                    eax_18 = sub_4e2540(arg2, &var_218)
                                                                                                                                            else
                                                                                                                                                eax_18 = sub_4e2370(arg2, &var_218)
                                                                                                                                        else
                                                                                                                                            eax_18 = sub_4e21a0(arg2, &var_218)
                                                                                                                                    else
                                                                                                                                        eax_18 = sub_4e0f20(arg2, &var_218)
                                                                                                                                else
                                                                                                                                    eax_18 = sub_4e2bd0(arg2, &var_218)
                                                                                                                            else
                                                                                                                                eax_18 = sub_4e2ab0(arg2, &var_218)
                                                                                                                        else
                                                                                                                            eax_18 = sub_4e0de0(arg2, &var_218)
                                                                                                                    else
                                                                                                                        eax_18 = sub_4e2970(arg2, &var_218)
                                                                                                                else
                                                                                                                    eax_18 = sub_4e2830(arg2, &var_218)
                                                                                                            else
                                                                                                                eax_18 = sub_4e2710(arg2, &var_218)
                                                                                                        else
                                                                                                            eax_18 = sub_4e1480(arg2, &var_218)
                                                                                                    else
                                                                                                        eax_18 = sub_4e1360(arg2, &var_218)
                                                                                                else
                                                                                                    eax_18 = sub_4e1200(arg2, &var_218)
                                                                                            else
                                                                                                eax_18 = sub_4e1040(arg2, &var_218)
                                                                                        else
                                                                                            eax_18 =
                                                                                                sub_4e0c40(&var_218, arg1, arg2)
                                                                                    else
                                                                                        eax_18 =
                                                                                            sub_4e08d0(sub_4ba420, arg2, &var_218)
                                                                                else
                                                                                    eax_18 =
                                                                                        sub_4e08d0(sub_4ba410, arg2, &var_218)
                                                                            else
                                                                                eax_18 =
                                                                                    sub_4e08d0(sub_4ba400, arg2, &var_218)
                                                                        else
                                                                            eax_18 =
                                                                                sub_4e08d0(sub_4ba3f0, arg2, &var_218)
                                                                    else
                                                                        eax_18 =
                                                                            sub_4e08d0(sub_4ba3e0, arg2, &var_218)
                                                                else
                                                                    eax_18 =
                                                                        sub_4e08d0(sub_4ba3d0, arg2, &var_218)
                                                            else
                                                                eax_18 = sub_4e04f0(arg2, &var_218)
                                                        else
                                                            eax_18 = sub_4e0060(arg2, &var_218)
                                                    else
                                                        eax_18 = sub_4dfc80(arg2, &var_218)
                                                else
                                                    eax_18 = sub_4df8a0(arg2, &var_218)
                                            else
                                                eax_18 = sub_4df4c0(arg2, &var_218)
                                        else
                                            eax_18 = sub_4e08d0(sub_4ba440, arg2, &var_218)
                                    else
                                        eax_18 = sub_4e08d0(sub_4ba430, arg2, &var_218)
                                else
                                    eax_18 = sub_4decc0(arg2, &var_218)
                            else
                                eax_18 = sub_4e08d0(sub_4ba320, arg2, &var_218)
                        else
                            eax_18 = sub_4deaf0(arg2, &var_218)
                    else
                        eax_18 = sub_4de940(arg2, &var_218)
                else
                    int32_t eax_17
                    eax_17.b = var_240_3 != 4
                    
                    if (eax_17 != 0)
                        goto label_4dde3b
                    
                    eax_18 = sub_4de750(arg2, &var_218)
                
                if (eax_18 != 0)
                    if (var_23c_3 u< 0x10)
                        continue
                    else
                        int32_t var_278_73 = var_250.d
                        sub_6b4d5b()
                        continue
            
            sub_401110(&var_250)
            sub_401110(&var_234)
            break
    else
        if (var_220 u< 0x10)
            goto label_4ddc96
        
        int32_t var_278_5 = var_234.d
    label_4ddc8e:
        sub_6b4d5b()
    label_4ddc96:
        int32_t var_220_2 = 0xf
        int32_t var_224_2 = 0
        var_234 = 0
else
    if (var_220 u>= 0x10)
        int32_t var_278_2 = var_234.d
        sub_6b4d5b()
    
    int32_t var_220_1 = 0xf
    int32_t var_224_1 = 0
    var_234 = 0

sub_4ba0b0(&var_218)
int32_t* eax_85
eax_85.b = 0
label_4de72a:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_260)
return result
