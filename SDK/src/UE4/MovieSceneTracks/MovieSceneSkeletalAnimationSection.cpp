#include "../SDK.h"
#include "MovieSceneSkeletalAnimationSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Params
// Declaration: struct FMovieSceneSkeletalAnimationParams Params
struct FMovieSceneSkeletalAnimationParams UMovieSceneSkeletalAnimationSection::M_GetParams() const {
	return Read<struct FMovieSceneSkeletalAnimationParams>((byte*)this + 232);
}
struct FMovieSceneSkeletalAnimationParams* UMovieSceneSkeletalAnimationSection::M_PtrGetParams() {
	return reinterpret_cast<struct FMovieSceneSkeletalAnimationParams*>((byte*)this + 232);
}
void UMovieSceneSkeletalAnimationSection::M_SetParams(const struct FMovieSceneSkeletalAnimationParams& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of AnimSequence
// Declaration: class UAnimSequence* AnimSequence
class UAnimSequence* UMovieSceneSkeletalAnimationSection::M_GetAnimSequence() const {
	return Read<class UAnimSequence*>((byte*)this + 448);
}
class UAnimSequence** UMovieSceneSkeletalAnimationSection::M_PtrGetAnimSequence() {
	return reinterpret_cast<class UAnimSequence**>((byte*)this + 448);
}
void UMovieSceneSkeletalAnimationSection::M_SetAnimSequence(const class UAnimSequence*& value) {
	Write((byte*)this + 448, value);
}
// Member Getter and Setter of Animation
// Declaration: class UAnimSequenceBase* Animation
class UAnimSequenceBase* UMovieSceneSkeletalAnimationSection::M_GetAnimation() const {
	return Read<class UAnimSequenceBase*>((byte*)this + 456);
}
class UAnimSequenceBase** UMovieSceneSkeletalAnimationSection::M_PtrGetAnimation() {
	return reinterpret_cast<class UAnimSequenceBase**>((byte*)this + 456);
}
void UMovieSceneSkeletalAnimationSection::M_SetAnimation(const class UAnimSequenceBase*& value) {
	Write((byte*)this + 456, value);
}
// Member Getter and Setter of StartOffset
// Declaration: float StartOffset
float UMovieSceneSkeletalAnimationSection::M_GetStartOffset() const {
	return Read<float>((byte*)this + 464);
}
float* UMovieSceneSkeletalAnimationSection::M_PtrGetStartOffset() {
	return reinterpret_cast<float*>((byte*)this + 464);
}
void UMovieSceneSkeletalAnimationSection::M_SetStartOffset(const float& value) {
	Write((byte*)this + 464, value);
}
// Member Getter and Setter of EndOffset
// Declaration: float EndOffset
float UMovieSceneSkeletalAnimationSection::M_GetEndOffset() const {
	return Read<float>((byte*)this + 468);
}
float* UMovieSceneSkeletalAnimationSection::M_PtrGetEndOffset() {
	return reinterpret_cast<float*>((byte*)this + 468);
}
void UMovieSceneSkeletalAnimationSection::M_SetEndOffset(const float& value) {
	Write((byte*)this + 468, value);
}
// Member Getter and Setter of PlayRate
// Declaration: float PlayRate
float UMovieSceneSkeletalAnimationSection::M_GetPlayRate() const {
	return Read<float>((byte*)this + 472);
}
float* UMovieSceneSkeletalAnimationSection::M_PtrGetPlayRate() {
	return reinterpret_cast<float*>((byte*)this + 472);
}
void UMovieSceneSkeletalAnimationSection::M_SetPlayRate(const float& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of bReverse
// Declaration: unsigned char bReverse : 1
unsigned char UMovieSceneSkeletalAnimationSection::M_GetbReverse() const {
	return Read<unsigned char>((byte*)this + 476);
}
unsigned char* UMovieSceneSkeletalAnimationSection::M_PtrGetbReverse() {
	return reinterpret_cast<unsigned char*>((byte*)this + 476);
}
void UMovieSceneSkeletalAnimationSection::M_SetbReverse(const unsigned char& value) {
	Write((byte*)this + 476, value);
}
// Member Getter and Setter of SlotName
// Declaration: struct FName SlotName
struct FName UMovieSceneSkeletalAnimationSection::M_GetSlotName() const {
	return Read<struct FName>((byte*)this + 480);
}
struct FName* UMovieSceneSkeletalAnimationSection::M_PtrGetSlotName() {
	return reinterpret_cast<struct FName*>((byte*)this + 480);
}
void UMovieSceneSkeletalAnimationSection::M_SetSlotName(const struct FName& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of StartLocationOffset
// Declaration: struct FVector StartLocationOffset
struct FVector UMovieSceneSkeletalAnimationSection::M_GetStartLocationOffset() const {
	return Read<struct FVector>((byte*)this + 488);
}
struct FVector* UMovieSceneSkeletalAnimationSection::M_PtrGetStartLocationOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 488);
}
void UMovieSceneSkeletalAnimationSection::M_SetStartLocationOffset(const struct FVector& value) {
	Write((byte*)this + 488, value);
}
// Member Getter and Setter of StartRotationOffset
// Declaration: struct FRotator StartRotationOffset
struct FRotator UMovieSceneSkeletalAnimationSection::M_GetStartRotationOffset() const {
	return Read<struct FRotator>((byte*)this + 500);
}
struct FRotator* UMovieSceneSkeletalAnimationSection::M_PtrGetStartRotationOffset() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 500);
}
void UMovieSceneSkeletalAnimationSection::M_SetStartRotationOffset(const struct FRotator& value) {
	Write((byte*)this + 500, value);
}
// Member Getter and Setter of bMatchWithPrevious
// Declaration: bool bMatchWithPrevious
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchWithPrevious() const {
	return Read<bool>((byte*)this + 512);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchWithPrevious() {
	return reinterpret_cast<bool*>((byte*)this + 512);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchWithPrevious(const bool& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of MatchedBoneName
// Declaration: struct FName MatchedBoneName
struct FName UMovieSceneSkeletalAnimationSection::M_GetMatchedBoneName() const {
	return Read<struct FName>((byte*)this + 516);
}
struct FName* UMovieSceneSkeletalAnimationSection::M_PtrGetMatchedBoneName() {
	return reinterpret_cast<struct FName*>((byte*)this + 516);
}
void UMovieSceneSkeletalAnimationSection::M_SetMatchedBoneName(const struct FName& value) {
	Write((byte*)this + 516, value);
}
// Member Getter and Setter of MatchedLocationOffset
// Declaration: struct FVector MatchedLocationOffset
struct FVector UMovieSceneSkeletalAnimationSection::M_GetMatchedLocationOffset() const {
	return Read<struct FVector>((byte*)this + 524);
}
struct FVector* UMovieSceneSkeletalAnimationSection::M_PtrGetMatchedLocationOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 524);
}
void UMovieSceneSkeletalAnimationSection::M_SetMatchedLocationOffset(const struct FVector& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of MatchedRotationOffset
// Declaration: struct FRotator MatchedRotationOffset
struct FRotator UMovieSceneSkeletalAnimationSection::M_GetMatchedRotationOffset() const {
	return Read<struct FRotator>((byte*)this + 536);
}
struct FRotator* UMovieSceneSkeletalAnimationSection::M_PtrGetMatchedRotationOffset() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 536);
}
void UMovieSceneSkeletalAnimationSection::M_SetMatchedRotationOffset(const struct FRotator& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of bMatchTranslation
// Declaration: bool bMatchTranslation
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchTranslation() const {
	return Read<bool>((byte*)this + 548);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchTranslation() {
	return reinterpret_cast<bool*>((byte*)this + 548);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchTranslation(const bool& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of bMatchIncludeZHeight
// Declaration: bool bMatchIncludeZHeight
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchIncludeZHeight() const {
	return Read<bool>((byte*)this + 549);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchIncludeZHeight() {
	return reinterpret_cast<bool*>((byte*)this + 549);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchIncludeZHeight(const bool& value) {
	Write((byte*)this + 549, value);
}
// Member Getter and Setter of bMatchRotationYaw
// Declaration: bool bMatchRotationYaw
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchRotationYaw() const {
	return Read<bool>((byte*)this + 550);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchRotationYaw() {
	return reinterpret_cast<bool*>((byte*)this + 550);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchRotationYaw(const bool& value) {
	Write((byte*)this + 550, value);
}
// Member Getter and Setter of bMatchRotationPitch
// Declaration: bool bMatchRotationPitch
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchRotationPitch() const {
	return Read<bool>((byte*)this + 551);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchRotationPitch() {
	return reinterpret_cast<bool*>((byte*)this + 551);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchRotationPitch(const bool& value) {
	Write((byte*)this + 551, value);
}
// Member Getter and Setter of bMatchRotationRoll
// Declaration: bool bMatchRotationRoll
bool UMovieSceneSkeletalAnimationSection::M_GetbMatchRotationRoll() const {
	return Read<bool>((byte*)this + 552);
}
bool* UMovieSceneSkeletalAnimationSection::M_PtrGetbMatchRotationRoll() {
	return reinterpret_cast<bool*>((byte*)this + 552);
}
void UMovieSceneSkeletalAnimationSection::M_SetbMatchRotationRoll(const bool& value) {
	Write((byte*)this + 552, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}