//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface GKActivityFeedBulletin
{
    _Bool _isMalformed;	// 16 = 0x10
    long long _activityFeedAction;	// 24 = 0x18
    NSString *_titleFromPush;	// 32 = 0x20
    NSString *_bodyFromPush;	// 40 = 0x28
    NSString *_subtitleFromPush;	// 48 = 0x30
    NSDictionary *_relationships;	// 56 = 0x38
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000214b65
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002146eb
- (void).cxx_destruct;	// IMP=0x0020000000216260
@property _Bool isMalformed; // @synthesize isMalformed=_isMalformed;
@property(retain) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(retain) NSString *subtitleFromPush; // @synthesize subtitleFromPush=_subtitleFromPush;
@property(retain) NSString *bodyFromPush; // @synthesize bodyFromPush=_bodyFromPush;
@property(retain) NSString *titleFromPush; // @synthesize titleFromPush=_titleFromPush;
@property long long activityFeedAction; // @synthesize activityFeedAction=_activityFeedAction;
- (void)reportMetricsForActionID:(id)arg1 withAdditionalFields:(id)arg2;	// IMP=0x0010000000215cd4
- (void)handleAction:(id)arg1;	// IMP=0x0010000000215a88
- (void)assembleBulletin;	// IMP=0x00100000002154d2
- (id)getRelationshipLeaderboardIdentifier;	// IMP=0x001000000021544b
- (id)getRelationshipGameAdamId;	// IMP=0x00100000002153c4
- (id)getRelationshipGameImage;	// IMP=0x001000000021531c
- (id)getRelationshipGameBundleId;	// IMP=0x0010000000215295
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000214983
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002146f3
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000002143b0

@end

