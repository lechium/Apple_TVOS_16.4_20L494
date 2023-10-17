//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome, NSString, NSUUID, _HMContext;

__attribute__((visibility("hidden")))
@interface _HMAutomationBuilder : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    _HMContext *_context;	// 32 = 0x20
}

+ (void)adoptExternalCategoriesFromClasses:(Class)arg1;	// IMP=0x0010000000034c9d
- (void).cxx_destruct;	// IMP=0x0000000000034c6a
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)initWithContext:(id)arg1 home:(id)arg2;	// IMP=0x0000000000034b73
- (id)assistantIdentifier;	// IMP=0x0000000000035010
- (id)uuid;	// IMP=0x0000000000035008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

