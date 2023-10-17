//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFUIPreferences, NSString, NSUUID;

@interface SRPreferences : NSObject
{
    AFUIPreferences *_internalPreferences;	// 8 = 0x8
    NSString *_lastCoreDuetPunchoutID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000065c2b
@property(copy, nonatomic) NSString *lastCoreDuetPunchoutID; // @synthesize lastCoreDuetPunchoutID=_lastCoreDuetPunchoutID;
@property(nonatomic) _Bool hasPresentedSiriAssetsNotification;
@property(nonatomic) long long showTapToEditTipCount;
@property(retain, nonatomic) NSUUID *lastPinnedTranscriptItemIdentifier;
@property(nonatomic) long long lastVisibleTranscriptItemIndex;
@property(nonatomic) double lastTranscriptVerticalContentOffset;
@property(nonatomic) long long lastKnownInterfaceOrientation;
@property(nonatomic) _Bool siriIsActive;
- (void)preferences:(id)arg1 didChangeValueForKey:(id)arg2;	// IMP=0x001000000006590a
- (id)init;	// IMP=0x0010000000065881

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

