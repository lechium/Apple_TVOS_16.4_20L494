//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TVPPlaybackInterruptionGroup;

__attribute__((visibility("hidden")))
@interface TVPPlaybackInterruptionCenter : NSObject
{
    NSMutableDictionary *_interruptionGroupByInterruptionID;	// 8 = 0x8
    TVPPlaybackInterruptionGroup *_uninterruptedGroup;	// 16 = 0x10
}

+ (id)defaultInterruptionCenter;	// IMP=0x00100000000a1df6
- (void).cxx_destruct;	// IMP=0x00000000000a2471
@property(retain, nonatomic) TVPPlaybackInterruptionGroup *uninterruptedGroup; // @synthesize uninterruptedGroup=_uninterruptedGroup;
@property(retain, nonatomic) NSMutableDictionary *interruptionGroupByInterruptionID; // @synthesize interruptionGroupByInterruptionID=_interruptionGroupByInterruptionID;
- (void)removeInterruptable:(id)arg1;	// IMP=0x00000000000a23c2
- (void)addInterruptable:(id)arg1;	// IMP=0x00000000000a21dd
- (void)interruptionDidEndWithID:(id)arg1;	// IMP=0x00000000000a2109
- (void)interruptionWillEndWithID:(id)arg1;	// IMP=0x00000000000a2079
- (void)interruptionDidBeginWithID:(id)arg1;	// IMP=0x00000000000a1fe9
- (void)interruptionWillBeginWithID:(id)arg1;	// IMP=0x00000000000a1f21
- (id)_allInterruptionGroups;	// IMP=0x00000000000a1e4b
- (id)init;	// IMP=0x00000000000a1d81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

