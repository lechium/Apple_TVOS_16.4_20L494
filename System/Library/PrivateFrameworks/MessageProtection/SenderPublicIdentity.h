//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, RegisteredPreKey;

__attribute__((visibility("hidden")))
@interface SenderPublicIdentity : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x008000000001a6b6

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *destinationHash; // @dynamic destinationHash;
@property(retain, nonatomic) RegisteredPreKey *messagedKey; // @dynamic messagedKey;
@property(retain, nonatomic) NSData *skippedCounters; // @dynamic skippedCounters;
@property(nonatomic) int upperBufferIndex; // @dynamic upperBufferIndex;

@end
