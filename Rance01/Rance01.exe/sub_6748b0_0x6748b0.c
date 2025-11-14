// 函数: sub_6748b0
// 地址: 0x6748b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEXFile::mainex::CMainEXFile::VTable** var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797dd8

if (ecx != 0)
    (*(*ecx + 4))(data_78c474 ^ &var_10)
    data_797dd8 = 0

struct IEXFile::mainex::CMainEXFile::VTable** eax_4 = operator new(0x68)
var_10 = eax_4
int32_t var_4 = 0
struct IEXFile::mainex::CMainEXFile::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_6732f0(eax_4)

data_797dd8 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
