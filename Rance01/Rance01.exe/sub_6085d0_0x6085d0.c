// 函数: sub_6085d0
// 地址: 0x6085d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719581
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, nullptr, 0x72d862)
var_4.b = 1
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
sub_401270(&var_80, nullptr, 0x72d863)
var_4.b = 2
int32_t var_88 = 0xf
int32_t var_8c = 0
char var_9c = 0
sub_401270(&var_9c, nullptr, 0x72d871)
var_4.b = 3
bool cond:0 = sub_60cc90(arg2, &var_80, &var_64, &var_9c, &var_48).b == 0

if (var_88 u>= 0x10)
    int32_t var_d8_1 = var_9c.d
    sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c_1 = 0
var_9c = 0

if (var_6c u>= 0x10)
    int32_t var_d8_2 = var_80.d
    sub_6b4d5b()

var_4.b = 0
int32_t var_6c_1 = 0xf
int32_t var_70_1 = 0
var_80 = 0

if (var_34 u>= 0x10)
    int32_t var_d8_3 = var_48.d
    sub_6b4d5b()

HRESULT lpBuffer

if (cond:0 != 0)
label_608a6f:
    
    if (var_50 u>= 0x10)
        int32_t var_d8_19 = var_64.d
        sub_6b4d5b()
    
label_608a7e:
    lpBuffer.b = 0
else
    int32_t ecx_3 = *(arg1 + 0xa68) - *(arg1 + 0xa64)
    int32_t var_b0_1 = 0
    
    if (ecx_3 s/ 0x50 s> 0)
        int32_t var_b8_1 = 0
        void* edi_2 = arg1
        
        while (true)
            void* ebp_2 = *(edi_2 + 0xa64) + var_b8_1
            var_4.b = 4
            char* eax_12
            int32_t edx_6
            eax_12, edx_6 =
                sub_4c1d70(ebp_2 + 0x24, &var_9c, sub_401800(ecx_3, &var_64, &var_48), &var_9c)
            var_4.b = 6
            
            if (var_34 u>= 0x10)
                int32_t var_d8_5 = var_48.d
                eax_12, edx_6 = sub_6b4d5b()
            
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            int32_t var_2c
            char* eax_14
            int32_t edx_7
            eax_14, edx_7 = sub_4018a0(eax_12, edx_6, &var_9c, &var_2c)
            var_4.b = 7
            sub_401d60(&var_80, edx_7, eax_14)
            var_4.b = 8
            sub_604500(&var_80)
            
            if (var_6c_1 u>= 0x10)
                int32_t var_d8_8 = var_80.d
                sub_6b4d5b()
            
            int32_t var_6c_2 = 0xf
            int32_t var_70_2 = 0
            var_80 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_d8_9 = var_2c
                sub_6b4d5b()
            
            int32_t var_ac_1 = 0xffffffff
            int32_t var_a8_1 = 0
            int32_t var_a4_1 = 0
            var_4.b = 9
            char* edx_9 = var_9c.d
            
            if (var_88_1 u< 0x10)
                edx_9 = &var_9c
            
            char* eax_17 = edx_9
            var_6c_1 = 0xf
            int32_t var_70_3 = 0
            var_80 = 0
            char i
            
            do
                i = *eax_17
                eax_17 = &eax_17[1]
            while (i != 0)
            sub_401270(&var_80, eax_17 - &eax_17[1], edx_9)
            char* lpFileName = var_80.d
            
            if (var_6c_1 u< 0x10)
                lpFileName = &var_80
            
            HRESULT edi_5 = CreateFileA(lpFileName, 0x40000000, FILE_SHARE_NONE, nullptr, 
                CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr)
            HRESULT var_ac_2 = edi_5
            
            if (edi_5 != 0xffffffff)
                int32_t var_a8_2 = 0
                int32_t var_a4_2 = 0xffffffff
                lpBuffer.b = 1
            else
                lpBuffer.b = 0
            
            bool var_b9_1 = lpBuffer.b == 0
            
            if (var_6c_1 u>= 0x10)
                int32_t var_d8_11 = var_80.d
                sub_6b4d5b()
            
            if (var_b9_1 != 0)
                if (edi_5 != 0xffffffff)
                    CloseHandle(edi_5)
                
                if (var_88_1 u>= 0x10)
                    int32_t var_d8_15 = var_9c.d
                    sub_6b4d5b()
                
                int32_t var_88_2 = 0xf
                int32_t var_8c_2 = 0
                var_9c = 0
                
                if (var_50 u< 0x10)
                    goto label_608a7e
                
                int32_t var_d8_16 = var_64.d
                sub_6b4d5b()
                lpBuffer.b = 0
                goto label_608ae6
            
            if ((*(*(ebp_2 + 0x40) + 0x14))(eax_4) s> 1)
                int32_t eax_22 = (*(*(ebp_2 + 0x40) + 0x14))()
                lpBuffer = (*(*(ebp_2 + 0x40) + 0x18))()
                
                if (edi_5 == 0xffffffff)
                    goto label_608a49
                
                uint32_t numberOfBytesWritten
                
                if (WriteFile(edi_5, lpBuffer, eax_22 - 1, &numberOfBytesWritten, nullptr) == 0
                        || eax_22 - 1 != numberOfBytesWritten)
                    if (edi_5 == 0xffffffff)
                        goto label_608a49
                    
                    CloseHandle(edi_5)
                label_608a49:
                    
                    if (var_88_1 u>= 0x10)
                        int32_t var_d8_18 = var_9c.d
                        sub_6b4d5b()
                    
                    int32_t var_88_3 = 0xf
                    int32_t var_8c_3 = 0
                    var_9c = 0
                    break
                
                uint32_t var_a8_3 = eax_22 - 1
            
            if (edi_5 != 0xffffffff)
                if (CloseHandle(edi_5) == 0)
                    CloseHandle(edi_5)
                    
                    if (var_88_1 u>= 0x10)
                        int32_t var_d8_21 = var_9c.d
                        sub_6b4d5b()
                    
                    int32_t var_88_4 = 0xf
                    int32_t var_8c_4 = 0
                    var_9c = 0
                    
                    if (var_50 u< 0x10)
                        goto label_608a7e
                    
                    int32_t var_d8_22 = var_64.d
                    sub_6b4d5b()
                    lpBuffer.b = 0
                    goto label_608ae6
                
                int32_t var_ac_3 = 0xffffffff
            
            var_4.b = 0
            
            if (var_88_1 u>= 0x10)
                int32_t var_d8_13 = var_9c.d
                sub_6b4d5b()
            
            ecx_3 = *(arg1 + 0xa68) - *(arg1 + 0xa64)
            var_b8_1 += 0x50
            int32_t esi_7 = var_b0_1 + 1
            var_b0_1 = esi_7
            
            if (esi_7 s>= ecx_3 s/ 0x50)
                goto label_608ac7
            
            edi_2 = arg1
        
        goto label_608a6f
    
label_608ac7:
    
    if (var_50 u>= 0x10)
        int32_t var_d8_23 = var_64.d
        sub_6b4d5b()
    
    lpBuffer.b = 1

label_608ae6:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return lpBuffer
