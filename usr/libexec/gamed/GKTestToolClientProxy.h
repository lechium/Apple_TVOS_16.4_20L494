//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal;

@interface GKTestToolClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a5932
@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x00100000001a588e
- (id)adamID;	// IMP=0x00100000001a580f
- (id)bundleShortVersion;	// IMP=0x00100000001a5790
- (id)bundleVersion;	// IMP=0x00100000001a5711
- (id)bundleIdentifier;	// IMP=0x00100000001a5692
- (id)transportWithCredential:(id)arg1;	// IMP=0x00100000001a55b7
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5161

@end
