//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HKFeatureOnboardingRecordInaccessibilityCache : NSObject
{
    NSUserDefaults *_cachingDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048cde
- (void)updateForRetrievedOnboardingRecord:(id)arg1 featureIdentifier:(id)arg2;	// IMP=0x0000000000048b47
- (id)_cachedOnboardingRecordForFeatureIdentifier:(id)arg1;	// IMP=0x000000000004895c
- (id)fallbackOnboardingRecordForError:(id)arg1 featureIdentifier:(id)arg2;	// IMP=0x00000000000488d5
- (id)initWithCachingDefaults:(id)arg1;	// IMP=0x000000000004886a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

