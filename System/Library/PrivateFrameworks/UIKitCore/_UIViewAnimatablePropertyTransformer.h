//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, _UICompoundObjectMap;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewAnimatablePropertyTransformer : NSObject
{
    _Bool _unsafe;	// 8 = 0x8
    _Bool _presentationValueCallbackRan;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_lockingQueue;	// 16 = 0x10
    _Bool _clearsCapturesPropertiesOnStabilization;	// 24 = 0x18
    CDUnknownBlockType _modelValueChangedCallback;	// 32 = 0x20
    CDUnknownBlockType _presentationValueChangedCallback;	// 40 = 0x28
    CDUnknownBlockType _stabilizedCallback;	// 48 = 0x30
    _UICompoundObjectMap *_capturedProperties;	// 56 = 0x38
    NSMutableSet *_runningProgresses;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000010d4a53
@property(retain, nonatomic) NSMutableSet *runningProgresses; // @synthesize runningProgresses=_runningProgresses;
@property(nonatomic) _Bool clearsCapturesPropertiesOnStabilization; // @synthesize clearsCapturesPropertiesOnStabilization=_clearsCapturesPropertiesOnStabilization;
@property(retain, nonatomic) _UICompoundObjectMap *capturedProperties; // @synthesize capturedProperties=_capturedProperties;
@property(copy, nonatomic) CDUnknownBlockType stabilizedCallback; // @synthesize stabilizedCallback=_stabilizedCallback;
@property(copy, nonatomic) CDUnknownBlockType presentationValueChangedCallback; // @synthesize presentationValueChangedCallback=_presentationValueChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType modelValueChangedCallback; // @synthesize modelValueChangedCallback=_modelValueChangedCallback;
- (void)performWithLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000010d49af
- (void)progressInvalidated:(id)arg1;	// IMP=0x00000000010d49a9
- (void)modelValueUpdatedForProgress:(id)arg1;	// IMP=0x00000000010d4856
- (void)presentationValueStabilizedForProgress:(id)arg1;	// IMP=0x00000000010d45ed
- (void)presentationValueUpdatedForProgress:(id)arg1;	// IMP=0x00000000010d4384
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000010d4099
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;	// IMP=0x00000000010d3fa7
- (id)initWithInputAnimatableProperties:(id)arg1 unsafe:(_Bool)arg2 modelValueSetter:(CDUnknownBlockType)arg3 presentationValueSetter:(CDUnknownBlockType)arg4;	// IMP=0x00000000010d3f84
- (id)initWithInputAnimatableProperties:(id)arg1 unsafe:(_Bool)arg2 modelValueSetter:(CDUnknownBlockType)arg3 presentationValueSetter:(CDUnknownBlockType)arg4 stabilizedCallback:(CDUnknownBlockType)arg5;	// IMP=0x00000000010d3f68
- (id)initWithInputAnimatableProperties:(id)arg1 unsafe:(_Bool)arg2 modelValueSetter:(CDUnknownBlockType)arg3 presentationValueSetter:(CDUnknownBlockType)arg4 stabilizedCallback:(CDUnknownBlockType)arg5 allowsProgressAnimatableProperties:(_Bool)arg6;	// IMP=0x00000000010d3bea

@end

