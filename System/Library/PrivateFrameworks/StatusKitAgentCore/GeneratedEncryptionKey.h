//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class Channel, NSData, NSDate;

__attribute__((visibility("hidden")))
@interface GeneratedEncryptionKey : NSManagedObject
{
}

+ (id)dateGeneratedKeyPath;	// IMP=0x0040000000051908
+ (id)fetchRequest;	// IMP=0x00400000000734a6

// Remaining properties
@property(retain, nonatomic) Channel *channel; // @dynamic channel;
@property(copy, nonatomic) NSDate *dateGenerated; // @dynamic dateGenerated;
@property(retain, nonatomic) NSData *originalOutgoingRatchetState; // @dynamic originalOutgoingRatchetState;

@end

