//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface GKCDGameSettings : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0010000000227ff4

// Remaining properties
@property(copy, nonatomic) NSString *allowFriendListAccess; // @dynamic allowFriendListAccess;
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

