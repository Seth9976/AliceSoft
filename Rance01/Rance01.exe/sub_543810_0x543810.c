// 函数: sub_543810
// 地址: 0x543810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t edi
int32_t var_64 = edi
int32_t var_68 = data_78c474 ^ &var_64
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_4.b = 1
int32_t* result

if (sub_54d120(arg1, 0xf, edi, arg1, &var_48, "S_FIND").b != 0)
    if (sub_54d120(arg1, 0xf, edi, arg1, &var_2c, "S_FIND").b != 0)
        var_54 = nullptr
        char* var_50_1
        
        if (var_18 u< 0x10)
            var_50_1 = &var_2c
        else
            var_50_1 = var_2c.d
        
        void* edi_1 = nullptr
        
        if (var_1c s<= 0)
        label_543996:
            **(arg1 + 0x2b0) = 0xffffffff
        else
            while (true)
                char* eax_7 = var_48.d
                
                if (var_34 u< 0x10)
                    eax_7 = &var_48
                
                char* esi_1 = edi_1 + var_50_1
                
                if (sub_6b557b(esi_1, eax_7, var_38) == 0)
                    **(arg1 + 0x2b0) = var_54
                    break
                
                uint32_t eax_8
                eax_8.b = *esi_1
                
                if (eax_8.b u< 0x81)
                    if (eax_8.b u< 0xe0)
                        edi_1 += 1
                    else
                        edi_1 += 2
                else if (eax_8.b u<= 0x9f || eax_8.b u>= 0xe0)
                    edi_1 += 2
                else
                    edi_1 += 1
                
                var_54 += 1
                
                if (edi_1 s>= var_1c)
                    goto label_543996
        
        *(arg1 + 0x2b0) += 4
        
        if (var_34 u>= 0x10)
            int32_t var_6c_6 = var_48.d
            sub_6b4d5b()
        
        var_48 = 0
        int32_t var_38_3 = 0
        int32_t var_34_3 = 0xf
        
        if (var_18 u>= 0x10)
            int32_t var_6c_7 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        if (var_34 u>= 0x10)
            int32_t var_6c_3 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_6c_4 = var_2c.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_34 u>= 0x10)
        int32_t var_6c_1 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_6c_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
