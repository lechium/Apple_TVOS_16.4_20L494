//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKAchievementCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001531b8
- (id)internalRepresentation;	// IMP=0x00200000001531b0
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000152ed4

// Remaining properties
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(nonatomic) float percentComplete; // @dynamic percentComplete;

@end

