//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (AXUtilsPrivate)
+ (void)_accessibilityPerformValidations:(id)arg1;	// IMP=0x002000000006c920
- (_Bool)_accessibilityInterposesAsOnboardingApp;	// IMP=0x00100000000029f0
- (_Bool)_accessibilityInterposesAsSystemApplication;	// IMP=0x00100000000029d0
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;	// IMP=0x00100000000126a0
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;	// IMP=0x0010000000012600
- (void)handleFailoversForClassNamed:(id)arg1;	// IMP=0x00100000000151e0
- (void)_accessibilityPerformSafeValueKeyBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 onClass:(Class)arg3;	// IMP=0x0010000000014d30
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;	// IMP=0x0010000000014af0
- (id)safeValueForKeyPath:(id)arg1;	// IMP=0x0010000000014880
- (id)__axValueForKey:(id)arg1;	// IMP=0x0010000000014810
- (id)safeValueForKey:(id)arg1;	// IMP=0x0010000000014020
- (id)safeUIViewForKey:(id)arg1;	// IMP=0x0010000000013f80
- (id)safeDictionaryForKey:(id)arg1;	// IMP=0x0010000000013ee0
- (id)safeSetForKey:(id)arg1;	// IMP=0x0010000000013e40
- (id)safeArrayForKey:(id)arg1;	// IMP=0x0010000000013da0
- (id)safeStringForKey:(id)arg1;	// IMP=0x0010000000013d00
- (struct CGRect)safeCGRectForKey:(id)arg1;	// IMP=0x0010000000013c30
- (struct CGSize)safeCGSizeForKey:(id)arg1;	// IMP=0x0010000000013b60
- (struct CGPoint)safeCGPointForKey:(id)arg1;	// IMP=0x0010000000013a90
- (double)safeCGFloatForKey:(id)arg1;	// IMP=0x0010000000013a20
- (struct _NSRange)safeRangeForKey:(id)arg1;	// IMP=0x0010000000013960
- (double)safeTimeIntervalForKey:(id)arg1;	// IMP=0x0010000000013900
- (double)safeDoubleForKey:(id)arg1;	// IMP=0x0010000000013840
- (float)safeFloatForKey:(id)arg1;	// IMP=0x0010000000013780
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;	// IMP=0x0010000000013670
- (long long)safeIntegerForKey:(id)arg1;	// IMP=0x0010000000013570
- (unsigned int)safeUnsignedIntForKey:(id)arg1;	// IMP=0x0010000000013480
- (int)safeIntForKey:(id)arg1;	// IMP=0x0010000000013390
- (_Bool)safeBoolForKey:(id)arg1;	// IMP=0x00100000000132c0
- (void *)safeIvarForKey:(id)arg1;	// IMP=0x0010000000012fc0
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(_Bool)arg1;	// IMP=0x0010000000050750
- (_Bool)_accessibilityIsSpeakThisTemporarilyDisabled;	// IMP=0x0010000000050720
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000006db20
- (void)_accessibilityRemoveValueForKey:(id)arg1;	// IMP=0x001000000006dac0
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x001000000006da30
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x001000000006d9a0
- (void)_accessibilitySetBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x001000000006d900
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000006d870
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3;	// IMP=0x001000000006d140
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;	// IMP=0x001000000006d0b0
- (long long)_accessibilityIntegerValueForKey:(id)arg1;	// IMP=0x001000000006d020
- (_Bool)_accessibilityBoolValueForKey:(id)arg1;	// IMP=0x001000000006cf90
- (id)_accessibilityValueForKey:(id)arg1;	// IMP=0x001000000006ca20
- (id)_axDictionaryQueue;	// IMP=0x001000000006c960
- (id)axTrampolineForClass:(Class)arg1;	// IMP=0x00100000000797b0
- (id)axSuperTrampoline;	// IMP=0x0010000000079730
@property(nonatomic, setter=_axSetIsWrappedPointer:) _Bool _axIsWrappedPointer;
- (id)ax_prettyDescription;	// IMP=0x0010000000118b10
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;	// IMP=0x0010000000117e50
@end

