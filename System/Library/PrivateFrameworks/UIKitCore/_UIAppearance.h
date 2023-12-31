//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, _UIAppearanceCustomizableClassInfo;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject
{
    NSArray *_containerList;	// 8 = 0x8
    NSMutableArray *_appearanceInvocations;	// 16 = 0x10
    NSMapTable *_invocationSources;	// 24 = 0x18
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;	// 32 = 0x20
}

+ (void)_setInvalidatesViewsOnAppearanceChange:(_Bool)arg1;	// IMP=0x0060000000758d24
+ (id)recursiveDescription;	// IMP=0x0060000000758b1c
+ (void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3;	// IMP=0x0060000000758879
+ (_Bool)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;	// IMP=0x00600000007580dd
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x006000000075737b
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x0060000000757330
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x006000000075715e
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;	// IMP=0x0060000000757115
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;	// IMP=0x00600000007570a8
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;	// IMP=0x0060000000757093
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(_Bool)arg4;	// IMP=0x0060000000755bc5
+ (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x00600000007559d7
+ (_Bool)_hasAnyCustomizations;	// IMP=0x00600000007559c6
+ (id)_rootAppearancesNode;	// IMP=0x006000000075598a
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;	// IMP=0x0060000000755355
+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;	// IMP=0x0060000000754e9c
+ (id)_pendingRecordInvocationsForSource:(id)arg1;	// IMP=0x0060000000754e02
+ (id)_recorderForSource:(id)arg1;	// IMP=0x0060000000754bdc
+ (id)_windowsForSource:(id)arg1;	// IMP=0x0060000000754bc3
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x0060000000754b88
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x0060000000754af0
+ (void)_setCurrentAppearanceSource:(id)arg1;	// IMP=0x0060000000754aba
+ (id)_currentAppearanceSource;	// IMP=0x0060000000754aad
@property(readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo; // @synthesize _customizableClassInfo;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;	// IMP=0x00000000007582e4
- (id)description;	// IMP=0x000000000075824a
- (void)_invalidateAppearanceInWindow:(id)arg1;	// IMP=0x00000000007580a8
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000075804a
- (void)_handleGetterInvocation:(id)arg1;	// IMP=0x0000000000757ad1
- (void)_handleSetterInvocation:(id)arg1;	// IMP=0x00000000007576ab
- (_Bool)_isRecordingInvocations;	// IMP=0x000000000075769d
- (id)_traitCollection;	// IMP=0x0000000000757695
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1;	// IMP=0x0000000000757433
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000007573fe
- (void)dealloc;	// IMP=0x00000000007570bd
- (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x0000000000755a9b
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x000000000075534d
- (id)_appearanceInvocations;	// IMP=0x0000000000754aa3

@end

