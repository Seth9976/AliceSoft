// 函数: sub_618d80
// 地址: 0x618d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg2
void* var_b8 = ebp
int32_t var_4 = 0
int32_t* edi = ebp + 0x7c
int32_t* var_64
char var_48
int32_t edx
sub_401b60(&var_64, sub_401a00(&var_48, edx, &arg1[7]), &var_48)
var_4.b = 1
int32_t* var_c8
int32_t* var_c4
int32_t* var_c0
int32_t i
int32_t var_50
int32_t var_34
char* var_2c

if (i != 0)
    do
        int32_t* eax_7
        int32_t edx_2
        eax_7, edx_2 = sub_61b4d0(edi, &var_64)
        
        if (eax_7 != 0)
            edi = eax_7
        else
            int32_t* eax_8 = operator new(0x40)
            var_c4 = eax_8
            var_4.b = 2
            
            if (eax_8 == 0)
                var_c8 = nullptr
            else
                *eax_8 = 0
                eax_8[6] = 0xf
                eax_8[5] = 0
                eax_8[1].b = 0
                sub_401180(&eax_8[1], 0xffffffff, &var_64, 0)
                var_4.b = 3
                eax_8[0xd] = 0xf
                eax_8[0xc] = 0
                eax_8[8].b = 0
                sub_401180(&eax_8[8], 0xffffffff, &var_64, 0)
                eax_8[0xf] = 0
                var_c8 = eax_8
            
            var_4.b = 1
            int32_t* eax_9 = operator new(0x48)
            int32_t* esi_2
            
            if (eax_9 == 0)
                esi_2 = nullptr
            else
                *eax_9 = 0
                eax_9[1] = 0
                eax_9[2].b = 0
                eax_9[8] = 0xf
                eax_9[7] = 0
                eax_9[3].b = 0
                eax_9[0xa] = 0
                eax_9[0xb] = 0
                eax_9[0xc] = 0
                eax_9[0xe] = 0
                eax_9[0xf] = 0
                eax_9[0x10] = 0
                esi_2 = eax_9
            
            *esi_2 = *edi
            int32_t lParam_1 = edi[1]
            var_c0 = esi_2
            int32_t var_ac_1 = 0xffff0002
            int32_t var_a8_1 = 0x27
            int32_t var_90_1 = 5
            int32_t var_8c_1 = 5
            int32_t lParam = lParam_1
            
            if (var_50 u< 0x10)
                int32_t** var_98_2 = &var_64
            else
                int32_t* var_98_1 = var_64
            
            int32_t var_94_1 = i + 1
            int32_t* var_84_1 = var_c8
            esi_2[1] = SendMessageA(*esi_2, 0x1100, 0, &lParam)
            sub_401180(&esi_2[3], 0xffffffff, &var_64, 0)
            int32_t eax_11 = edi[0xb]
            int32_t ecx_10
            
            if (&var_c0 u< eax_11)
                ecx_10 = edi[0xa]
            
            if (&var_c0 u>= eax_11 || ecx_10 u> &var_c0)
                if (eax_11 == edi[0xc])
                    sub_4307a0(&edi[0xa])
                
                int32_t** eax_16 = edi[0xb]
                
                if (eax_16 != 0)
                    *eax_16 = esi_2
            else
                if (eax_11 == edi[0xc])
                    sub_4307a0(&edi[0xa])
                
                int32_t* eax_14 = edi[0xb]
                
                if (eax_14 != 0)
                    *eax_14 = *(edi[0xa] + ((&var_c0 - ecx_10) s>> 2 << 2))
            
            edi[0xb] += 4
            var_c4 = esi_2[1]
            edi = esi_2
            void* eax_19
            eax_19, edx_2 = sub_50fa20(var_b8 + 4, &var_c4)
            *eax_19 = var_c8
        
        sub_401a00(&var_2c, edx_2, &var_48)
        char* edx_7 = &var_48
        int32_t var_18
        
        if (&var_48 != &var_2c)
            if (var_34 u>= 0x10)
                int32_t var_e4_3 = var_48.d
                sub_6b4d5b()
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            void* const var_1c
            
            if (var_18 u>= 0x10)
                edx_7 = var_2c
                var_48.d = edx_7
                var_2c = nullptr
            else
                edx_7 = sub_6b49d0(&var_48, &var_2c, var_1c + 1, eax_4)
            
            void* const var_38_2 = var_1c
            var_34 = var_18
            var_18 = 0xf
            var_1c = nullptr
            var_2c.b = 0
        
        if (var_18 u>= 0x10)
            char* var_e4_5 = var_2c
            edx_7 = sub_6b4d5b()
        
        var_4.b = 0
        
        if (var_50 u>= 0x10)
            int32_t* var_e4_6 = var_64
            edx_7 = sub_6b4d5b()
        
        sub_401b60(&var_64, edx_7, &var_48)
        var_4.b = 1
    while (i != 0)
    
    ebp = var_b8

