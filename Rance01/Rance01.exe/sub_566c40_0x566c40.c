// 函数: sub_566c40
// 地址: 0x566c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t totalNumberOfClusters
int32_t eax_1 = data_78c474 ^ &totalNumberOfClusters
int32_t versionInformation
sub_6bc670(&versionInformation, 0, 0x94)
versionInformation = 0x94
GetVersionExA(&versionInformation)
uint8_t var_114 = 0
void var_113
sub_6bc670(&var_113, 0, 0x104)
GetTempPathA(0x104, &var_114)
uint32_t totalNumberOfClusters_1 = 0
int32_t edi = 0
char var_111 = 0
int32_t var_19c

if (var_19c == 1)
    int16_t var_1a0
    
    if (var_1a0 u<= 0x3e8)
        goto label_566d89
    
    goto label_566ce9

int32_t var_1a8
enum MESSAGEBOX_RESULT result
uint32_t numberOfFreeClusters
uint32_t bytesPerSector

if (var_19c != 2 || var_1a8 u>= 4)
label_566ce9:
    result = GetProcAddress(GetModuleHandleA("kernel32.dll"), "GetDiskFreeSpaceExA")
    
    if (result != 0)
        result = result(&var_114, &totalNumberOfClusters, &bytesPerSector, &numberOfFreeClusters)
        
        if (result != 0)
            totalNumberOfClusters_1 = totalNumberOfClusters
            int32_t var_1c8
            edi = var_1c8
else
label_566d89:
    uint32_t sectorsPerCluster
    result = GetDiskFreeSpaceA(&var_114, &sectorsPerCluster, &bytesPerSector, 
        &numberOfFreeClusters, &totalNumberOfClusters)
    
    if (result != 0)
        totalNumberOfClusters_1 = sectorsPerCluster * bytesPerSector * numberOfFreeClusters
        edi = 0

if (edi u<= 0 && (edi u< 0 || (totalNumberOfClusters_1 & 0xfff00000) u< 0x20000000))
    int32_t var_1d8_3 = sx.d(var_114)
    result = sub_604c90(0x74be88)

sub_6b4885(eax_1 ^ &totalNumberOfClusters)
return result
