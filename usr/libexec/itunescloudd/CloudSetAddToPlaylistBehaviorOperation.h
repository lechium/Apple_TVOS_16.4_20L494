//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudSetAddToPlaylistBehaviorOperation
{
    long long _addToPlaylistBehavior;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000010f906
- (void)main;	// IMP=0x002000000010f439
- (_Bool)isPersistent;	// IMP=0x001000000010f431
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000010f3b4
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000010f33a
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 addToPlaylistBehavior:(long long)arg3;	// IMP=0x001000000010f2f6
- (id)initWithAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2;	// IMP=0x001000000010f283

@end

