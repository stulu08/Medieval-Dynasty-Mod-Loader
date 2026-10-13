#include "../SDK.h"
#include "StreamableRenderAsset.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ForceMipLevelsToBeResidentTimestamp
// Declaration: double ForceMipLevelsToBeResidentTimestamp
double UStreamableRenderAsset::M_GetForceMipLevelsToBeResidentTimestamp() const {
	return Read<double>((byte*)this + 64);
}
double* UStreamableRenderAsset::M_PtrGetForceMipLevelsToBeResidentTimestamp() {
	return reinterpret_cast<double*>((byte*)this + 64);
}
void UStreamableRenderAsset::M_SetForceMipLevelsToBeResidentTimestamp(const double& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of NumCinematicMipLevels
// Declaration: int32_t NumCinematicMipLevels
int32_t UStreamableRenderAsset::M_GetNumCinematicMipLevels() const {
	return Read<int32_t>((byte*)this + 72);
}
int32_t* UStreamableRenderAsset::M_PtrGetNumCinematicMipLevels() {
	return reinterpret_cast<int32_t*>((byte*)this + 72);
}
void UStreamableRenderAsset::M_SetNumCinematicMipLevels(const int32_t& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of StreamingIndex
// Declaration: int32_t StreamingIndex
int32_t UStreamableRenderAsset::M_GetStreamingIndex() const {
	return Read<int32_t>((byte*)this + 76);
}
int32_t* UStreamableRenderAsset::M_PtrGetStreamingIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 76);
}
void UStreamableRenderAsset::M_SetStreamingIndex(const int32_t& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of CachedCombinedLODBias
// Declaration: int32_t CachedCombinedLODBias
int32_t UStreamableRenderAsset::M_GetCachedCombinedLODBias() const {
	return Read<int32_t>((byte*)this + 80);
}
int32_t* UStreamableRenderAsset::M_PtrGetCachedCombinedLODBias() {
	return reinterpret_cast<int32_t*>((byte*)this + 80);
}
void UStreamableRenderAsset::M_SetCachedCombinedLODBias(const int32_t& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of NeverStream
// Declaration: unsigned char NeverStream : 1
unsigned char UStreamableRenderAsset::M_GetNeverStream() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetNeverStream() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetNeverStream(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bGlobalForceMipLevelsToBeResident
// Declaration: unsigned char bGlobalForceMipLevelsToBeResident : 1
unsigned char UStreamableRenderAsset::M_GetbGlobalForceMipLevelsToBeResident() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetbGlobalForceMipLevelsToBeResident() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetbGlobalForceMipLevelsToBeResident(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bHasStreamingUpdatePending
// Declaration: unsigned char bHasStreamingUpdatePending : 1
unsigned char UStreamableRenderAsset::M_GetbHasStreamingUpdatePending() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetbHasStreamingUpdatePending() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetbHasStreamingUpdatePending(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bForceMiplevelsToBeResident
// Declaration: unsigned char bForceMiplevelsToBeResident : 1
unsigned char UStreamableRenderAsset::M_GetbForceMiplevelsToBeResident() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetbForceMiplevelsToBeResident() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetbForceMiplevelsToBeResident(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bIgnoreStreamingMipBias
// Declaration: unsigned char bIgnoreStreamingMipBias : 1
unsigned char UStreamableRenderAsset::M_GetbIgnoreStreamingMipBias() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetbIgnoreStreamingMipBias() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetbIgnoreStreamingMipBias(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bUseCinematicMipLevels
// Declaration: unsigned char bUseCinematicMipLevels : 1
unsigned char UStreamableRenderAsset::M_GetbUseCinematicMipLevels() const {
	return Read<unsigned char>((byte*)this + 84);
}
unsigned char* UStreamableRenderAsset::M_PtrGetbUseCinematicMipLevels() {
	return reinterpret_cast<unsigned char*>((byte*)this + 84);
}
void UStreamableRenderAsset::M_SetbUseCinematicMipLevels(const unsigned char& value) {
	Write((byte*)this + 84, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}