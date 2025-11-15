// 函数: GetOSInfo
// 地址: 0x1000d580
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t esi
int32_t var_124 = esi
int32_t edi
int32_t var_128 = edi
SYSTEM_INFO systemInfo

if (arg1 == 0)
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(__security_cookie ^ &systemInfo ^ &systemInfo)
    return eax_1

int32_t var_134 = 0
int32_t var_e4 = 0xf
int32_t var_e8 = 0
char var_f8 = 0
OSVERSIONINFOEXA versionInformation
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wProductType = 1
int32_t dwlConditionMask
int32_t edx
dwlConditionMask, edx = VerSetConditionMask(0, VER_PRODUCT_TYPE, 1)
int32_t var_12c = edx
BOOL eax_2 = VerifyVersionInfoA(&versionInformation, VER_PRODUCT_TYPE, dwlConditionMask)
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.dwMinorVersion = 0
int32_t var_134_1 = 0

if (eax_2 != 1)
    versionInformation.dwMajorVersion = 6
    int32_t ConditionMask_1
    int32_t edx_3
    ConditionMask_1, edx_3 = VerSetConditionMask(0, VER_MAJORVERSION, 1)
    int32_t var_134_3 = edx_3
    int32_t dwlConditionMask_2
    int32_t edx_4
    dwlConditionMask_2, edx_4 = VerSetConditionMask(ConditionMask_1, VER_MINORVERSION, 1)
    int32_t var_12c_3 = edx_4
    
    if (VerifyVersionInfoA(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, 
            dwlConditionMask_2) != 1)
        if (sub_10001020(6, 1) == 0)
            if (sub_10001020(6, 2) == 0)
                if (sub_10001020(6, 3) == 0)
                    if (sub_10001020(0xa, 0) != 0)
                        sub_100012d0("WindowsServer2016")
                else
                    sub_100012d0("WindowsServer2012R2")
            else
                sub_100012d0("WindowsServer2012")
        else
            sub_100012d0("WindowsServer2008R2")
    else
        sub_100014d0(&var_f8, "WindowsServer2008", 0x13)
else
    versionInformation.dwMajorVersion = 5
    int32_t ConditionMask
    int32_t edx_1
    ConditionMask, edx_1 = VerSetConditionMask(0, VER_MAJORVERSION, 1)
    int32_t var_134_2 = edx_1
    int32_t dwlConditionMask_1
    int32_t edx_2
    dwlConditionMask_1, edx_2 = VerSetConditionMask(ConditionMask, VER_MINORVERSION, 1)
    int32_t var_12c_1 = edx_2
    
    if (VerifyVersionInfoA(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, 
            dwlConditionMask_1) != 1)
        char const* const var_12c_2
        
        if (sub_10001020(5, 1) == 0)
            if (sub_10001020(6, 0) == 0)
                if (sub_10001020(6, 1) == 0)
                    if (sub_10001020(6, 2) == 0)
                        if (sub_10001020(6, 3) == 0)
                            if (sub_10001020(0xa, 0) == 0)
                                var_12c_2 = &data_10013aec
                            else
                                var_12c_2 = "Windows10"
                        else
                            var_12c_2 = "Windows8.1"
                    else
                        var_12c_2 = "Windows8"
                else
                    var_12c_2 = "Windows7"
            else
                var_12c_2 = "WindowsVista"
        else
            var_12c_2 = "WindowsXP"
        
        sub_100012d0(var_12c_2)
    else
        sub_100014d0(&var_f8, "Windows2000", 0xd)

int32_t var_134_4 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = 5
int32_t dwlConditionMask_3
int32_t edx_5
dwlConditionMask_3, edx_5 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_12c_4 = edx_5

