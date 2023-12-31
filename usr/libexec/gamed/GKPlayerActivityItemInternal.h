//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerActivityRelationships, NSDate, NSString;

@interface GKPlayerActivityItemInternal
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_scrollId;	// 16 = 0x10
    long long _activityType;	// 24 = 0x18
    long long _layoutType;	// 32 = 0x20
    NSDate *_timeStamp;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSString *_summaryMessage;	// 56 = 0x38
    GKPlayerActivityRelationships *_relationships;	// 64 = 0x40
    NSString *_instrumentationKey;	// 72 = 0x48
}

+ (id)constantToTypeMap;	// IMP=0x004000000013f1de
+ (id)typeToConstantMapMetrics;	// IMP=0x001000000013f0c4
+ (id)typeToConstantMap;	// IMP=0x001000000013efa3
+ (id)secureCodedPropertyKeys;	// IMP=0x001000000013e9d0
- (void).cxx_destruct;	// IMP=0x002000000013f62b
@property(retain, nonatomic) NSString *instrumentationKey; // @synthesize instrumentationKey=_instrumentationKey;
@property(retain, nonatomic) GKPlayerActivityRelationships *relationships; // @synthesize relationships=_relationships;
@property(retain, nonatomic) NSString *summaryMessage; // @synthesize summaryMessage=_summaryMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *scrollId; // @synthesize scrollId=_scrollId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x001000000013f2ff
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000013eb75

@end

