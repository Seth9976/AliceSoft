// 函数: ___acrt_FlsFree@4
// 地址: 0x10006b87
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_c = esi
uint32_t dwTlsIndex = 0x100100c8
int32_t eax_2 = try_get_function(4, "FlsFree", 0x100100c0, dwTlsIndex)
dwTlsIndex = arg1
int32_t* esp = &dwTlsIndex
BOOL result

if (eax_2 == 0)
    result = TlsFree(dwTlsIndex)
    esp = &var_c
else
    result = eax_2()

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