if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_3) != 1)
    int32_t var_134_5 = 0
    versionInformation.dwOSVersionInfoSize = 0x9c
    versionInformation.wServicePackMajor = 4
    int32_t dwlConditionMask_4
    int32_t edx_6
    dwlConditionMask_4, edx_6 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
    int32_t var_12c_5 = edx_6
    
    if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_4) != 1)
        int32_t var_134_6 = 0
        versionInformation.dwOSVersionInfoSize = 0x9c
        versionInformation.wServicePackMajor = 3
        int32_t dwlConditionMask_5
        int32_t edx_7
        dwlConditionMask_5, edx_7 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
        int32_t var_12c_6 = edx_7
        void* const var_12c_7
        
        if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_5) != 1)
            if (sub_100010a0(2) == 0)
                if (sub_100010a0(1) == 0)
                    if (sub_100010a0(0) == 0)
                        var_12c_7 = &data_10013b8c
                    else
                        var_12c_7 = &data_10013b88
                else
                    var_12c_7 = &data_10013b80
            else
                var_12c_7 = &data_10013b78
        else
            var_12c_7 = &data_10013b70
        
        sub_10001290(var_12c_7)
    else
        sub_100016e0(&var_f8, "SP", 5)
else
    sub_100016e0(&var_f8, "SP", 5)

__builtin_memset(&systemInfo, 0, 0x24)
GetNativeSystemInfo(&systemInfo)

switch (zx.d(systemInfo..dwOemId.w))
    case 0
        sub_10001290("INTEL")
    case 5
        sub_10001290("AR")
    case 6
        sub_10001290("IA64")
    case 9
        sub_10001290("AMD64")
    default
        sub_100016e0(&var_f8, "et", 5)

void var_e0
char* eax_23 = sub_10001110(&var_e0, 5)
void var_c8
sub_100017c0(&var_f8, sub_10001cc0(eax_23.b, eax_23, &var_c8, 0x10013bc0), 0, 0xffffffff)
sub_10001310(&var_c8)
sub_10001310(&var_e0)
char* eax_25 = sub_10001110(&var_c8, 1)
sub_100017c0(&var_f8, sub_10001cc0(eax_25.b, eax_25, &var_e0, 0x10013bc4), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_27 = sub_10001110(&var_c8, 0x59)
sub_100017c0(&var_f8, sub_10001cc0(eax_27.b, eax_27, &var_e0, 0x10013bc8), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_29 = sub_10001110(&var_c8, 0x5a)
sub_100017c0(&var_f8, sub_10001cc0(eax_29.b, eax_29, &var_e0, 0x10013bcc), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_31 = sub_10001110(&var_c8, 0x1001)
sub_100017c0(&var_f8, sub_10001cc0(eax_31.b, eax_31, &var_e0, 0x10013bd0), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_33 = sub_10001110(&var_c8, 0x1002)
sub_100017c0(&var_f8, sub_10001cc0(eax_33.b, eax_33, &var_e0, 0x10013bd4), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_35 = sub_10001110(&var_c8, 3)
sub_100017c0(&var_f8, sub_10001cc0(eax_35.b, eax_35, &var_e0, 0x10013bd8), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_37 = sub_10001110(&var_c8, 7)
sub_100017c0(&var_f8, sub_10001cc0(eax_37.b, eax_37, &var_e0, 0x10013bdc), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_39 = sub_10001110(&var_c8, 2)
sub_100017c0(&var_f8, sub_10001cc0(eax_39.b, eax_39, &var_e0, 0x10013be0), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_41 = sub_10001110(&var_c8, 4)
sub_100017c0(&var_f8, sub_10001cc0(eax_41.b, eax_41, &var_e0, 0x10013be4), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
char* eax_43 = sub_10001110(&var_c8, 6)
sub_100017c0(&var_f8, sub_10001cc0(eax_43.b, eax_43, &var_e0, 0x10013be8), 0, 0xffffffff)
sub_10001310(&var_e0)
sub_10001310(&var_c8)
sub_100017c0(&var_f8, sub_10001110(&var_e0, 8), 0, 0xffffffff)
sub_10001310(&var_e0)
char* edx_19 = &var_f8

if (var_e4 u>= 0x10)
    edx_19 = var_f8.d

(*(*arg1 + 4))(edx_19)
var_fc
sub_10001310(&var_fc)
int32_t eax_47
eax_47.b = 1
int32_t __saved_ebx
int32_t var_10
@__security_check_cookie@4(var_10 ^ &__saved_ebx)
return eax_47
