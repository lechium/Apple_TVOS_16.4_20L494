//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSHashTable *_activeModelGenericAVItems;	// 16 = 0x10
    _Bool _isSiriInitiated;	// 24 = 0x18
    _Bool _prioritizeStartupOverQuality;	// 25 = 0x19
    MPPropertySet *_itemProperties;	// 32 = 0x20
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 40 = 0x28
    MPSectionedCollection *_trackModels;	// 48 = 0x30
    MPSectionedCollection *_tracks;	// 56 = 0x38
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000323fd5
@property(retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet; // @synthesize identityPropertySet=_identityPropertySet;
@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
- (id)trackForItemAtIndex:(long long)arg1;	// IMP=0x0000000000323f3d
- (long long)removeExplicitItems;	// IMP=0x0000000000323e04
- (void)removeAllItems;	// IMP=0x0000000000323dbf
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;	// IMP=0x0000000000323c0d
- (id)AVItemAtIndex:(long long)arg1;	// IMP=0x0000000000323929
- (void)updateWithPersonalizedResponse:(id)arg1;	// IMP=0x000000000032353b
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x000000000032343a

@end
