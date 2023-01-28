#include "../SDK.h"
#include "MovieScene3DAttachSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AttachSocketName
// Declaration: struct FName AttachSocketName
struct FName UMovieScene3DAttachSection::M_GetAttachSocketName() const {
	return Read<struct FName>((byte*)this + 280);
}
struct FName* UMovieScene3DAttachSection::M_PtrGetAttachSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 280);
}
void UMovieScene3DAttachSection::M_SetAttachSocketName(const struct FName& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of AttachComponentName
// Declaration: struct FName AttachComponentName
struct FName UMovieScene3DAttachSection::M_GetAttachComponentName() const {
	return Read<struct FName>((byte*)this + 288);
}
struct FName* UMovieScene3DAttachSection::M_PtrGetAttachComponentName() {
	return reinterpret_cast<struct FName*>((byte*)this + 288);
}
void UMovieScene3DAttachSection::M_SetAttachComponentName(const struct FName& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of AttachmentLocationRule
// Declaration: EAttachmentRule AttachmentLocationRule
EAttachmentRule UMovieScene3DAttachSection::M_GetAttachmentLocationRule() const {
	return Read<EAttachmentRule>((byte*)this + 296);
}
EAttachmentRule* UMovieScene3DAttachSection::M_PtrGetAttachmentLocationRule() {
	return reinterpret_cast<EAttachmentRule*>((byte*)this + 296);
}
void UMovieScene3DAttachSection::M_SetAttachmentLocationRule(const EAttachmentRule& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of AttachmentRotationRule
// Declaration: EAttachmentRule AttachmentRotationRule
EAttachmentRule UMovieScene3DAttachSection::M_GetAttachmentRotationRule() const {
	return Read<EAttachmentRule>((byte*)this + 297);
}
EAttachmentRule* UMovieScene3DAttachSection::M_PtrGetAttachmentRotationRule() {
	return reinterpret_cast<EAttachmentRule*>((byte*)this + 297);
}
void UMovieScene3DAttachSection::M_SetAttachmentRotationRule(const EAttachmentRule& value) {
	Write((byte*)this + 297, value);
}
// Member Getter and Setter of AttachmentScaleRule
// Declaration: EAttachmentRule AttachmentScaleRule
EAttachmentRule UMovieScene3DAttachSection::M_GetAttachmentScaleRule() const {
	return Read<EAttachmentRule>((byte*)this + 298);
}
EAttachmentRule* UMovieScene3DAttachSection::M_PtrGetAttachmentScaleRule() {
	return reinterpret_cast<EAttachmentRule*>((byte*)this + 298);
}
void UMovieScene3DAttachSection::M_SetAttachmentScaleRule(const EAttachmentRule& value) {
	Write((byte*)this + 298, value);
}
// Member Getter and Setter of DetachmentLocationRule
// Declaration: EDetachmentRule DetachmentLocationRule
EDetachmentRule UMovieScene3DAttachSection::M_GetDetachmentLocationRule() const {
	return Read<EDetachmentRule>((byte*)this + 299);
}
EDetachmentRule* UMovieScene3DAttachSection::M_PtrGetDetachmentLocationRule() {
	return reinterpret_cast<EDetachmentRule*>((byte*)this + 299);
}
void UMovieScene3DAttachSection::M_SetDetachmentLocationRule(const EDetachmentRule& value) {
	Write((byte*)this + 299, value);
}
// Member Getter and Setter of DetachmentRotationRule
// Declaration: EDetachmentRule DetachmentRotationRule
EDetachmentRule UMovieScene3DAttachSection::M_GetDetachmentRotationRule() const {
	return Read<EDetachmentRule>((byte*)this + 300);
}
EDetachmentRule* UMovieScene3DAttachSection::M_PtrGetDetachmentRotationRule() {
	return reinterpret_cast<EDetachmentRule*>((byte*)this + 300);
}
void UMovieScene3DAttachSection::M_SetDetachmentRotationRule(const EDetachmentRule& value) {
	Write((byte*)this + 300, value);
}
// Member Getter and Setter of DetachmentScaleRule
// Declaration: EDetachmentRule DetachmentScaleRule
EDetachmentRule UMovieScene3DAttachSection::M_GetDetachmentScaleRule() const {
	return Read<EDetachmentRule>((byte*)this + 301);
}
EDetachmentRule* UMovieScene3DAttachSection::M_PtrGetDetachmentScaleRule() {
	return reinterpret_cast<EDetachmentRule*>((byte*)this + 301);
}
void UMovieScene3DAttachSection::M_SetDetachmentScaleRule(const EDetachmentRule& value) {
	Write((byte*)this + 301, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}