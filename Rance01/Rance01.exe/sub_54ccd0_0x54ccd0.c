// 函数: sub_54ccd0
// 地址: 0x54ccd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7261cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_14c
int32_t eax_2 = data_78c474 ^ &var_14c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t eax_6 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx = **(arg1 + 0x2b0)
int32_t eax_12 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
int32_t var_148 = edx
char result
int32_t var_164

if (edx u>= eax_12)
    var_164 = esi
    result = sub_53d1c0(eax_12, edx, arg1, 0x750e34)
else
    eax_12 = *(arg1 + 0x1e4)
    edx = *(eax_12 + (edx << 2))
    int32_t* var_138_1 = edx
    
    if (edx != 0)
        int32_t edx_3 = (*(arg1 + 0x1e8) - eax_12) s>> 2
        
        if (esi u< edx_3)
            eax_12 = *(eax_12 + (esi << 2))
        
        if (esi u< edx_3 && eax_12 != 0)
            int32_t var_11c_1 = 0xf
            int32_t var_120_1 = 0
            char var_130 = 0
            int32_t var_4 = 0
            sub_401270(&var_130, 3, 0x750e6c)
            int128_t* edx_4
            
            if (var_138_1[1] != 0)
                edx_4 = *var_138_1
            else
                edx_4 = nullptr
            
            char* eax_14 = edx_4
            char i
            
            do
                i = *eax_14
                eax_14 = &eax_14[1]
            while (i != 0)
            sub_402cb0(&var_130, edx_4, eax_14 - &eax_14[1])
            int32_t var_164_3 = eax_6
            void var_114
            _swprintf(&var_114, 0x100, "(%d)")
            void* eax_18 = &var_114
            char i_1
            
            do
                i_1 = *eax_18
                eax_18 += 1
            while (i_1 != 0)
            void var_113
            sub_402cb0(&var_130, &var_114, eax_18 - &var_113)
            sub_402cb0(&var_130, 0x750f88, 5)
            
            if ((**(arg1 + 4))(eax_4) != 0)
                int128_t* edx_6
                
                if (*(eax_12 + 4) != 0)
                    edx_6 = *eax_12
                else
                    edx_6 = nullptr
                
                char* eax_25 = edx_6
                char i_2
                
                do
                    i_2 = *eax_25
                    eax_25 = &eax_25[1]
                while (i_2 != 0)
                sub_402cb0(&var_130, edx_6, eax_25 - &eax_25[1])
                sub_402cb0(&var_130, 0x750f90, 2)
            
            sub_402cb0(&var_130, 0x750f94, 0x14)
            int32_t eax_31
            int32_t edx_7
            eax_31, edx_7 = sub_552880(arg1 + 0x1dc, var_148)
            void* ebx
            
            if (eax_31.b != 0)
                int32_t eax_32
                int32_t edx_9
                eax_32, edx_9 = sub_552880(arg1 + 0x1dc, esi)
                
                if (eax_32.b != 0)
                    enum MESSAGEBOX_RESULT eax_35
                    
                    if (ecx == 0)
                        char* eax_34 = var_130.d
                        
                        if (var_11c_1 u< 0x10)
                            eax_34 = &var_130
                        
                        eax_35 = sub_604d80(eax_34)
                    
                    if (ecx != 0 || eax_35 == IDYES)
                        sub_401110(&var_130)
                        result = 1
                    else
                        sub_53b400(arg1)
                        sub_401110(&var_130)
                        result = 0
                else
                    ebx.b = sub_53d1c0(eax_32, edx_9, arg1, 0x751018)
                    sub_401110(&var_130)
                    result = ebx.b
            else
                ebx.b = sub_53d1c0(eax_31, edx_7, arg1, 0x750fd0)
                
                if (var_11c_1 u>= 0x10)
                    int32_t var_164_7 = var_130.d
                    sub_6b4d5b()
                
                result = ebx.b
        else
            int32_t var_164_1 = esi
            result = sub_53d1c0(eax_12, edx_3, arg1, 0x750f48)
    else
        var_164 = esi
        result = sub_53d1c0(eax_12, edx, arg1, 0x750e34)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_14c)
return result
