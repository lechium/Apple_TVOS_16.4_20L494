//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKTurnBasedExchangeCacheObject, NSData, NSDate;

@interface GKTurnBasedExchangeReplyCacheObject
{
}

+ (id)entityName;	// IMP=0x0040000000167920
- (id)internalRepresentation;	// IMP=0x0020000000167c81
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000016792d

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) GKTurnBasedExchangeCacheObject *exchange; // @dynamic exchange;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(nonatomic) int recipientIndex; // @dynamic recipientIndex;
@property(retain, nonatomic) NSDate *replyDate; // @dynamic replyDate;

@end

