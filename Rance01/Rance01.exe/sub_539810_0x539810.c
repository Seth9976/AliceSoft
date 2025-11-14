// 函数: sub_539810
// 地址: 0x539810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7115c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
int32_t edi = ebx[1]
int32_t edx

if (edi != 0)
    edx = *ebx
else
    edx = 0

void* eax_3

if (edi != 0)
    eax_3 = *ebx
else
    eax_3 = nullptr

int32_t edx_1 = edx + edi
char* result

if (eax_3 + 8 u> edx_1 || eax_3 + 0xc u> edx_1)
    result.b = 0
else
    uint32_t esi_7 =
        ((zx.d(*(eax_3 + 0xb)) << 8 | zx.d(*(eax_3 + 0xa))) << 8 | zx.d(*(eax_3 + 9))) << 8
        | zx.d(*(eax_3 + 8))
    
    if (eax_3 + 0x10 u> edx_1)
        result.b = 0
    else
        int32_t ebp_9 =
            ((zx.d(*(eax_3 + 0xf)) << 8 | zx.d(*(eax_3 + 0xe))) << 8 | zx.d(*(eax_3 + 0xd))) << 8
            | zx.d(*(eax_3 + 0xc))
        
        if (ebp_9 u> edi - 0x10)
            result.b = 0
        else
            arg_4 = nullptr
            int32_t var_4 = 0
            result = sub_5606a0(&arg_4)
            
            if (result.b != 0)
                sub_404f60(esi_7, arg1)
                int32_t edx_4
                
                if (ebx[1] != 0)
                    edx_4 = *ebx
                else
                    edx_4 = 0
                
                int32_t ecx_4 = *arg1
                int32_t* esi_9 = arg_4
                
                if (esi_9 != 0)
                    result = (*(*esi_9 + 8))(ecx_4, arg1[1] - ecx_4, edx_4 + 0x10, ebp_9)
                
                if (esi_9 != 0 && result.b != 0)
                    int32_t var_4_3 = 0xffffffff
                    (*(*esi_9 + 4))(eax_2)
                    result.b = 1
                else
                    int32_t var_4_2 = 0xffffffff
                    
                    if (esi_9 != 0)
                        (*(*esi_9 + 4))(eax_2)
                    
                    result.b = 0
            else
                int32_t var_4_1 = 0xffffffff
                int32_t* ecx_3 = arg_4
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 4))(eax_2)
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
