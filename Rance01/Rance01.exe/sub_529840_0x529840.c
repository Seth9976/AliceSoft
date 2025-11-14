// 函数: sub_529840
// 地址: 0x529840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (result[0x11] - result[0x10]) s>> 2)
        result = *(result[0x10] + (arg1 << 2))
        
        if (result != 0)
            void* esi = result[0x80]
            
            if (esi != 0)
                void* var_1c_1 = esi + 0x68
                EnterCriticalSection(*(esi + 0x68))
                char var_20_1 = 1
                int32_t var_c_1 = 0
                sub_50d390(esi + 0x6c)
                LeaveCriticalSection(*(esi + 0x68))
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
