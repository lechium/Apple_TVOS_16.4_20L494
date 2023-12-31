//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class Channel, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface InvitedUser : NSManagedObject
{
}

+ (id)channelKeyPath;	// IMP=0x0040000000071f2d
+ (id)senderHandleKeyPath;	// IMP=0x0040000000071f20
+ (id)invitedHandleKeyPath;	// IMP=0x0040000000071f13
+ (id)predicateForChannel:(id)arg1;	// IMP=0x004000000007206e
+ (id)predicateForSenderHandle:(id)arg1;	// IMP=0x0040000000071fd4
+ (id)predicateForInvitedHandle:(id)arg1;	// IMP=0x0040000000071f3a
+ (id)fetchRequest;	// IMP=0x00400000000734c6

// Remaining properties
@property(retain, nonatomic) Channel *channel; // @dynamic channel;
@property(copy, nonatomic) NSDate *dateInvitationPayloadCreated; // @dynamic dateInvitationPayloadCreated;
@property(retain, nonatomic) NSData *invitationPayload; // @dynamic invitationPayload;
@property(copy, nonatomic) NSString *invitedHandle; // @dynamic invitedHandle;
@property(copy, nonatomic) NSString *senderHandle; // @dynamic senderHandle;

@end

