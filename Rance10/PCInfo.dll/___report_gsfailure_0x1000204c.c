// 函数: ___report_gsfailure
// 地址: 0x1000204c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_10016968 = eax
data_10016964 = ecx
data_10016960 = edx
int32_t entry_ebx
data_1001695c = entry_ebx
int32_t entry_esi
data_10016958 = entry_esi
int32_t entry_edi
data_10016954 = entry_edi
int16_t ss
data_10016980 = ss
int16_t cs
data_10016974 = cs
int16_t ds
data_10016950 = ds
int16_t es
data_1001694c = es
int16_t fs
data_10016948 = fs
int16_t gs
data_10016944 = gs
bool d
data_10016978 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
int32_t entry_ebp
data_1001696c = entry_ebp
data_10016970 = __return_addr
data_1001697c = &stack_cookie
data_100168b8 = 0x10001
data_10016874 = data_10016970
data_10016868 = 0xc0000409
data_1001686c = 1
data_10016878 = 1
int32_t var_32c_1 = 4
data_1001687c = 2
int32_t var_32c_2 = 4
uint32_t __security_cookie_1 = __security_cookie
(&__security_cookie_1)[1] = data_10016000
___raise_securityfailure(&data_1000f1e0)
noreturn
