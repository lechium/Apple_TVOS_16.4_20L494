//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, NSUUID;

@interface UserActivityToBTLEPayload : NSObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDate *_when;	// 24 = 0x18
    NSData *_userInfoPayload;	// 32 = 0x20
    NSURL *_webpageURL;	// 40 = 0x28
    NSData *_streamsData;	// 48 = 0x30
    NSString *_teamID;	// 56 = 0x38
    NSString *_activityType;	// 64 = 0x40
    NSMutableDictionary *_additionalItems;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000055e14
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy) NSData *userInfoPayload; // @synthesize userInfoPayload=_userInfoPayload;
@property(copy) NSDate *when; // @synthesize when=_when;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;	// IMP=0x0010000000055969
- (id)encodeAsData;	// IMP=0x00100000000550bf
- (id)initWithData:(id)arg1;	// IMP=0x00100000000546a0
- (void)addAdditionalItem:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000054592
@property(readonly, copy) NSDictionary *additionalItems;
- (id)initWithNSError:(id)arg1;	// IMP=0x001000000005450c
- (id)init:(id)arg1 title:(id)arg2 date:(id)arg3 userInfoPayload:(id)arg4 teamID:(id)arg5 activityType:(id)arg6;	// IMP=0x0010000000054336

@end
