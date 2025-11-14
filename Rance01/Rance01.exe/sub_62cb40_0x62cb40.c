// 函数: sub_62cb40
// 地址: 0x62cb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d00b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x4030)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
int32_t arg_4024
fsbase->NtTib.ExceptionList = &arg_4024
char* ebx = arg2
char i = *ebx
void arg_20
void* result = &arg_20

if (i != 0)
    do
        if (i u< 0x81)
            if (i u< 0xe0)
                goto label_62cbc2
            
            goto label_62cbaf
        
        if (i u<= 0x9f || i u>= 0xe0)
        label_62cbaf:
            *result = i
            *(result + 1) = ebx[1]
            result += 2
            ebx = &ebx[2]
        else
        label_62cbc2:
            
            if (i != 0xa)
                *result = i
                result += 1
            else
                *result = 0
                sub_62cd40(arg1, &arg_20)
                int32_t arg_18 = 0xf
                int32_t arg_14 = 0
                char arg_4 = 0
                sub_401270(&arg_4, nullptr, 0x72d7ea)
                int32_t arg_402c = 0
                sub_405220(&arg_4, &arg1[0x53])
                arg_402c = 0xffffffff
                
                if (arg_18 u>= 0x10)
                    int32_t var_24_2 = arg_4.d
                    sub_6b4d5b()
                
                result = &arg_20
            
            ebx = &ebx[1]
        
        i = *ebx
    while (i != 0)
    
    if (result u> &arg_20)
        *result = 0
        result = sub_62cd40(arg1, &arg_20)

HWND hWnd = arg1[1]

if (hWnd != 0)
    int32_t ecx_2 = arg1[0x54] - arg1[0x53]
    GetClientRect(hWnd, &ExceptionList)
    int32_t ecx_3 = arg1[0x27]
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(ecx_3)
    int32_t eax_13
    int32_t edx_5
    edx_5:eax_13 = sx.q(var_4 - ExceptionList)
    sub_631160(arg1, divs.dp.d(sx.q(__return_addr - var_8), arg1[0x29] + ecx_3))
    sub_6312a0(arg1, divs.dp.d(edx_5:eax_13, (eax_10 - edx_4) s>> 1))
    sub_6311e0(arg1, ecx_2 s/ 0x1c - 1, 1)
    result = (*(*arg1 + 0x3c))(eax_4)

fsbase->NtTib.ExceptionList = arg_4024
sub_6b4885(eax_2 ^ &ExceptionList)
return result
