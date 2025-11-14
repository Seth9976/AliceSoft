// 函数: sub_669ba0
// 地址: 0x669ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* ebx = nullptr
int32_t* var_34 = esi
struct _EXCEPTION_REGISTRATION_RECORD** var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2e8ba2e9, esi[1] - *esi)
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1
char var_55 = 0

if (result s> 0)
    int32_t var_50_1 = 0
    int32_t result_1 = result
    
    while (true)
        void* ebp_2 = *esi + var_50_1
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_401180(&var_30, 0xffffffff, ebp_2 + 0x18, 0)
        var_4.b = 1
        int32_t esi_3 = (var_40 - ebx) s/ 0x1c
        int32_t var_54_1 = 0
        
        if (esi_3 s> 0)
            int32_t* ebx_1 = &ebx[4]
            
            while (true)
                char* ecx_5 = var_30.d
                
                if (var_1c_1 u< 0x10)
                    ecx_5 = &var_30
                
                int32_t edi_1 = *ebx_1
                int32_t eax_10 = var_20_1
                
                if (edi_1 u< eax_10)
                    eax_10 = edi_1
                
                int32_t* edx_5
                
                if (ebx_1[1] u< 0x10)
                    edx_5 = &ebx_1[-4]
                else
                    edx_5 = ebx_1[-4]
                
                result = sub_402320(eax_10, edx_5, ecx_5, eax_10)
                bool cond:1_1 = result == 0
                
                if (result == 0)
                    if (edi_1 u>= var_20_1)
                        int32_t result_2
                        result_2.b = edi_1 != var_20_1
                        result = result_2
                    else
                        result = 0xffffffff
                    
                    cond:1_1 = result == 0
                
                result.b = cond:1_1
                
                if (result.b != 0)
                    break
                
                int32_t eax_13 = var_54_1 + 1
                ebx_1 = &ebx_1[7]
                var_54_1 = eax_13
                
                if (eax_13 s>= esi_3)
                    goto label_669cfa
        
        if (esi_3 s<= 0 || var_54_1 s>= esi_3)
        label_669cfa:
            sub_405220(&var_30, &var_44)
        else
            var_55 = 1
        
        if (*(ebp_2 + 0x14) == 4)
            var_55 |= sub_669ba0(ebp_2 + 4).b
        
        var_4.b = 0
        
        if (var_1c_1 u>= 0x10)
            int32_t var_74_3 = var_30.d
            sub_6b4d5b()
        
        var_50_1 += 0x58
        int32_t result_3 = result_1
        result_1 -= 1
        ebx = var_44
        
        if (result_3 == 1)
            break
        
        esi = var_34
    
    if (ebx != 0)
        int32_t* esi_4 = ebx
        
        if (ebx != var_40)
            do
                if (esi_4[5] u>= 0x10)
                    int32_t var_74_4 = *esi_4
                    sub_6b4d5b()
                
                esi_4[5] = 0xf
                esi_4[4] = 0
                *esi_4 = 0
                esi_4 = &esi_4[7]
            while (esi_4 != var_40)
        
        int32_t* var_74_5 = ebx
        sub_6b4d5b()

result.b = var_55
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
