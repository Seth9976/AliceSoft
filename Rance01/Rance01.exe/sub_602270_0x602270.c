// 函数: sub_602270
// 地址: 0x602270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = nullptr
int128_t* edi = nullptr
int128_t* var_28 = nullptr
char* var_24 = nullptr
int32_t var_20 = 0
int32_t var_c_1 = 0
uint8_t buffer

while (true)
    BOOL hFile = *arg1
    uint32_t numberOfBytesRead
    
    if (hFile != 0xffffffff && arg1[1] + 1 u<= arg1[2]
            && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 1)
        arg1[1] += 1
        
        if (buffer == 0)
            break
        
        if (&buffer u>= esi || edi u> &buffer)
            if (esi == var_20)
                void* eax_8 = esi - edi
                
                if (eax_8 u> 0xfffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                void* ecx_7 = var_20 - edi
                
                if (eax_8 + 1 u> ecx_7)
                    uint32_t edx_5 = ecx_7 u>> 1
                    uint8_t* ecx_8
                    
                    if (0xffffffff - edx_5 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_5
                    else
                        ecx_8 = nullptr
                    
                    if (ecx_8 u< eax_8 + 1)
                        ecx_8 = eax_8 + 1
                    
                    sub_424860(&var_28, ecx_8)
                    esi = var_24
                    edi = var_28
            
            if (esi != 0)
                uint8_t* eax_3
                eax_3.b = buffer
                *esi = eax_3.b
            
            esi = &esi[1]
            var_24 = esi
            continue
        
        void* ebx_2 = &buffer - edi
        
        if (esi != var_20)
        label_602360:
            
            if (esi != 0)
                *esi = *(ebx_2 + edi)
            
            esi = &esi[1]
            var_24 = esi
            continue
        else
            void* eax_5 = esi - edi
            
            if (eax_5 u<= 0xfffffffe)
                void* ecx_4 = var_20 - edi
                
                if (eax_5 + 1 u> ecx_4)
                    uint32_t edx_3 = ecx_4 u>> 1
                    uint32_t ecx_5
                    
                    if (0xffffffff - edx_3 u>= ecx_4)
                        ecx_5 = ecx_4 + edx_3
                    else
                        ecx_5 = 0
                    
                    if (ecx_5 u< eax_5 + 1)
                        ecx_5 = eax_5 + 1
                    
                    sub_424860(&var_28, ecx_5)
                    esi = var_24
                    edi = var_28
                
                goto label_602360
        
        sub_6b47bf("vector<T> too long")
        noreturn
    
    if (edi != 0)
        int128_t* var_48_3 = edi
        sub_6b4d5b()
    
    hFile.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return hFile

buffer = 0
sub_54e400(&buffer, &var_28)
int128_t* ebx_3 = var_28
char* eax_9 = ebx_3
char i

do
    i = *eax_9
    eax_9 = &eax_9[1]
while (i != 0)
sub_401270(arg2, eax_9 - &eax_9[1], ebx_3)

if (ebx_3 != 0)
    int128_t* var_48_5 = ebx_3
    sub_6b4d5b()

int32_t* eax_11
eax_11.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
