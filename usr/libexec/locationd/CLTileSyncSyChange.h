//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CLTileSyncSyChange : NSObject
{
    NSString *_syncKey;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

@property(retain) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void)dealloc;	// IMP=0x00100000000d185f
- (void)setChangeType:(long long)arg1;	// IMP=0x00100000000d1777
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
- (void)setObjectIdentifier:(id)arg1;	// IMP=0x00100000000d1752
@property(readonly, nonatomic) NSString *objectIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