if (var_50 u>= 0x10)
    int32_t* var_e4_7 = var_64
    sub_6b4d5b()

int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_e4_8 = var_48.d
    sub_6b4d5b()

int32_t var_34_2 = 0xf
int32_t var_38_3 = 0
var_48 = 0
sub_401270(&var_48, nullptr, 0x72d815)
int32_t var_4_2 = 5
void* eax_27 = sub_6199e0(&arg1[7], ebp, &var_48)
int32_t var_4_3 = 0xffffffff

if (var_34_2 u>= 0x10)
    int32_t var_e4_10 = var_48.d
    sub_6b4d5b()

int32_t var_34_3 = 0xf
int32_t var_38_4 = 0
var_48 = 0
int32_t* ebp_4

if (eax_27 == 0)
    ebp_4 = arg1
else
    int32_t* eax_28 = operator new(0x40)
    var_c4 = eax_28
    int32_t var_4_4 = 6
    int32_t* edi_1
    
    if (eax_28 == 0)
        edi_1 = nullptr
    else
        int32_t ecx_20 = arg1[0xe]
        edi_1 = sub_61af60(ecx_20, arg1, eax_28, 1, &arg1[7], ecx_20)
    
    ebp_4 = arg1
    int32_t var_4_5 = 0xffffffff
    var_c4 = sub_61b450(eax_27, 0, edi_1)[1]
    *sub_50fa20(var_b8 + 4, &var_c4) = edi_1

int32_t esi_10 = ebp_4[0xf]
int32_t ecx_22 = ebp_4[0x10] - esi_10
var_c4 = nullptr

if (ecx_22 s/ 0x7c s> 0)
    var_c0 = nullptr
    
    while (true)
        void* esi_7 = esi_10 + var_c0
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c.b = 0
        int32_t var_4_6 = 7
        int32_t var_50_1 = 0xf
        int32_t var_54 = 0
        var_64.b = 0
        var_4_6.b = 8
        sub_61a1c0(esi_7, &var_2c, &var_64)
        int32_t* edi_2 = var_64
        
        if (var_50_1 u< 0x10)
            edi_2 = &var_64
        
        uint32_t eax_40 = sub_6b557b(edi_2, sub_401170(ebp_4), ebp_4[4])
        int32_t edi_3
        
        if (eax_40 != 0)
            int32_t** eax_41
            
            if (var_54 != 0)
                eax_41 = var_64
                
                if (var_50_1 u< 0x10)
                    eax_41 = &var_64
            
            if (var_54 == 0 || *eax_41 != 0x7e)
                var_c8 = 6
                edi_3 = 4
            else
                var_c8 = 4
                edi_3 = 3
        else
            var_c8 = 3
            edi_3 = eax_40 + 2
        
        void* eax_42 = sub_6199e0(&ebp_4[7], var_b8, ebp_4)
        
        if (eax_42 != 0)
            int32_t* eax_43 = operator new(0x40)
            int32_t* var_b4_1 = eax_43
            var_4_6.b = 9
            int32_t* edi_4
            
            if (eax_43 == 0)
                edi_4 = nullptr
            else
                int32_t ecx_25 = *(esi_7 + 0x78)
                edi_4 = sub_61af60(ecx_25, &var_64, eax_43, edi_3, esi_7 + 0x5c, ecx_25)
            
            var_4_6.b = 8
            int32_t* var_e4_17 = edi_4
            var_c8 = sub_61b3b0(&var_64, eax_42)
            *sub_50fa20(var_b8 + 4, &var_c8) = edi_4
        
        if (var_50_1 u>= 0x10)
            int32_t* var_e4_18 = var_64
            sub_6b4d5b()
        
        int32_t var_4_7 = 0xffffffff
        int32_t var_50_2 = 0xf
        int32_t var_54_1 = 0
        var_64.b = 0
        
        if (var_18_1 u>= 0x10)
            char* var_e4_19 = var_2c
            sub_6b4d5b()
        
        esi_10 = arg1[0xf]
        int32_t ecx_27 = arg1[0x10]
        int32_t* edi_5 = var_c4
        var_c0 = &var_c0[0x1f]
        var_c4 = edi_5 + 1
        
        if (edi_5 + 1 s>= (ecx_27 - esi_10) s/ 0x7c)
            break
        
        ebp_4 = arg1

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
